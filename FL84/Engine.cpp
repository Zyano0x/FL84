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

	std::string _English(std::string s)
	{
		for (int i = 0; i < s.size(); i++) {
			if (s[i] < 'A' || s[i] > 'Z' &&
				s[i] < 'a' || s[i] > 'z')
			{
				s.erase(i, 1);
				i--;
			}
		}
		return s;
	}

	std::string __English(std::string s)
	{
		for (int i = 0; i < s.size(); i++) {
			if (s.find_first_of(("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")) != std::string::npos)
			{
				s.erase(i, 1);
				i--;
			}
		}
		return s;
	}

	std::string WString_UTF8(const std::wstring& wide_string)
	{
		/*std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		return converter.to_bytes(wide_string);*/

		if (wide_string.empty()) return "";
		const auto size_needed = WideCharToMultiByte(CP_UTF8, 0, &wide_string.at(0), (int)wide_string.size(), nullptr, 0, nullptr, nullptr);
		if (size_needed <= 0)
			throw std::runtime_error("WideCharToMulitiByte() failded:" + std::to_string(size_needed));
		std::string result(size_needed, 0);
		WideCharToMultiByte(CP_UTF8, 0, &wide_string.at(0), (int)wide_string.size(), &result.at(0), size_needed, nullptr, nullptr);
		return result;
	}

	std::string ReverseWord(std::string Word)
	{
		std::string temp_word = "";
		if (IsArabic(Word))
		{
			std::string FEnglish = _English(Word);
			std::string FArabic = __English(Word);
			std::string Arabic = FarsiType::ConvertToFAGlyphs(FArabic);
			temp_word = FEnglish.append(Arabic);
		}
		else
			temp_word = Word;
		return temp_word;
	}

	bool IsArabic(std::string str)
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str.find("\u0623") != std::string::npos || str.find("\ufe83") != std::string::npos || str.find("\u0623") != std::string::npos || str.find("\ufe84") != std::string::npos || str.find("\ufe84") != std::string::npos
				|| str.find("\u0627") != std::string::npos || str.find("\ufe8d") != std::string::npos || str.find("\u0627") != std::string::npos || str.find("\ufe8e") != std::string::npos || str.find("\ufe8e") != std::string::npos
				|| str.find("\u0622") != std::string::npos || str.find("\ufe81") != std::string::npos || str.find("\u0622") != std::string::npos || str.find("\ufe82") != std::string::npos || str.find("\ufe82") != std::string::npos
				|| str.find("\u0621") != std::string::npos || str.find("\ufe80") != std::string::npos || str.find("\u0621") != std::string::npos || str.find("\u0621") != std::string::npos || str.find("\u0621") != std::string::npos
				|| str.find("\u0624") != std::string::npos || str.find("\ufe85") != std::string::npos || str.find("\u0624") != std::string::npos || str.find("\ufe86") != std::string::npos || str.find("\ufe86") != std::string::npos
				|| str.find("\u0625") != std::string::npos || str.find("\ufe87") != std::string::npos || str.find("\u0625") != std::string::npos || str.find("\ufe88") != std::string::npos || str.find("\ufe88") != std::string::npos
				|| str.find("\u0626") != std::string::npos || str.find("\ufe89") != std::string::npos || str.find("\ufe8b") != std::string::npos || str.find("\ufe8c") != std::string::npos || str.find("\ufe8a") != std::string::npos
				|| str.find("\u0628") != std::string::npos || str.find("\ufe8f") != std::string::npos || str.find("\ufe91") != std::string::npos || str.find("\ufe92") != std::string::npos || str.find("\ufe90") != std::string::npos
				|| str.find("\u067e") != std::string::npos || str.find("\ufb56") != std::string::npos || str.find("\ufb58") != std::string::npos || str.find("\ufb59") != std::string::npos || str.find("\ufb57") != std::string::npos
				|| str.find("\u062A") != std::string::npos || str.find("\ufe95") != std::string::npos || str.find("\ufe97") != std::string::npos || str.find("\ufe98") != std::string::npos || str.find("\ufe96") != std::string::npos
				|| str.find("\u0629") != std::string::npos || str.find("\ufe93") != std::string::npos || str.find("\u0629") != std::string::npos || str.find("\u0629") != std::string::npos || str.find("\ufe94") != std::string::npos
				|| str.find("\u062b") != std::string::npos || str.find("\ufe99") != std::string::npos || str.find("\ufe9b") != std::string::npos || str.find("\ufe9c") != std::string::npos || str.find("\ufe9a") != std::string::npos
				|| str.find("\u062c") != std::string::npos || str.find("\ufe9d") != std::string::npos || str.find("\ufe9f") != std::string::npos || str.find("\ufea0") != std::string::npos || str.find("\ufe9e") != std::string::npos
				|| str.find("\u0686") != std::string::npos || str.find("\ufb7a") != std::string::npos || str.find("\ufb7c") != std::string::npos || str.find("\ufb7d") != std::string::npos || str.find("\ufb7b") != std::string::npos
				|| str.find("\u062d") != std::string::npos || str.find("\ufea1") != std::string::npos || str.find("\ufea3") != std::string::npos || str.find("\ufea4") != std::string::npos || str.find("\ufea2") != std::string::npos
				|| str.find("\u062e") != std::string::npos || str.find("\ufea5") != std::string::npos || str.find("\ufea7") != std::string::npos || str.find("\ufea8") != std::string::npos || str.find("\ufea6") != std::string::npos
				|| str.find("\u062f") != std::string::npos || str.find("\ufea9") != std::string::npos || str.find("\u062f") != std::string::npos || str.find("\ufeaa") != std::string::npos || str.find("\ufeaa") != std::string::npos
				|| str.find("\u0630") != std::string::npos || str.find("\ufeab") != std::string::npos || str.find("\u0630") != std::string::npos || str.find("\ufeac") != std::string::npos || str.find("\ufeac") != std::string::npos
				|| str.find("\u0631") != std::string::npos || str.find("\ufead") != std::string::npos || str.find("\u0631") != std::string::npos || str.find("\ufeae") != std::string::npos || str.find("\ufeae") != std::string::npos
				|| str.find("\u0632") != std::string::npos || str.find("\ufeaf") != std::string::npos || str.find("\u0632") != std::string::npos || str.find("\ufeb0") != std::string::npos || str.find("\ufeb0") != std::string::npos
				|| str.find("\u0698") != std::string::npos || str.find("\ufb8a") != std::string::npos || str.find("\u0698") != std::string::npos || str.find("\ufb8b") != std::string::npos || str.find("\ufb8b") != std::string::npos
				|| str.find("\u0633") != std::string::npos || str.find("\ufeb1") != std::string::npos || str.find("\ufeb3") != std::string::npos || str.find("\ufeb4") != std::string::npos || str.find("\ufeb2") != std::string::npos
				|| str.find("\u0634") != std::string::npos || str.find("\ufeb5") != std::string::npos || str.find("\ufeb7") != std::string::npos || str.find("\ufeb8") != std::string::npos || str.find("\ufeb6") != std::string::npos
				|| str.find("\u0635") != std::string::npos || str.find("\ufeb9") != std::string::npos || str.find("\ufebb") != std::string::npos || str.find("\ufebc") != std::string::npos || str.find("\ufeba") != std::string::npos
				|| str.find("\u0636") != std::string::npos || str.find("\ufebd") != std::string::npos || str.find("\ufebf") != std::string::npos || str.find("\ufec0") != std::string::npos || str.find("\ufebe") != std::string::npos
				|| str.find("\u0637") != std::string::npos || str.find("\ufec1") != std::string::npos || str.find("\ufec3") != std::string::npos || str.find("\ufec4") != std::string::npos || str.find("\ufec2") != std::string::npos
				|| str.find("\u0638") != std::string::npos || str.find("\ufec5") != std::string::npos || str.find("\ufec7") != std::string::npos || str.find("\ufec8") != std::string::npos || str.find("\ufec6") != std::string::npos
				|| str.find("\u0639") != std::string::npos || str.find("\ufec9") != std::string::npos || str.find("\ufecb") != std::string::npos || str.find("\ufecc") != std::string::npos || str.find("\ufeca") != std::string::npos
				|| str.find("\u063a") != std::string::npos || str.find("\ufecd") != std::string::npos || str.find("\ufecf") != std::string::npos || str.find("\ufed0") != std::string::npos || str.find("\ufece") != std::string::npos
				|| str.find("\u0641") != std::string::npos || str.find("\ufed1") != std::string::npos || str.find("\ufed3") != std::string::npos || str.find("\ufed4") != std::string::npos || str.find("\ufed2") != std::string::npos
				|| str.find("\u0642") != std::string::npos || str.find("\ufed5") != std::string::npos || str.find("\ufed7") != std::string::npos || str.find("\ufed8") != std::string::npos || str.find("\ufed6") != std::string::npos
				|| str.find("\u06a9") != std::string::npos || str.find("\ufed9") != std::string::npos || str.find("\ufedb") != std::string::npos || str.find("\ufedc") != std::string::npos || str.find("\ufeda") != std::string::npos
				|| str.find("\u0643") != std::string::npos || str.find("\ufed9") != std::string::npos || str.find("\ufedb") != std::string::npos || str.find("\ufedc") != std::string::npos || str.find("\ufeda") != std::string::npos
				|| str.find("\u06af") != std::string::npos || str.find("\ufb92") != std::string::npos || str.find("\ufb94") != std::string::npos || str.find("\ufb95") != std::string::npos || str.find("\ufb93") != std::string::npos
				|| str.find("\u0644") != std::string::npos || str.find("\ufedd") != std::string::npos || str.find("\ufedf") != std::string::npos || str.find("\ufee0") != std::string::npos || str.find("\ufede") != std::string::npos
				|| str.find("\u0645") != std::string::npos || str.find("\ufee1") != std::string::npos || str.find("\ufee3") != std::string::npos || str.find("\ufee4") != std::string::npos || str.find("\ufee2") != std::string::npos
				|| str.find("\u0646") != std::string::npos || str.find("\ufee5") != std::string::npos || str.find("\ufee7") != std::string::npos || str.find("\ufee8") != std::string::npos || str.find("\ufee6") != std::string::npos
				|| str.find("\u0647") != std::string::npos || str.find("\ufee9") != std::string::npos || str.find("\ufeeb") != std::string::npos || str.find("\ufeec") != std::string::npos || str.find("\ufeea") != std::string::npos
				|| str.find("\u0648") != std::string::npos || str.find("\ufeed") != std::string::npos || str.find("\ufeed") != std::string::npos || str.find("\ufeee") != std::string::npos || str.find("\ufeee") != std::string::npos
				|| str.find("\u06cc") != std::string::npos || str.find("\ufbfc") != std::string::npos || str.find("\ufbfe") != std::string::npos || str.find("\ufbff") != std::string::npos || str.find("\ufbfd") != std::string::npos
				|| str.find("\u064a") != std::string::npos || str.find("\ufef1") != std::string::npos || str.find("\ufef3") != std::string::npos || str.find("\ufef4") != std::string::npos || str.find("\ufef2") != std::string::npos
				|| str.find("\u0649") != std::string::npos || str.find("\ufeef") != std::string::npos || str.find("\u0649") != std::string::npos || str.find("\ufef0") != std::string::npos || str.find("\ufef0") != std::string::npos
				|| str.find("\u0640") != std::string::npos || str.find("\u0640") != std::string::npos || str.find("\u0640") != std::string::npos || str.find("\u0640") != std::string::npos || str.find("\u0640") != std::string::npos
				|| str.find("\ufefb") != std::string::npos || str.find("\ufefb") != std::string::npos || str.find("\ufefb") != std::string::npos || str.find("\ufefc") != std::string::npos || str.find("\ufefc") != std::string::npos
				|| str.find("\ufef7") != std::string::npos || str.find("\ufef7") != std::string::npos || str.find("\ufef7") != std::string::npos || str.find("\ufef8") != std::string::npos || str.find("\ufef8") != std::string::npos)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
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