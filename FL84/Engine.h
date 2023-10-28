#pragma once

namespace Engine
{
	std::string GetVehicleName(int VehicleID);
	std::string GetWeaponType(int WeaponID);
	SDK::FVector GetBonePosition(SDK::USkeletalMeshComponent* mesh, int index);
	bool IsKeyDown(int VK_Key);
}