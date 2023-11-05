#pragma once

typedef struct
{
	CG::FVector BestBone;
}tDamageInfo;

typedef struct
{
	CG::ASolarCharacter* Enemy;
	CG::FVector AimPosition;
	float Distance;
}tTargetInfo;

namespace Aimbot
{
	constexpr float InitCenterDistance = 10000.0f;
	extern float ClosestDistance;
	extern CG::FVector2D LockPosition;
	extern CG::FVector BestBone;
	extern CG::FVector AimPosition;
	extern CG::FVector CurrentPosition;
	extern CG::FVector TargetPosition;
	extern CG::FRotator TargetRotation;
	extern CG::ASolarCharacter* Target;

	CG::FRotator CalcAngle(CG::FVector src, CG::FVector dst, CG::FRotator oldRotation, float smoothing);
	CG::FVector Prediction(float bulletVelocity, float bulletGravity, float targetDistance, CG::FVector targetPosition, CG::FVector targetVelocity);
	bool VisibilityMethod(CG::ASolarCharacter* Enemy);
	void GetBoneMethod();
	void ResetLock();
	void LockOnTarget();
	void SetRotation(CG::APlayerCameraManager* PlayerCameraManager, CG::APlayerController* PlayerController, CG::FRotator TargetRotation, bool bWithRotationInput);
}