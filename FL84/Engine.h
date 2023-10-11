#pragma once

namespace Engine
{
	extern std::vector<int> HitBoxes;

	std::string GetVehicleName(std::string oName);
	std::string GetWeaponType(int WeaponID);
	SDK::FVector GetBonePosition(SDK::USkeletalMeshComponent* mesh, int index);
	float GetObjectDistance2D(float x1, float y1, float x2, float y2);
	float ScreenToEnemy(SDK::APlayerController* controller, SDK::FVector position);
	float GetActorFromCenter(SDK::APlayerCameraManager* CameraManager, SDK::FVector Point);
	bool NerstBoneToScreen(SDK::APlayerCameraManager* CameraManager, SDK::FVector WorldLocation, SDK::FVector& Screenlocation);
	bool IsKeyDown(int VK_Key);
	int GetNearestBone(SDK::APlayerCameraManager* CameraManager, SDK::ASolarCharacter* Enemy, std::vector<int> Bones);
}