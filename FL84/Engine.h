#pragma once

namespace Engine
{
	std::string GetVehicleName(int VehicleID);
	std::string GetWeaponType(int WeaponID);
	std::string WString_UTF8(const std::wstring& str);
	bool IsKeyDown(int VK_Key);
}