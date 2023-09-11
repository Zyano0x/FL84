#pragma once

namespace Engine
{
	extern std::vector<int> HitBoxes;

	uint64_t FindPattern(const char* module, const char* pattern);
	std::string GetVehicleName(std::string oName);
	std::string GetWeaponType(int WeaponID);
	CG::FVector GetBonePosition(CG::USkeletalMeshComponent* mesh, int index);
	float GetObjectDistance2D(float x1, float y1, float x2, float y2);
	float ScreenToEnemy(CG::APlayerController* controller, CG::FVector position);
	bool NerstBoneToScreen(CG::APlayerCameraManager* CameraManager, CG::FVector WorldLocation, CG::FVector& Screenlocation);
	bool IsKeyDown(int VK_Key);
	float GetActorFromCenter(CG::APlayerCameraManager* CameraManager, CG::FVector Point);
	int GetNearestBone(CG::APlayerCameraManager* CameraManager, CG::ASolarCharacter* Enemy, std::vector<int> Bones);
}