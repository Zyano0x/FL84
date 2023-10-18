#include "pch.h"

namespace Aimbot
{
	float ClosestDistance = InitCenterDistance;
	SDK::FVector2D LockPosition = SDK::FVector2D();
	SDK::FVector AimPosition = SDK::FVector();
	SDK::FVector CurrentPosition = SDK::FVector();
	SDK::FVector TargetPosition = SDK::FVector();
	SDK::FRotator TargetRotation = SDK::FRotator();

	SDK::FRotator CalcAngle(SDK::FVector src, SDK::FVector dst, SDK::FRotator oldRotation, float smoothing)
	{
		SDK::FVector Dir = ZZZ.MathLibrary->Subtract_VectorVector(dst, src);
		SDK::FRotator Yaptr = ZZZ.MathLibrary->Conv_VectorToRotator(Dir);
		SDK::FRotator CpYaT = oldRotation;
		Yaptr.Pitch -= CpYaT.Pitch;
		Yaptr.Yaw -= CpYaT.Yaw;
		Yaptr.Roll = 0.f;
		Yaptr.Clamp();
		CpYaT.Pitch += Yaptr.Pitch / smoothing; //AIMSPEED HORIZON
		CpYaT.Yaw += Yaptr.Yaw / smoothing; // AIMSPEED VERTICAL
		CpYaT.Roll = 0.f;

		return CpYaT;
	}

	SDK::FVector2D Randomize(SDK::FVector2D vAngles, float HumanSpeed, float HumanScale)
	{
		float lastX = 0.f;

		float lastY = 0.f;

		float destX = 0.f;

		float destY = 0.f;

		float curX = 0.f;

		float curY = 0.f;

		if (abs(curX - destX) < .05f)
		{
			destX = rand() % (int)(HumanScale * 10) + 1;
			destX /= 500;
			int positive = rand() % 2 + 1;
			if (positive == 2)
				destX = -destX;
		}

		if (abs(curY - destY) < .05f)
		{
			destY = rand() % (int)(HumanScale * 10) + 1;
			destY /= 500;
			int positive = rand() % 2 + 1;
			if (positive == 2)
				destY = -destY;
		}

		int speed = 20 - int(HumanSpeed);
		curX += (destX - curX) / ((15 * speed) + 10);

		curY += (destY - curY) / ((15 * speed) + 10);

		vAngles.X += curX;
		vAngles.Y += curY;

		lastX = curX;
		lastY = curY;

		return vAngles;
	}

	SDK::FVector AimbotPrediction(float bulletVelocity, float bulletGravity, float targetDistance, SDK::FVector targetPosition, SDK::FVector targetVelocity)
	{
		SDK::FVector recalculated = targetPosition;
		float gravity = fabs(bulletGravity);
		float time = targetDistance / fabs(bulletVelocity);
		float bulletDrop = gravity * time * time;
		recalculated.Z += bulletDrop;
		recalculated.X += time * (targetVelocity.X);
		recalculated.Y += time * (targetVelocity.Y);
		recalculated.Z += time * (targetVelocity.Z);
		return recalculated;
	}

	void ResetLock()
	{
		ClosestDistance = InitCenterDistance;
		TargetPosition = SDK::FVector();
	}

	void LockOnTarget()
	{
		int ScreenCenterX = ScreenWidth / 2;
		int ScreenCenterY = ScreenHeight / 2;
		float AimSpeed = (_profiler.gAimSmooth.Custom.flValue) * 2.f;
		float TargetX = 0;
		float TargetY = 0;

		if (Engine::IsKeyDown(_profiler.gAimKey.Custom.iValue) && _profiler.gAimMode.Custom.iValue == 0 && _profiler.gAimEnabled.Custom.bValue
			|| Engine::IsKeyDown(_profiler.gAimKey.Custom.iValue) && _profiler.gAimMode.Custom.iValue == 2 && _profiler.gAimEnabled.Custom.bValue)
		{
			if (ClosestDistance != InitCenterDistance)
			{
				// X Axis
				if (LockPosition.X != 0)
				{
					if (LockPosition.X > ScreenCenterX)
					{
						TargetX = -(ScreenCenterX - LockPosition.X);
						TargetX /= AimSpeed;
						if (TargetX + ScreenCenterX > ScreenCenterX * 2)
							TargetX = 0;
					}

					if (LockPosition.X < ScreenCenterX)
					{
						TargetX = LockPosition.X - ScreenCenterX;
						TargetX /= AimSpeed;
						if (TargetX + ScreenCenterX < 0)
							TargetX = 0;
					}
				}

				// Y Axis
				if (LockPosition.Y != 0)
				{
					if (LockPosition.Y > ScreenCenterY)
					{
						TargetY = -(ScreenCenterY - LockPosition.Y);
						TargetY /= AimSpeed;
						if (TargetY + ScreenCenterY > ScreenCenterY * 2)
							TargetY = 0;
					}

					if (LockPosition.Y < ScreenCenterY)
					{
						TargetY = LockPosition.Y - ScreenCenterY;
						TargetY /= AimSpeed;
						if (TargetY + ScreenCenterY < 0)
							TargetY = 0;
					}
				}

				SDK::FVector2D GetTarget = SDK::FVector2D(TargetX, TargetY);
				SDK::FVector2D OutTarget = Randomize(GetTarget, _profiler.gHumanSpeed.Custom.flValue, _profiler.gHumanScale.Custom.flValue);

				if (TargetX != 0 && TargetY != 0)
					mouse_event(MOUSEEVENTF_MOVE, static_cast<DWORD>(OutTarget.X), static_cast<DWORD>(OutTarget.Y), NULL, NULL);
			}
		}
		else
		{
			_profiler.gIsAiming.Custom.bValue = false;
		}
	}

	void SetRotation(SDK::APlayerCameraManager* PlayerCameraManager, SDK::APlayerController* PlayerController, SDK::FRotator TargetRotation, bool bWithRotationInput)
	{
		uint64_t v10 = reinterpret_cast<uint64_t>(PlayerCameraManager) + 0x299C;
		uint64_t v11 = reinterpret_cast<uint64_t>(PlayerController) + 0x6C0;

		if (!bWithRotationInput)
			v11 = v10;

		if (Engine::IsKeyDown(_profiler.gAimKey.Custom.iValue) && _profiler.gAimMode.Custom.iValue == 0 && _profiler.gAimEnabled.Custom.bValue
			|| Engine::IsKeyDown(_profiler.gAimKey.Custom.iValue) && _profiler.gAimMode.Custom.iValue == 2 && _profiler.gAimEnabled.Custom.bValue)
		{
			if (ClosestDistance != InitCenterDistance)
			{
				*(SDK::FRotator*)(v11) = TargetRotation;
			}
		}
		else
		{
			_profiler.gIsAiming.Custom.bValue = false;
		}
	}
}