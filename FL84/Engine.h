#pragma once

namespace Engine
{
	extern std::vector<int> HitBoxes;

	uint64_t FindPattern(const char* module, const char* pattern);
	std::string GetVehicleName(std::string oName);
	CG::FVector GetBonePosition(CG::USkeletalMeshComponent* mesh, int index);
	float GetObjectDistance2D(float x1, float y1, float x2, float y2);
	float ScreenToEnemy(CG::APlayerController* controller, CG::FVector position);
	bool NerstBoneToScreen(CG::APlayerCameraManager* CameraManager, CG::FVector WorldLocation, CG::FVector& Screenlocation);
	float GetActorFromCenter(CG::APlayerCameraManager* CameraManager, CG::FVector Point);
	int GetNearestBone(CG::APlayerCameraManager* CameraManager, CG::ASolarCharacter* Enemy, std::vector<int> Bones);
}