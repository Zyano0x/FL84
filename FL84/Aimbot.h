#pragma once

namespace Aimbot
{
	constexpr float InitCenterDistance = 10000.0f;
	extern float ClosestDistance;
	extern SDK::FVector2D LockPosition;
	extern SDK::FVector TargetPosition;
	extern SDK::FRotator TargetRotation;

	float Normalize(float angle);
	SDK::FRotator CalcAngle(SDK::FVector& src, SDK::FVector& dst, SDK::FRotator& oldRotation, float& smoothing);
	SDK::FVector AimbotPrediction(float bulletVelocity, float bulletGravity, float targetDistance, SDK::FVector targetPosition, SDK::FVector targetVelocity);
	SDK::FVector2D Randomize(SDK::FVector2D vAngles, float HumanSpeed, float HumanScale);
	void ResetLock();
	void LockOnTarget();
	void SetRotation(SDK::APlayerCameraManager* PlayerCameraManager, SDK::APlayerController* PlayerController, SDK::FRotator TargetRotation, bool bWithRotationInput, float Smooth);
}