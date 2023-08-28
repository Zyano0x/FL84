#include "pch.h"

namespace Aimbot
{
	CG::ASolarCharacter* Target = NULL;
	CG::FVector Bone = {};

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

	double GetCrossDistance(double x1, double y1, double x2, double y2)
	{
		return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	}

	void SetRotation(CG::APlayerCameraManager* PlayerCameraManager, CG::APlayerController* PlayerController, CG::FRotator TargetRotation, bool bWithRotationInput, float Smooth)
	{
		auto v11 = reinterpret_cast<uint64_t>(PlayerController) + 0x6A0;
		auto v10 = reinterpret_cast<uint64_t>(PlayerCameraManager) + 0x299C;

		if (!bWithRotationInput)
			v11 = v10;

		CG::FRotator currentRotation = *(CG::FRotator*)(v11);

		CG::FRotator smoothRotation;
		smoothRotation.Pitch = currentRotation.Pitch + (TargetRotation.Pitch - currentRotation.Pitch) / Smooth;
		//smoothRotation.Yaw = currentRotation.Yaw + (TargetRotation.Yaw - currentRotation.Yaw) / Smooth;
		smoothRotation.Yaw = SmoothOutYaw(TargetRotation.Yaw, currentRotation.Yaw, Smooth);
		smoothRotation.Roll = currentRotation.Roll + (TargetRotation.Roll - currentRotation.Roll) / Smooth;

		*(CG::FRotator*)(v11) = smoothRotation;
	}

	CG::FRotator CalcAngle(CG::FVector& src, CG::FVector& dst)
	{
		CG::FVector delta(dst - src);

		float distance = sqrtf(delta.X * delta.X + delta.Y * delta.Y + delta.Z * delta.Z);
		float pitch = (-((acosf((delta.Z / distance)) * 180.f / M_PI) - 90.f));
		float yaw = atan2f(delta.Y, delta.X) * (180.f / M_PI);

		return CG::FRotator(Normalize(pitch), Normalize(yaw), 0.f);
	}

	CG::FVector CalcFuturePos(CG::APlayerController* Controller, CG::FVector InVec)
	{
		CG::FVector2D NewPos = CG::FVector2D();
		CG::FVector	OutPos = CG::FVector();

		if (Controller->ProjectWorldLocationToScreen(InVec, &NewPos, false))
		{
			OutPos.X = NewPos.X;
			OutPos.Y = NewPos.Y;
		}
		else
		{
			OutPos.X = 0;
			OutPos.Y = 0;
			OutPos.Z = 0;
		}
		return OutPos;
	}

	CG::FVector AimbotCorrection(float bulletVelocity, float bulletGravity, float targetDistance, CG::FVector targetPosition, CG::FVector targetVelocity)
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

	void AimAtPosV2(int screenwidth, int screenheight, float x, float y, float speed, float humanspeed, float humanscale)
	{
		int ScreenCenterX = screenwidth / 2, ScreenCenterY = screenheight / 2;
		float AimSpeed = (speed) * 2.f;
		float TargetX = 0;
		float TargetY = 0;

		//X Axis
		if (x != 0)
		{
			if (x > ScreenCenterX)
			{
				TargetX = -(ScreenCenterX - x);
				TargetX /= AimSpeed;
				if (TargetX + ScreenCenterX > ScreenCenterX * 2) TargetX = 0;
			}

			if (x < ScreenCenterX)
			{
				TargetX = x - ScreenCenterX;
				TargetX /= AimSpeed;
				if (TargetX + ScreenCenterX < 0) TargetX = 0;
			}
		}

		//Y Axis
		if (y != 0)
		{
			if (y > ScreenCenterY)
			{
				TargetY = -(ScreenCenterY - y);
				TargetY /= AimSpeed;
				if (TargetY + ScreenCenterY > ScreenCenterY * 2) TargetY = 0;
			}

			if (y < ScreenCenterY)
			{
				TargetY = y - ScreenCenterY;
				TargetY /= AimSpeed;
				if (TargetY + ScreenCenterY < 0) TargetY = 0;
			}
		}

		CG::FVector2D GetTarget = CG::FVector2D(TargetX, TargetY);

		CG::FVector2D OutTarget = Randomize(GetTarget, humanspeed, humanscale);

		//mouse_move(OutTarget.X, OutTarget.Y);
		mouse_event(0x0001, (DWORD)(OutTarget.X), (DWORD)(OutTarget.Y), NULL, NULL);
	}

	void AimFOV(CG::ASolarCharacter* Enemy)
	{
		CG::UWorld* World = *CG::UWorld::GWorld;
		if (!World)
			return;

		CG::ULocalPlayer* LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
		if (!LocalPlayer)
			return;

		CG::APlayerController* PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController)
			return;

		CG::ASolarCharacter* LocalCharacter = reinterpret_cast<CG::ASolarCharacter*>(PlayerController->Character);
		if (!LocalCharacter)
			return;

		if (!Enemy->PlayerState || !LocalCharacter->PlayerState)
			return;

		if (Enemy->PlayerState->PawnPrivate == LocalCharacter->PlayerState->PawnPrivate)
			return;

		if (Enemy->InSameTeamWithFirstPlayerController())
			return;

		if (!PlayerController->LineOfSightTo(Enemy, { 0.f,0.f,0.f }, false))
			return;

		CG::FVector LocalLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
		std::vector<CG::FVector> AimPos = std::vector<CG::FVector>();

		switch (Settings[AIM_SELECT_BONE].Value.iValue)
		{
		case 0:
			AimPos.push_back(Enemy->Mesh->GetBoneWorldPos(HEAD));
			break;

		case 1:
			AimPos.push_back(Enemy->Mesh->GetBoneWorldPos(NECK_01));
			break;

		case 2:
			int Point = Engine::GetNearestBone(PlayerController->PlayerCameraManager, Enemy, Engine::HitBoxes);
			AimPos.push_back(Enemy->Mesh->GetBoneWorldPos(Point));
			break;
		}

		//AimPosition = /*Engine::GetBonePosition(Enemy->Mesh, NECK_01)*/ Enemy->Mesh->GetBoneWorldPos(HEAD);

		for (CG::FVector Hitbox : AimPos)
		{
			if (Hitbox.X != 0)
			{
				Bone = Hitbox;
				
				if (Settings[AIM_PREDICTION].Value.bValue)
				{
					CG::ASolarPlayerWeapon* CachedCurrentWeapon = LocalCharacter->CachedCurrentWeapon;
					if (!CachedCurrentWeapon)
						return;

					CG::USingleWeaponConfig* Config = CachedCurrentWeapon->Config;
					if (!Config)
						return;

					CG::UAmmoConfig* AmmoConfig = Config->PrimaryAmmo;
					if (!AmmoConfig)
						return;

					float BulletSpeed = AmmoConfig->InitSpeed / 100.f;
					float BulletGravity = AmmoConfig->ProjectileMaxGravity;
					float Distance = LocalLocation.Distance(Bone) / 100.f;

					CG::FVector Velocity = Enemy->RootComponent->ComponentVelocity;
					CG::FVector AimPrediction = AimbotCorrection(BulletSpeed, BulletGravity, Distance, Bone, Velocity);

					Bone.X = AimPrediction.X;
					Bone.Y = AimPrediction.Y;
					Bone.Z = AimPrediction.Z;

					CG::FVector TargetBone = CalcFuturePos(PlayerController, Bone);
					CG::FVector2D TargetPos = CG::FVector2D(TargetBone.X, TargetBone.Y);
					AimAtPosV2(ScreenWidth, ScreenHeight, TargetPos.X, TargetPos.Y, Settings[AIM_SMOOTH].Value.fValue, Settings[HUMAN_SPEED].Value.fValue, Settings[HUMAN_SCALE].Value.fValue);
				}
				else
				{
					CG::FRotator TargetRotation = CalcAngle(LocalLocation, Bone);
					TargetRotation.Roll = 0;
					TargetRotation.Clamp();
					SetRotation(PlayerController->PlayerCameraManager, PlayerController, TargetRotation, false, Settings[AIM_SMOOTH].Value.fValue);
				}
			}
		}
	}

	void SilentAim(CG::ASolarCharacter* Enemy)
	{
		CG::UWorld* World = *CG::UWorld::GWorld;
		if (!World)
			return;

		CG::ULocalPlayer* LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
		if (!LocalPlayer)
			return;

		CG::APlayerController* PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController)
			return;

		CG::ASolarCharacter* LocalCharacter = reinterpret_cast<CG::ASolarCharacter*>(PlayerController->Character);
		if (!LocalCharacter)
			return;

		if (!Enemy->PlayerState || !LocalCharacter->PlayerState)
			return;

		if (Enemy->PlayerState->PawnPrivate == LocalCharacter->PlayerState->PawnPrivate)
			return;

		if (Enemy->InSameTeamWithFirstPlayerController())
			return;

		if (!PlayerController->LineOfSightTo(Enemy, { 0.f,0.f,0.f }, false))
			return;

		Target = Enemy;

		CG::FRotator OldRotation = PlayerController->GetControlRotation();
		CG::FVector LocalLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
		CG::FVector AimPosition = /*Engine::GetBonePosition(Target->Mesh, NECK_01)*/ Enemy->Mesh->GetBoneWorldPos(NECK_01);
		CG::FRotator AimRotation = CalcAngle(LocalLocation, AimPosition);
		AimRotation.Roll = 0;
		AimRotation.Clamp();
	}
}