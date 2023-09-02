#include "pch.h"

namespace Engine
{
	uint64_t FindPattern(const char* module, const char* pattern)
	{
		uint64_t moduleAdress = (uint64_t)GetModuleHandleA(module);
		if (!moduleAdress)
			return 0;

		static auto patternToByte = [](const char* pattern)
		{
			auto       bytes = std::vector<int>{};
			const auto start = const_cast<char*>(pattern);
			const auto end = const_cast<char*>(pattern) + strlen(pattern);

			for (auto current = start; current < end; ++current)
			{
				if (*current == '?')
				{
					++current;
					if (*current == '?')
						++current;
					bytes.push_back(-1);
				}
				else { bytes.push_back(strtoul(current, &current, 16)); }
			}
			return bytes;
		};

		const auto dosHeader = (PIMAGE_DOS_HEADER)moduleAdress;
		const auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)moduleAdress + dosHeader->e_lfanew);

		const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
		auto       patternBytes = patternToByte(pattern);
		const auto scanBytes = reinterpret_cast<std::uint8_t*>(moduleAdress);

		const auto s = patternBytes.size();
		const auto d = patternBytes.data();

		for (auto i = 0ul; i < sizeOfImage - s; ++i)
		{
			bool found = true;
			for (auto j = 0ul; j < s; ++j)
			{
				if (scanBytes[i + j] != d[j] && d[j] != -1)
				{
					found = false;
					break;
				}
			}
			if (found) { return reinterpret_cast<uintptr_t>(&scanBytes[i]); }
		}
		return NULL;
	}

	std::string GetVehicleName(std::string oName)
	{
		if (oName == "BP_VH_Hover_WL04_C")
			return "Wasteland HoverCraft";
		else if (oName == "BP_VH_Hover_9A03_C")
			return "GunBoat";
		else if (oName == "BP_VH_Hover_Soroll02_C")
			return "Hovercar";
		else if (oName == "BP_VH_Hover_Soroll04_C")
			return "Air Beast";
		else if (oName == "BP_VH_Hover_Soroll03_C")
			return "Hoverbike";
		else if (oName == "BP_VH_TransTL_WL07_C")
			return "Blazing Infantry";
		else if (oName == "BP_SolarVH_Tire_9A04_new_C")
			return "Mobile Turret";
		else if (oName == "BP_SolarVH_Tire_WL01_new_C")
			return "Flamethrower";
		else if (oName == "VH_Leg_9A02_New_C")
			return "Single-Poilt Mecha";
		else if (oName == "BP_VH_Leg_WL03_New_Procedural_C")
			return "4-Legged-Lizard";
		else if (oName == "BP_VH_Leg_WL06_New_C")
			return "War Spider";
		else
			return "Unknown Vehicle!";
	}

	typedef CG::FMatrix* (__thiscall* tGetBoneMatrix)(CG::USkeletalMeshComponent* mesh, CG::FMatrix* result, int index);
	CG::FVector GetBonePosition(CG::USkeletalMeshComponent* mesh, int index)
	{
		if (!mesh)
			return { 0.f, 0.f, 0.f };

		CG::FMatrix matrix{};
		tGetBoneMatrix oGetBoneMatrix = reinterpret_cast<tGetBoneMatrix>((uintptr_t)GetModuleHandleW(NULL) + GET_BONE_MATRIX_OFFSET);
		oGetBoneMatrix(mesh, &matrix, index);

		return matrix.WPlane;
	}

	float GetObjectDistance2D(float x1, float y1, float x2, float y2)
	{
		float xx, yy;
		xx = x1 - x2;
		yy = y1 - y2;
		return sqrt(xx * xx + yy * yy);
	}

	float ScreenToEnemy(CG::APlayerController* controller, CG::FVector position)
	{
		CG::FVector2D out;
		if (controller->ProjectWorldLocationToScreen(position, &out, false))
		{
			return (fabs(out.X - (ScreenWidth / 2)) + fabs(out.Y - (ScreenHeight / 2)));
		}
		return 0;
	}

	bool NerstBoneToScreen(CG::APlayerCameraManager* CameraManager, CG::FVector WorldLocation, CG::FVector& Screenlocation)
	{
		CG::FRotator Rotation = CameraManager->CameraCache.POV.Rotation;
		D3DMATRIX tempMatrix = Math::Matrix(Rotation);

		CG::FVector vAxisX, vAxisY, vAxisZ;

		vAxisX = CG::FVector(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
		vAxisY = CG::FVector(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
		vAxisZ = CG::FVector(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

		CG::FVector vDelta = WorldLocation - CameraManager->CameraCache.POV.Location;
		CG::FVector vTransformed = CG::FVector(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

		if (vTransformed.Z < 0.0001f) return false;


		float FovAngle = CameraManager->CameraCache.POV.FOV;

		float ScreenCenterX = ScreenWidth / 2;
		float ScreenCenterY = ScreenHeight / 2;
		float ScreenCenterZ = ScreenHeight / 2;

		Screenlocation.X = ScreenCenterX + vTransformed.X * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.Z;
		Screenlocation.Y = ScreenCenterY - vTransformed.Y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.Z;
		Screenlocation.Z = ScreenCenterZ - vTransformed.Z * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.Z;

		if (Screenlocation.X > ScreenWidth || Screenlocation.Y > ScreenHeight || Screenlocation.X < 0 || Screenlocation.Y < 0)
			return false;

		return true;
	}

	float GetActorFromCenter(CG::APlayerCameraManager* CameraManager, CG::FVector Point)
	{
		float XDif, YDif, xcenter, ycenter;
		CG::FVector Screen;
		xcenter = ScreenWidth / 2;
		ycenter = ScreenHeight / 2;
		NerstBoneToScreen(CameraManager, Point, Screen);
		Screen.X > xcenter ? XDif = Screen.X - xcenter : XDif = xcenter - Screen.X;
		Screen.Y > ycenter ? YDif = Screen.Y - ycenter : YDif = ycenter - Screen.Y;
		return (float)GetObjectDistance2D(ScreenWidth / 2, ScreenHeight / 2, Screen.X, Screen.Y);
	}

	std::vector<int> HitBoxes = { HEAD, BIP001, UPPERARM_L, UPPERARM_R, HAND_L, HAND_R, THUMB_01_L, THUMB_01_R, THIGH_R, THIGH_L, CALF_R, CALF_L, FOOT_L, FOOT_R, ROOT };
	int GetNearestBone(CG::APlayerCameraManager* CameraManager, CG::ASolarCharacter* Enemy, std::vector<int> Bones)
	{
		FLOAT PriorityDists = FLT_MAX;
		int TargerBone = HitBoxes[0];
		for (int i = 0; i < HitBoxes.size(); i++)
		{
			if (Bones[i] > 0)
			{
				CG::FVector BoneX{ Enemy->Mesh->GetBoneWorldPos(Bones[i]) };
				FLOAT Dist = GetActorFromCenter(CameraManager, BoneX);
				if (Dist < PriorityDists)
				{
					PriorityDists = Dist;
					TargerBone = Bones[i];
				}
			}
		}

		if (std::find(Bones.begin(), Bones.end(), TargerBone) != Bones.end())
			return TargerBone;
		else
			return HEAD;
	}
}