#include "pch.h"

namespace Aimbot
{
	float ClosestDistance = InitCenterDistance;
	CG::FVector2D LockPosition = CG::FVector2D();
	CG::FVector TargetPosition = CG::FVector();
	CG::FRotator TargetRotation = CG::FRotator();

	float Normalize(float angle)
	{
		float out = fmodf(fmodf(angle, 360.f) + 360.f, 360.f);
		if (out > 180.f)
			out -= 360.f;
		return out;
	}

	CG::FRotator CalcAngle(CG::FVector& src, CG::FVector& dst, CG::FRotator& oldRotation, float& smoothing)
	{
		CG::FVector delta(dst - src);

		float distance = sqrtf(delta.X * delta.X + delta.Y * delta.Y + delta.Z * delta.Z);
		float pitch = (-((acosf((delta.Z / distance)) * 180.f / M_PI) - 90.f));
		float yaw = atan2f(delta.Y, delta.X) * (180.f / M_PI);

		pitch = (pitch - oldRotation.Pitch) / smoothing + oldRotation.Pitch;
		yaw = (yaw - oldRotation.Yaw) / smoothing + oldRotation.Yaw;

		return CG::FRotator(Normalize(pitch), Normalize(yaw), 0.0f).Clamp();
	}

	CG::FVector2D Randomize(CG::FVector2D vAngles, float HumanSpeed, float HumanScale)
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

	CG::FVector AimbotPrediction(float bulletVelocity, float bulletGravity, float targetDistance, CG::FVector targetPosition, CG::FVector targetVelocity)
	{
		CG::FVector recalculated = targetPosition;
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
		TargetPosition = CG::FVector();
	}

	void LockOnTarget()
	{
		int ScreenCenterX = ScreenWidth / 2;
		int ScreenCenterY = ScreenHeight / 2;
		float AimSpeed = (Settings[AIM_SMOOTH].Value.fValue) * 2.f;
		float TargetX = 0;
		float TargetY = 0;

		if (Engine::IsKeyDown(Settings[AIM_KEY].Value.iValue) && Settings[AIM_MODE].Value.iValue == 0)
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

				CG::FVector2D GetTarget = CG::FVector2D(TargetX, TargetY);
				CG::FVector2D OutTarget = Randomize(GetTarget, Settings[HUMAN_SPEED].Value.fValue, Settings[HUMAN_SCALE].Value.fValue);

				if (TargetX != 0 && TargetY != 0)
					mouse_event(MOUSEEVENTF_MOVE, static_cast<DWORD>(OutTarget.X), static_cast<DWORD>(OutTarget.Y), NULL, NULL);
			}
		}
		else
		{
			Settings[IS_AIMING].Value.bValue = false;
		}
	}

	void SetRotation(CG::APlayerCameraManager* PlayerCameraManager, CG::APlayerController* PlayerController, CG::FRotator TargetRotation, bool bWithRotationInput, float Smooth)
	{
		auto v11 = reinterpret_cast<uint64_t>(PlayerController) + 0x6A0;
		auto v10 = reinterpret_cast<uint64_t>(PlayerCameraManager) + 0x299C;

		if (!bWithRotationInput)
			v11 = v10;

		if (Engine::IsKeyDown(Settings[AIM_KEY].Value.iValue) && Settings[AIM_MODE].Value.iValue == 0 && Settings[AIM_ENABLED].Value.bValue)
		{
			if (ClosestDistance != InitCenterDistance)
			{
				*(CG::FRotator*)(v11) = TargetRotation;
			}
		}
		else
		{
			Settings[IS_AIMING].Value.bValue = false;
		}
	}
}