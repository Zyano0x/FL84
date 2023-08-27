#pragma once

namespace Aimbot
{
	extern CG::ASolarCharacter* Target;
	extern CG::FVector AimPosition;
	extern CG::FRotator AimRotation;
	extern CG::FVector Bone;

	float Normalize(float angle);
	float SmoothOutYaw(float targetYaw, float currentYaw, float smoothness);
	double GetCrossDistance(double x1, double y1, double x2, double y2);
	CG::FRotator CalcAngle(CG::FVector& src, CG::FVector& dst);
	CG::FVector CalcFuturePos(CG::APlayerController* Controller, CG::FVector InVec);
	CG::FVector AimbotCorrection(float bulletVelocity, float bulletGravity, float targetDistance, CG::FVector targetPosition, CG::FVector targetVelocity);
	CG::FVector2D Randomize(CG::FVector2D vAngles, float HumanSpeed, float HumanScale);
	void AimAtPosV2(int screenwidth, int screenheight, float x, float y, float speed, float humanspeed, float humanscale);
	void SetRotation(CG::APlayerCameraManager* PlayerCameraManager, CG::APlayerController* PlayerController, CG::FRotator TargetRotation, bool bWithRotationInput, float Smooth);
	void AimFOV(CG::ASolarCharacter* Enemy);
	void SilentAim(CG::ASolarCharacter* Enemy);
}