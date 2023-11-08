#include "pch.h"

namespace Aimbot
{
	float ClosestDistance = InitCenterDistance;
	CG::FVector2D LockPosition = CG::FVector2D();
	CG::FVector BestBone = CG::FVector();
	CG::FVector AimPosition = CG::FVector();
	CG::FVector CurrentPosition = CG::FVector();
	CG::FVector TargetPosition = CG::FVector();
	CG::FRotator TargetRotation = CG::FRotator();

	CG::FRotator CalcAngle(CG::FVector src, CG::FVector dst, CG::FRotator oldRotation, float smoothing)
	{
		CG::FVector Dir = ZXC.MathLibrary->STATIC_Subtract_VectorVector(dst, src);
		CG::FRotator Yaptr = ZXC.MathLibrary->STATIC_Conv_VectorToRotator(Dir);
		CG::FRotator CpYaT = oldRotation;
		Yaptr.Pitch -= CpYaT.Pitch;
		Yaptr.Yaw -= CpYaT.Yaw;
		Yaptr.Roll = 0.f;
		Yaptr.Clamp();
		CpYaT.Pitch += Yaptr.Pitch / smoothing; //AIMSPEED HORIZON
		CpYaT.Yaw += Yaptr.Yaw / smoothing; // AIMSPEED VERTICAL
		CpYaT.Roll = 0.f;

		return CpYaT;
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

	CG::FVector Prediction(float bulletVelocity, float bulletGravity, float targetDistance, CG::FVector targetPosition, CG::FVector targetVelocity)
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
		SPOOF_FUNC;

		MouseController::Init();

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

				CG::FVector2D GetTarget = CG::FVector2D(TargetX, TargetY);
				CG::FVector2D OutTarget = Randomize(GetTarget, _profiler.gHumanSpeed.Custom.flValue, _profiler.gHumanScale.Custom.flValue);

				if (TargetX != 0 && TargetY != 0)
					//mouse_event(MOUSEEVENTF_MOVE, static_cast<DWORD>(OutTarget.X), static_cast<DWORD>(OutTarget.Y), NULL, NULL);
					MouseController::NtInjectMouse((int)OutTarget.X, (int)OutTarget.Y);
			}
		}
		else
		{
			_profiler.gIsAiming.Custom.bValue = false;
		}
	}

	void SetRotation(CG::APlayerCameraManager* PlayerCameraManager, CG::APlayerController* PlayerController, CG::FRotator TargetRotation, bool bWithRotationInput)
	{
		SPOOF_FUNC;

		uint64_t v10 = reinterpret_cast<uint64_t>(PlayerCameraManager) + 0x2A5C;
		uint64_t v11 = reinterpret_cast<uint64_t>(PlayerController) + 0x6B0;

		if (!bWithRotationInput)
			v11 = v10;

		if (Engine::IsKeyDown(_profiler.gAimKey.Custom.iValue) && _profiler.gAimMode.Custom.iValue == cProfiler::AIMMODE_FOV && _profiler.gAimEnabled.Custom.bValue
			|| Engine::IsKeyDown(_profiler.gAimKey.Custom.iValue) && _profiler.gAimMode.Custom.iValue == cProfiler::AIMMODE_AUTOMATIC && _profiler.gAimEnabled.Custom.bValue)
		{
			if (ClosestDistance != InitCenterDistance)
			{
				*(CG::FRotator*)(v11) = TargetRotation;
			}
		}
		else
		{
			_profiler.gIsAiming.Custom.bValue = false;
		}
	}

	bool VisibilityMethod(CG::ASolarCharacter* Enemy)
	{
		tDamageInfo DamageInfo;
		std::vector<tDamageInfo> vDamageInfo;
		std::random_device Random_Device;
		std::mt19937 Gen(Random_Device());

		if (_profiler.gAimBone.Custom.iValue == cProfiler::AIMBONE_HEAD)
		{
			std::vector<int> AIMBOT_Bones;
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("head")));
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("Neck_01")));

			for (int x = 0; x < AIMBOT_Bones.size(); ++x)
			{
				BestBone = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(AIMBOT_Bones[x]));
				if (BestBone.IsValid())
				{
					FVectorCopy(BestBone, DamageInfo.BestBone);
					vDamageInfo.push_back(DamageInfo);
				}
			}

			if (!vDamageInfo.empty())
			{
				std::shuffle(vDamageInfo.begin(), vDamageInfo.end(), Gen);

				FVectorCopy(vDamageInfo.front().BestBone, AimPosition);

				return true;
			}
		}
		else if (_profiler.gAimBone.Custom.iValue == cProfiler::AIMBONE_SPINE)
		{
			std::vector<int> AIMBOT_Bones;
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("spine_03")));
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("spine_01")));
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("spine_02")));

			for (int x = 0; x < AIMBOT_Bones.size(); ++x)
			{
				BestBone = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(AIMBOT_Bones[x]));
				if (BestBone.IsValid())
				{
					FVectorCopy(BestBone, DamageInfo.BestBone);
					vDamageInfo.push_back(DamageInfo);
				}
			}

			if (!vDamageInfo.empty())
			{
				std::shuffle(vDamageInfo.begin(), vDamageInfo.end(), Gen);

				FVectorCopy(vDamageInfo.front().BestBone, AimPosition);

				return true;
			}
		}
		else if (_profiler.gAimBone.Custom.iValue == cProfiler::AIMBONE_RANDOM)
		{
			std::vector<int> AIMBOT_Bones;
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("head")));
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("Neck_01")));
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("spine_03")));
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("spine_02")));
			AIMBOT_Bones.push_back(Enemy->Mesh->GetBoneIndex(CG::FName("spine_01")));

			for (int x = 0; x < AIMBOT_Bones.size(); ++x)
			{
				BestBone = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(AIMBOT_Bones[x]));

				if (BestBone.IsValid())
				{
					FVectorCopy(BestBone, DamageInfo.BestBone);
					vDamageInfo.push_back(DamageInfo);
				}
			}

			if (!vDamageInfo.empty())
			{
				std::shuffle(vDamageInfo.begin(), vDamageInfo.end(), Gen);

				FVectorCopy(vDamageInfo.front().BestBone, AimPosition);

				return true;
			}
		}

		return false;
	}

	void GetBoneMethod(std::vector<tTargetInfo>& vTargetInfo)
	{
		tTargetInfo TargetInfo;

		CG::ASolarCharacter* LocalCharacter = static_cast<CG::ASolarCharacter*>(ZXC.PlayerController->Character);
		if (!LocalCharacter)
			return;

		CG::FVector Location = ZXC.CameraManager->GetCameraLocation();
		CG::FRotator Rotation = ZXC.CameraManager->GetCameraRotation();

		CG::TArray<CG::AActor*> Actors = CG::TArray<CG::AActor*>();
		ZXC.GameplayStatics->STATIC_GetAllActorsOfClass(ZXC.World, CG::ASolarCharacter::StaticClass(), &Actors);
		for (int i = 0; i < Actors.Count(); i++)
		{
			CG::ASolarCharacter* Enemy = static_cast<CG::ASolarCharacter*>(Actors[i]);

			if (!Enemy)
				continue;

			if (!Enemy->RootComponent)
				continue;

			if (Enemy == LocalCharacter)
				continue;

			if (Enemy->InSameTeamWithFirstPlayerController())
				continue;

			if (!Enemy->K2_IsAlive())
				continue;

			if (_profiler.gVisibleCheck.Custom.bValue && !ZXC.PlayerController->LineOfSightTo(Enemy, { 0.f,0.f,0.f }, false))
				continue;

			if (_profiler.gIgnoreKnocked.Custom.bValue && Enemy->IsDying())
				continue;

			if (_profiler.gIgnoreStealth.Custom.bValue && Enemy->IsInInvisibleStatus())
				continue;

			if (VisibilityMethod(Enemy))
			{
				if (_profiler.gAimPrediction.Custom.bValue)
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
					float Distance = Location.Distance(AimPosition) / 100.f;

					CG::FVector Velocity = Enemy->RootComponent->ComponentVelocity;
					CurrentPosition = Prediction(BulletSpeed, BulletGravity, Distance, AimPosition, Velocity);
				}
				else
				{
					CurrentPosition = AimPosition;
				}

				TargetInfo.Enemy = Enemy;
				FVectorCopy(CurrentPosition, TargetInfo.AimPosition);
				vTargetInfo.push_back(TargetInfo);
			}
		}

		if (!vTargetInfo.empty())
		{
			std::sort(vTargetInfo.begin(), vTargetInfo.end(), [&](const tTargetInfo& a, const tTargetInfo& b)
				{	
					CG::FVector2D TargetPosA;
					CG::FVector2D TargetPosB;

					// Calculate screen positions for targets 'a' and 'b'
					if (!ZXC.GameplayStatics->STATIC_ProjectWorldToScreen(ZXC.PlayerController, a.AimPosition, &TargetPosA, false))
						return false;

					if (!ZXC.GameplayStatics->STATIC_ProjectWorldToScreen(ZXC.PlayerController, b.AimPosition, &TargetPosB, false))
						return true;

					float DistanceA = std::sqrt(std::pow(TargetPosA.X - (ScreenWidth / 2), 2) + std::pow(TargetPosA.Y - (ScreenHeight / 2), 2));
					float DistanceB = std::sqrt(std::pow(TargetPosB.X - (ScreenWidth / 2), 2) + std::pow(TargetPosB.Y - (ScreenHeight / 2), 2));

					return DistanceA < DistanceB;
				});
		}
	}
}