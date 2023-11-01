#pragma once

namespace Engine
{
	std::string GetVehicleName(int VehicleID);
	std::string GetWeaponType(int WeaponID);
	std::string _English(std::string s);
	std::string __English(std::string s);
	std::string WString_UTF8(const std::wstring& str);
	std::string ReverseWord(std::string word);
	bool IsArabic(std::string str);
	bool IsKeyDown(int VK_Key);
	SDK::FVector GetBonePosition(SDK::USkeletalMeshComponent* mesh, int index);
}