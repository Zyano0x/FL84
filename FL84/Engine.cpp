#include "pch.h"

namespace Engine
{
	std::string GetVehicleName(int VehicleID)
	{
		if (VehicleID == 2301)
			return xorstr_("Wasteland HoverCraft");
		else if (VehicleID == 4304)
			return xorstr_("GunBoat");
		else if (VehicleID == 4301)
			return xorstr_("Hovercar");
		else if (VehicleID == 2302)
			return xorstr_("Air Beast");
		else if (VehicleID == 1301)
			return xorstr_("Hoverbike");
		else if (VehicleID == 1401)
			return xorstr_("Blazing Infantry");
		else if (VehicleID == 4103)
			return xorstr_("Mobile Turret");
		else if (VehicleID == 4102)
			return xorstr_("Flamethrower");
		else if (VehicleID == 1201)
			return xorstr_("Single-Poilt Mecha");
		else if (VehicleID == 4201)
			return xorstr_("4-Legged-Lizard");
		else if (VehicleID == 2201)
			return xorstr_("War Spider");
		else if (VehicleID == 2204)
			return xorstr_("Rocket Tarantula");
		else if (VehicleID == 1305)
			return xorstr_("War Falcon");
		else
			return xorstr_("Unknown Vehicle!");
	}

	std::string GetWeaponType(int WeaponID)
	{
		switch (WeaponID)
		{
		case 1510201:
		case 1510207:
		case 1510208:
		case 1510219:
		case 1510210:
		case 1510216:
		case 1510222:
		case 1510223:
			return xorstr_("[AR]");

		case 1510250:
		case 1510203:
		case 1510209:
		case 1510211:
		case 1510218:
			return xorstr_("[SMG]");

		case 1510204:
		case 1510206:
		case 1510212:
			return xorstr_("[SNP]");

		case 1511521:
		case 1511522:
			return xorstr_("[SPC]");

		case 1510205:
		case 1510214:
		case 1510245:
			return xorstr_("[SHG]");
		}
	}

	std::string WString_UTF8(const std::wstring& wide_string)
	{
		/*std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		return converter.to_bytes(wide_string);*/

		if (wide_string.empty()) return {};
		int size_needed = WideCharToMultiByte(CP_UTF8, 0, wide_string.c_str(), static_cast<int>(wide_string.size()), nullptr, 0, nullptr, nullptr);
		std::string utf8_string(size_needed, 0);
		WideCharToMultiByte(CP_UTF8, 0, wide_string.c_str(), static_cast<int>(wide_string.size()), &utf8_string[0], size_needed, nullptr, nullptr);
		return utf8_string;
	}

	bool IsKeyDown(int VK_Key)
	{
		return ((GetAsyncKeyState(VK_Key) & 0x8000) ? 1 : 0);
	}

	typedef CG::FMatrix* (__thiscall* tGetBoneMatrix)(CG::USkeletalMeshComponent* mesh, CG::FMatrix* result, int index);
	CG::FVector GetBonePosition(CG::USkeletalMeshComponent* mesh, int index)
	{
		if (!mesh)
			return { 0.f, 0.f, 0.f };

		CG::FMatrix matrix{};
		tGetBoneMatrix GetBoneMatrix = reinterpret_cast<tGetBoneMatrix>((uintptr_t)GetModuleHandleW(0) + GET_BONE_MATRIX_OFFSET);
		GetBoneMatrix(mesh, &matrix, index);

		return matrix.WPlane;
	}
}