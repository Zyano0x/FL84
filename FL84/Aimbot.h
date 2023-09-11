#pragma once

namespace Aimbot
{
	constexpr float InitCenterDistance = 10000.0f;
	extern float ClosestDistance;
	extern CG::FVector2D LockPosition;
	extern CG::FVector TargetPosition;
	extern CG::FRotator TargetRotation;

	float Normalize(float angle);
	CG::FRotator CalcAngle(CG::FVector& src, CG::FVector& dst, CG::FRotator& oldRotation, float& smoothing);
	CG::FVector AimbotPrediction(float bulletVelocity, float bulletGravity, float targetDistance, CG::FVector targetPosition, CG::FVector targetVelocity);
	CG::FVector2D Randomize(CG::FVector2D vAngles, float HumanSpeed, float HumanScale);
	void ResetLock();
	void LockOnTarget();
	void SetRotation(CG::APlayerCameraManager* PlayerCameraManager, CG::APlayerController* PlayerController, CG::FRotator TargetRotation, bool bWithRotationInput, float Smooth);
}