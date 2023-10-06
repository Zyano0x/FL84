#include "pch.h"

namespace Aimbot
{
	float ClosestDistance = InitCenterDistance;
	SDK::FVector2D LockPosition = SDK::FVector2D();
	SDK::FVector AimPosition = SDK::FVector();
	SDK::FVector CurrentPosition = SDK::FVector();
	SDK::FVector TargetPosition = SDK::FVector();
	SDK::FRotator TargetRotation = SDK::FRotator();

	float Normalize(float angle)
	{
		float out = fmodf(fmodf(angle, 360.f) + 360.f, 360.f);
		if (out > 180.f)
			out -= 360.f;
		return out;
	}

	float SmoothOutYaw(float targetYaw, float currentYaw, float smoothness)
	{
		if (targetYaw > 0.f && currentYaw < 0.f)
		{
			float dist = 180.f - targetYaw + 180.f + currentYaw;
			if (dist < 180.f)
				return currentYaw - dist / smoothness;
		}
		else if (currentYaw > 0.f && targetYaw < 0.f)
		{
			float dist = 180.f - currentYaw + 180.f + targetYaw;
			if (dist < 180.f)
				return currentYaw + dist / smoothness;
		}

		return currentYaw + (targetYaw - currentYaw) / smoothness;
	}

	SDK::FRotator CalcAngle(SDK::FVector& src, SDK::FVector& dst, SDK::FRotator& oldRotation, float& smoothing)
	{
		SDK::FVector delta = dst - src;

		float dist = sqrtf(delta.X * delta.X + delta.Y * delta.Y + delta.Z * delta.Z);
		float pitch = (-((acosf((delta.Z / dist)) * 180.0f / IM_PI) - 90.0f));
		float yaw = atan2f(delta.Y, delta.X) * (180.0f / IM_PI);

		SDK::FVector ret;
		ret.X = oldRotation.Pitch + (pitch - oldRotation.Pitch) / smoothing;
		ret.Y = SmoothOutYaw(yaw, oldRotation.Yaw, smoothing);
		ret.Normalize(); // makes the angles work for Sword With Sauce's angle system

		return { ret.X, ret.Y, 0 };
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

	void SetRotation(SDK::APlayerCameraManager* PlayerCameraManager, SDK::APlayerController* PlayerController, SDK::FRotator TargetRotation, bool bWithRotationInput, float Smooth)
	{
		uint64_t v11 = reinterpret_cast<uint64_t>(PlayerController) + 0x6A0;
		uint64_t v10 = reinterpret_cast<uint64_t>(PlayerCameraManager) + 0x299C;

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