#pragma once

namespace Engine
{
	uint64_t FindPattern(const char* module, const char* pattern);
	std::string GetVehicleName(std::string oName);
	CG::FVector GetBonePosition(CG::USkeletalMeshComponent* mesh, int index);
	float ScreenToEnemy(CG::APlayerController* controller, CG::FVector position);
}