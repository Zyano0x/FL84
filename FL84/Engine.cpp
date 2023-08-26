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

	float ScreenToEnemy(CG::APlayerController* controller, CG::FVector position)
	{
		CG::FVector2D out;
		if (controller->ProjectWorldLocationToScreen(position, &out, false))
		{
			return (fabs(out.X - (ScreenWidth / 2)) + fabs(out.Y - (ScreenHeight / 2)));
		}
		return 0;
	}
}