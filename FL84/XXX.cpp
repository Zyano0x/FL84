#include "pch.h"

XXX ZZZ;

//========================================================================================================

bool XXX::SanityCheck()
{
	World = *SDK::UWorld::GWorld;
	if (!World)
		return false;

	LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
	if (!LocalPlayer)
		return false;

	PlayerController = LocalPlayer->PlayerController;
	if (!PlayerController)
		return false;

	CameraManager = PlayerController->PlayerCameraManager;
	if (!CameraManager)
		return false;

	return true;
}

void XXX::Unknown()
{
	if (!SanityCheck())
		return;

	SDK::ASolarCharacter* LocalCharacter = static_cast<SDK::ASolarCharacter*>(PlayerController->AcknowledgedPawn);
	if (!LocalCharacter)
		return;

	PlayerController->GetViewportSize(&ScreenWidth, &ScreenHeight);

	SDK::TArray<SDK::AActor*> Actors = *(SDK::TArray<SDK::AActor*>*)((uintptr_t)World->PersistentLevel + 0x98);
	for (int i = 0; i < Actors.Count(); i++)
	{
		SDK::AActor* Actor = Actors[i];

		if (!Actor)
			continue;

		if (Actor->IsA(SDK::ASolarCharacter::StaticClass()))
		{
			SDK::ASolarCharacter* Enemy = static_cast<SDK::ASolarCharacter*>(Actor);

			if (Enemy->InSameTeamWithFirstPlayerController())
				IsTeam = true;
			else
				IsTeam = false;

			// Don't draw the enemy is esp enemy is off
			if (!IsTeam && !_profiler.gEnemyEsp.Custom.bValue)
				continue;

			// Don't draw the teammates is esp team is off
			if (IsTeam && !_profiler.gTeamEsp.Custom.bValue)
				continue;

			if (!IsTeam)
			{
				ImVec4Copy(_profiler.gColorEnemyInvisible.Custom.cValue, ColorVisisble);

				if (PlayerController->LineOfSightTo(Enemy, { 0.f,0.f,0.f }, false))
					ImVec4Copy(_profiler.gColorEnemyVisible.Custom.cValue, ColorVisisble);

				if (Enemy->IsInInvisibleStatus())
					ImVec4Copy(_profiler.gColorEnemyStealth.Custom.cValue, ColorVisisble);
			}
			else
			{
				ImVec4Copy(_profiler.gColorTeammate.Custom.cValue, ColorVisisble);
			}

			if (!Enemy->K2_IsAlive())
				continue;

			if (Enemy == LocalCharacter)
				continue;

			Head = Enemy->Mesh->GetBoneWorldPos(HEAD);
			Root = Enemy->Mesh->GetBoneWorldPos(ROOT);
			//Head = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(HEAD));
			//Root = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(ROOT));

			if (PlayerController->ProjectWorldLocationToScreen(Head, &HeadPos, false)
				&& PlayerController->ProjectWorldLocationToScreen(Root, &FootPos, false))
			{
				float Top = HeadPos.Y;
				float Bottom = FootPos.Y;
				float Width = abs(Top - Bottom) / 2.f;
				float Left = FootPos.X - Width / 2.f;
				float Right = FootPos.X + Width / 2.f;

				if (!_profiler.gPlayerEspEnabled.Custom.bValue)
					continue;

				if (_profiler.gPlayerName.Custom.bValue)
				{
					std::string Name = xorstr_("------");

					if (!Enemy->PlayerState)
						continue;

					SDK::ESCMPlayerType PlayerType = static_cast<SDK::ASCMPlayerState*>(Enemy->PlayerState)->PlayerType;

					if (PlayerType == SDK::ESCMPlayerType::BotAI)
					{
						Draw::DrawString(xorstr_("BOT"), (Left + Right) / 2, Top - 17, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
					}
					else
					{
						SDK::FString PlayerName = Enemy->PlayerState->PlayerNamePrivate;

						if (PlayerName.IsValid())
							Name = std::string(PlayerName.ToString());
					}

					Draw::DrawString(Name, (Left + Right) / 2, Top - 17, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}

				if (_profiler.gPlayerDistance.Custom.bValue && !_profiler.gPlayerWeapon.Custom.bValue)
				{
					int Distance = LocalCharacter->GetDistanceTo(Enemy) / 100;

					Draw::DrawString(std::string("[" + std::to_string(Distance) + " M]"), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(std::string(xorstr_("[In Vehicle]")), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}
				else if (!_profiler.gPlayerDistance.Custom.bValue && _profiler.gPlayerWeapon.Custom.bValue)
				{
					std::string Weapon = xorstr_("----");
					std::string AmmoClip = xorstr_("----");

					if (Enemy->CachedCurrentWeapon)
					{
						Weapon = Enemy->CachedCurrentWeapon->ItemData.Name.ToString();
						AmmoClip = std::to_string(Enemy->CachedCurrentWeapon->CurrentClipAmmo);
					}

					Draw::DrawString(std::string(Weapon).append(" | ").append(AmmoClip), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(std::string(xorstr_("[In Vehicle]")), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}
				else if (_profiler.gPlayerDistance.Custom.bValue && _profiler.gPlayerWeapon.Custom.bValue)
				{
					int Distance = LocalCharacter->GetDistanceTo(Enemy) / 100;

					std::string Weapon = xorstr_("----");
					std::string AmmoClip = xorstr_("----");

					if (Enemy->CachedCurrentWeapon)
					{
						Weapon = Enemy->CachedCurrentWeapon->ItemData.Name.ToString();
						AmmoClip = std::to_string(Enemy->CachedCurrentWeapon->CurrentClipAmmo);
					}

					Draw::DrawString(std::string(Weapon).append(" | ").append(AmmoClip), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
					Draw::DrawString(std::string("[" + std::to_string(Distance) + " M]"), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(std::string(xorstr_("[In Vehicle]")), (Left + Right) / 2, Bottom + 35, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}

				if (_profiler.gPlayerHealth.Custom.bValue)
				{
					ImVec4 ShieldColor = ImVec4();

					if (Enemy->CurrShieldValue > 0)
					{
						if (Enemy->CurrShieldLevel == 1)
							ShieldColor = ImVec4(0.77f, 0.77f, 0.77f, 1.f);
						else if (Enemy->CurrShieldLevel == 2)
							ShieldColor = ImVec4(0.52f, 0.84f, 0.f, 1.f);
						else if (Enemy->CurrShieldLevel == 3)
							ShieldColor = ImVec4(0.40f, 0.92f, 0.96f, 1.f);
						else if (Enemy->CurrShieldLevel == 4)
							ShieldColor = ImVec4(0.86f, 0.45f, 1.f, 1.f);
						else if (Enemy->CurrShieldLevel == 5)
							ShieldColor = ImVec4(1.f, 0.51f, 0.24f, 1.f);
						else if (Enemy->CurrShieldLevel == 6)
							ShieldColor = ImVec4(0.98f, 0.25f, 0.14f, 1.f);
						else
							ShieldColor = ImVec4(1.0f, 0.84f, 0.0f, 1.f);
					}

					ImVec4 HPColor = ImVec4();
					if (Enemy->GetCurrentHealth() > 0)
						HPColor = ImVec4(0.745f, 0.0f, 0.0f, 1.f);

					if (Enemy->CurrShieldValue > 0)
						Draw::VerticalHealthBar(Left - 12, Top, Width, Bottom - Top, (int)Enemy->CurrShieldValue, (int)Enemy->MaxShieldValue, ShieldColor);

					Draw::VerticalHealthBar(Left - 7, Top, Width, Bottom - Top, (int)Enemy->GetCurrentHealth(), (int)Enemy->GetMaxHealth(), HPColor);
				}

				if (_profiler.gPlayerSkeleton.Custom.bValue)
				{
					std::vector<std::pair<int, int>> SkeletonConnections = {
						{NECK_01, HEAD},

						{SPINE_02, NECK_01},
						{SPINE_01, SPINE_02},
						{SPINE_03, SPINE_01}, // STOMACH TO CHEST
						{PELVIS, SPINE_03},

						{CLAVICLE_R, SPINE_02},
						{UPPERARM_R, CLAVICLE_R},
						{LOWERARM_R, UPPERARM_R}, // RIGHT ELBOW
						{HAND_R, LOWERARM_R},

						{CLAVICLE_L, SPINE_02},
						{UPPERARM_L, CLAVICLE_L},
						{LOWERARM_L, UPPERARM_L}, // LEFT ELBOW
						{HAND_L, LOWERARM_L},

						{THIGH_R, PELVIS},
						{CALF_R, THIGH_R},
						{FOOT_R, CALF_R},

						{THIGH_L, PELVIS},
						{CALF_L, THIGH_L},
						{FOOT_L, CALF_L},
					};

					SDK::FVector2D BoneScreen, PrevBoneScreen;
					for (const std::pair<int, int>& Connection : SkeletonConnections)
					{
						int Bone1 = Connection.first;
						int Bone2 = Connection.second;

						SDK::FVector BoneLoc1 = Enemy->Mesh->GetBoneWorldPos(Bone1);
						SDK::FVector BoneLoc2 = Enemy->Mesh->GetBoneWorldPos(Bone2);

						if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false)
							&& PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
						{
							Draw::DrawLine(BoneScreen.X, BoneScreen.Y, PrevBoneScreen.X, PrevBoneScreen.Y, 1.f, ColorVisisble);
						}
					}
				}

				if (_profiler.gPlayerDirectionLine.Custom.bValue)
				{
					SDK::FVector Start = Enemy->Mesh->GetBoneWorldPos(HEAD);
					SDK::FVector Angles = Enemy->K2_GetActorRotation().ToVector();
					SDK::FVector End = Angles * 250 + Start;
					SDK::FVector2D ScreenStart, ScreenEnd;

					if (PlayerController->ProjectWorldLocationToScreen(Start, &ScreenStart, false)
						&& PlayerController->ProjectWorldLocationToScreen(End, &ScreenEnd, false))
					{
						Draw::DrawLine(ScreenStart.X, ScreenStart.Y, ScreenEnd.X, ScreenEnd.Y, 1.f, ColorVisisble);
						Draw::DrawCircleFilled(ScreenEnd.X, ScreenEnd.Y, 4, ColorVisisble);
					}
				}

				if (_profiler.gPlayerBoxes.Custom.iValue && !Enemy->IsDying() && !Enemy->K2_IsSwimming())
				{
					switch (_profiler.gPlayerBoxes.Custom.iValue)
					{
					case 1:
						Draw::DrawBox(Left, Top, Right, Bottom, false, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.f));
						break;
					case 2:
						Draw::DrawCornersBox(Left, Top, Right, Bottom, true, false, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.f));
						break;
					case 3:
						Draw::DrawBox(Left, Top, Right, Bottom, true, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.f));
						break;
					case 4:
						Draw::DrawCornersBox(Left, Top, Right, Bottom, true, true, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.f));
						break;
					}
				}

				if (_profiler.gPlayerSnaplines.Custom.iValue)
				{
					switch (_profiler.gPlayerSnaplines.Custom.iValue)
					{
					case 1:
						Draw::DrawLine(ScreenWidth / 2, 0, HeadPos.X, HeadPos.Y, 1.f, ColorVisisble);
						break;
					case 2:
						Draw::DrawLine(ScreenWidth / 2, ScreenHeight, FootPos.X, FootPos.Y, 1.f, ColorVisisble);
						break;
					case 3:
						Draw::DrawLine(ScreenWidth / 2, ScreenHeight / 2, FootPos.X, FootPos.Y, 1.f, ColorVisisble);
						break;
					}
				}
			}
			else
			{
				if (!_profiler.gOffscreen.Custom.bValue) // TODO: Fix Offscreen ESP
					continue;

				SDK::FVector2D EntityPos = Math::WorldToRadar(CameraManager->CameraCache.POV.Rotation, CameraManager->CameraCache.POV.Location, Enemy->RootComponent->RelativeLocation, SDK::FVector2D(0, 0), SDK::FVector2D(ScreenWidth, ScreenHeight));
				int RadarRange = 50;

				SDK::FVector Angles = SDK::FVector();
				SDK::FVector Forward = SDK::FVector((float)(ScreenWidth / 2) - EntityPos.X, (float)(ScreenHeight / 2) - EntityPos.Y, 0.f);

				Math::VectorAnglesRadar(Forward, Angles);

				const auto Yaw = DEG2RAD(Angles.Y);
				const float PointX = (ScreenWidth / 2) + RadarRange / 2 * 8 * cosf(Yaw);
				const float PointY = (ScreenHeight / 2) + RadarRange / 2 * 8 * sinf(Yaw);

				std::array<SDK::FVector, 3> Points
				{
					SDK::FVector(PointX - ((90) / 4 + 3.5f) / 2, PointY - ((50) / 4 + 3.5f) / 2, 0.f),
					SDK::FVector(PointX + ((90) / 4 + 3.5f) / 4, PointY, 0.f),
					SDK::FVector(PointX - ((90) / 4 + 3.5f) / 2, PointY + ((50) / 4 + 3.5f) / 2, 0.f)
				};

				Math::RotateTriangle(Points, Angles.Y + 180.f);
				Draw::DrawTriangle(Points.at(0).X, Points.at(0).Y, Points.at(1).X, Points.at(1).Y, Points.at(2).X, Points.at(2).Y, ImVec4(1.0f, 0.874f, 0.0f, 1.0f));
			}
		}
		 
		if (Actor->IsA(SDK::ASolarItemActor::StaticClass()) || Actor->IsA(SDK::ASolarGroundPreviewActor::StaticClass()))
		{
			if (!_profiler.gItemEspEnabled.Custom.bValue)
				continue;

			SDK::ASolarItemActor* Item = static_cast<SDK::ASolarItemActor*>(Actor);

			SDK::FVector ItemLocation = Item->RootComponent->RelativeLocation;

			PlayerController->ProjectWorldLocationToScreen(ItemLocation, &ItemPos, false);

			int ItemDistance = LocalCharacter->GetDistanceTo(Item) / 100.f;

			SDK::EItemType ItemType = Item->ItemData.ItemType;

			int32_t ItemID = Item->ItemData.ItemID;

			int32_t ItemQuality = Item->ItemData.Quality;

			std::string PickupName = Item->ItemData.Name.ToString();

			ImVec4 ItemColor = ImVec4();

			//std::cout << "Item ID: " << ItemID << " Name: " << PickupName << std::endl;

			switch (ItemQuality)
			{
			case 1:
				ItemColor = ImVec4(0.776f, 0.776f, 0.776f, 1.f);
				break;
			case 2:
				ItemColor = ImVec4(0.521f, 0.843f, 0, 1.f);
				break;
			case 3:
				ItemColor = ImVec4(0.4f, 0.921f, 0.960f, 1.f);
				break;
			case 4:
				ItemColor = ImVec4(0.858f, 0.607f, 1.f, 1.f);
				break;
			case 5:
				ItemColor = ImVec4(1.f, 0.509f, 0.239f, 1.f);
				break;
			case 6:
				ItemColor = ImVec4(0.98f, 0.250f, 0.141f, 1.f);
				break;
			}

			if (ItemType <= SDK::EItemType::NONE)
				continue;

			if (ItemType == SDK::EItemType::WEAPON)
			{
				std::string WeaponType = Engine::GetWeaponType(ItemID);

				if (_profiler.gWeaponItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(WeaponType.append(" ").append(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorWeaponItems.Custom.cValue);
			}

			if (ItemType == SDK::EItemType::BULLET)
			{
				if (_profiler.gAmmoItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorAmmoItems.Custom.cValue);
			}

			if (ItemType == SDK::EItemType::WEAPON_PARTS)
			{
				if (_profiler.gAttachmentsItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == SDK::EItemType::SHIELD)
			{
				if (_profiler.gShieldItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == SDK::EItemType::SHIELD_UPGRADE_MATERIAL || ItemType == SDK::EItemType::EXP_ITEM)
			{
				if (_profiler.gShieldUpgrItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == SDK::EItemType::JETPACK_MODULE_HORIZONTAL)
			{
				if (_profiler.gHJetPackItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == SDK::EItemType::JETPACK_MODULE_VERTICAL)
			{
				if (_profiler.gVJetPackItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == SDK::EItemType::CARIRIDGE_BAG)
			{
				if (_profiler.gHealthItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorHealthItems.Custom.cValue);
			}

			if (ItemType == SDK::EItemType::DEATHBOX)
			{
				if (_profiler.gDeathBox.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
			}

			if (ItemType == SDK::EItemType::TREASUREBOX)
			{
				SDK::ASolarTreasureBoxActor* TreausureBox = static_cast<SDK::ASolarTreasureBoxActor*>(Item);
				if (_profiler.gTreasureBox.Custom.bValue && ItemDistance < (_profiler.gItemDistance.Custom.flValue * 2))
				{
					if (TreausureBox->BOpened())
					{
						Draw::DrawString(PickupName.append(" [Opened] ").append("[").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorTreasureBox.Custom.cValue);
					}
					else
					{
						Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorTreasureBox.Custom.cValue);
					}
				}
			}

			if (ItemType == SDK::EItemType::AIRDROPBOX)
			{
				SDK::AAirDropTreasureBox* AirDropBox = static_cast<SDK::AAirDropTreasureBox*>(Item);
				if (_profiler.gAirDrop.Custom.bValue && ItemDistance < (_profiler.gItemDistance.Custom.flValue * 2))
				{
					if (AirDropBox->BOpened())
					{
						Draw::DrawString(PickupName.append(" [Opened] ").append("[").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorAirDrop.Custom.cValue);
					}
					else
					{
						Draw::DrawString(PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorAirDrop.Custom.cValue);
					}
				}
			}
		}

		if (Actor->IsA(SDK::ASolarVehiclePawn::StaticClass()))
		{
			if (!_profiler.gVehicle.Custom.bValue)
				continue;

			SDK::ASolarVehiclePawn* Vehicle = static_cast<SDK::ASolarVehiclePawn*>(Actor);

			SDK::FVector VehicleLocation = Vehicle->RootComponent->RelativeLocation;

			PlayerController->ProjectWorldLocationToScreen(VehicleLocation, &VehiclePos, false);

			int VehicleDistance = LocalCharacter->GetDistanceTo(Vehicle) / 100;

			std::string VehicleName = Engine::GetVehicleName(Vehicle->Name.GetName());

			ImVec4 HPColor = ImVec4();

			if (Vehicle->GetCurrentHealth() > 0)
				HPColor = ImVec4(.90f, .90f, .90f, 1.f);

			Draw::HorizontalHealthBar(VehiclePos.X - 55, VehiclePos.Y, 100, 10, (int)Vehicle->GetCurrentHealth(), (int)Vehicle->GetMaxHealth(), HPColor);
			Draw::DrawString(VehicleName.append(" [").append(std::to_string(VehicleDistance)).append(" M]"), VehiclePos.X, VehiclePos.Y + 10, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
		}
	}
}

void XXX::NoRecoil()
{
	if (!SanityCheck())
		return;

	/*if (_profiler.gTest.Custom.bValue)
	{
		if (!PlayerController->Character)
			return;

		SDK::ASolarPlayerWeapon* CachedCurrentWeapon = static_cast<SDK::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		uint64_t* VTable = *(uint64_t**)(CachedCurrentWeapon + 0x0);

		printf("0x%llX\n", VTable[206]);
	}*/

	if (_profiler.gFastReload.Custom.bValue)
	{
		if (!PlayerController->Character)
			return;

		SDK::ASolarPlayerWeapon* CachedCurrentWeapon = static_cast<SDK::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		SDK::USingleWeaponConfig* Config = CachedCurrentWeapon->Config;
		if (!Config)
			return;

		SDK::UAmmoConfig* AmmoConfig = Config->PrimaryAmmo;
		if (!AmmoConfig)
			return;

		AmmoConfig->BaseReloadTime = 1.65f;
	}

	if (_profiler.gNoRecoil.Custom.bValue)
	{
		if (!PlayerController->Character)
			return;

		SDK::ASolarPlayerWeapon* CachedCurrentWeapon = static_cast<SDK::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		SDK::USingleWeaponConfig* Config = CachedCurrentWeapon->Config;
		if (!Config)
			return;

		Config->MaxSpread = 0.0f;
		Config->MinSpread = 0.0f;
		Config->HipFireBaseSpread = 0.0f;
		Config->ShoulderFireBaseSpread = 0.0f;
		Config->ADSBaseSpread = 0.0f;
		Config->VhADSBaseSpread = 0.0f;

		SDK::UAmmoConfig* PrimaryAmmo = Config->PrimaryAmmo;
		if (!PrimaryAmmo)
			return;

		PrimaryAmmo->ADSRecoilCOP = 0.0f;
		PrimaryAmmo->ADSSpreadCOP = 0.0f;
		PrimaryAmmo->BoltActionTime = 0.0f;
		PrimaryAmmo->FireIntervalRevertPreTime = 0.75f;
		PrimaryAmmo->FireIntervalReavertSpeed = 0.75f;

		SDK::FAmmonRecoilScope FAmmonRecoilScopePrimary = PrimaryAmmo->ScopeRecoil;
		FAmmonRecoilScopePrimary.EnableScopeVibration = false;
		FAmmonRecoilScopePrimary.EnableCrossHairVibration = false;
		FAmmonRecoilScopePrimary.EnableScopeRoll = false;

		SDK::UAmmoConfig* SecondaryAmmo = Config->SecondaryAmmo;
		if (!SecondaryAmmo)
			return;

		SecondaryAmmo->ADSRecoilCOP = 0.0f;
		SecondaryAmmo->ADSSpreadCOP = 0.0f;
		SecondaryAmmo->BoltActionTime = 0.0f;
		SecondaryAmmo->FireIntervalRevertPreTime = 0.75f;
		SecondaryAmmo->FireIntervalReavertSpeed = 0.75f;

		SDK::FAmmonRecoilScope FAmmonRecoilScopeSecondary = SecondaryAmmo->ScopeRecoil;
		FAmmonRecoilScopeSecondary.EnableScopeVibration = false;
		FAmmonRecoilScopeSecondary.EnableCrossHairVibration = false;
		FAmmonRecoilScopeSecondary.EnableScopeRoll = false;

		SDK::UWeaponShootConfig* WeaponShootConfig = Config->WeaponShootConfig;
		if (!WeaponShootConfig)
			return;

		WeaponShootConfig->bEnableNewRecoil = false;
		WeaponShootConfig->bEnableNewSpread = false;
		WeaponShootConfig->bEnableNewWeaponAnim = false;
		WeaponShootConfig->bEnableNewCameraShake = false;
		WeaponShootConfig->BaseSpread = 0.0f;

		SDK::UWeaponRecoilComponent* RecoilComponent = CachedCurrentWeapon->GetRecoilComponent();
		if (!RecoilComponent)
			return;

		RecoilComponent->SetRecoilActive(false);
		RecoilComponent->SetRecoilVActive(false);
		RecoilComponent->SetRecoilRActive(false);
		RecoilComponent->SetRecoilHActive(false);
	}
}

void XXX::Vehicle()
{
	if (!SanityCheck())
		return;

	SDK::ASolarCharacter* LocalCharacter = static_cast<SDK::ASolarCharacter*>(PlayerController->AcknowledgedPawn);
	if (!LocalCharacter)
		return;

	SDK::ASolarPlayerController* SolarPlayerController = LocalCharacter->GetSolarPlayerController(true);
	if (!SolarPlayerController)
		return;

	SDK::ASolarVehiclePawn* LocalVehicle = SolarPlayerController->BestInteractingVehicle;
	if (!LocalVehicle)
		return;

	if (_profiler.gVehicleSpeed.Custom.bValue)
	{
		LocalVehicle->VehicleAttributeSet->SpeedMultiplier.BaseValue = _profiler.gVehicleSpeedMulti.Custom.flValue;
		LocalVehicle->VehicleAttributeSet->SpeedMultiplier.CurrentValue = _profiler.gVehicleSpeedMulti.Custom.flValue;
	}

	if (_profiler.gVehicleSilentAim.Custom.bValue)
	{
		SDK::ASolarVehicleWeapon* VehicleWeapon = LocalVehicle->SeatSlots[0].SeatWeapon;
		if (!VehicleWeapon)
			return;

		if (Aimbot::TargetPosition.IsValid())
			return;

		*(SDK::FVector*)(VehicleWeapon + 0xE9C) = Aimbot::TargetPosition;
	}

	if (_profiler.gVehicleNoRecoil.Custom.bValue)
	{
		SDK::ASolarVehicleWeapon* VehicleWeapon = LocalVehicle->SeatSlots[0].SeatWeapon;
		if (!VehicleWeapon)
			return;

		SDK::USingleWeaponConfig* Config = VehicleWeapon->Config;
		if (!Config)
			return;

		Config->MaxSpread = 0.0f;
		Config->MinSpread = 0.0f;
		Config->HipFireBaseSpread = 0.0f;
		Config->ShoulderFireBaseSpread = 0.0f;
		Config->ADSBaseSpread = 0.0f;
		Config->VhADSBaseSpread = 0.0f;

		SDK::UWeaponRecoilComponent* RecoilComponent = VehicleWeapon->GetRecoilComponent();
		if (!RecoilComponent)
			return;

		RecoilComponent->SetRecoilActive(false);
		RecoilComponent->SetRecoilVActive(false);
		RecoilComponent->SetRecoilRActive(false);
		RecoilComponent->SetRecoilHActive(false);
	}
}

void XXX::Aimbot()
{
	if (!SanityCheck())
		return;

	SDK::ASolarCharacter* LocalCharacter = static_cast<SDK::ASolarCharacter*>(PlayerController->Character);
	if (!LocalCharacter)
		return;

	SDK::FVector LocalLocation = LocalCharacter->GetCameraLocation();
	SDK::FRotator OldRotation = LocalCharacter->GetControlRotation();

	if (_profiler.gDrawFOV.Custom.bValue)
	{
		ImGui::GetBackgroundDrawList()->AddCircle(ImVec2(ScreenWidth / 2, ScreenHeight / 2), _profiler.gAimFOV.Custom.flValue /** ((ScreenWidth / 2) / 90)*/, ImGui::GetColorU32(ImVec4(1.f, 0.141f, 0.f, 1.f)));
	}

	if (!_profiler.gAimEnabled.Custom.bValue)
		return;

	SDK::TArray<SDK::AActor*> Actors = *(SDK::TArray<SDK::AActor*>*)((uintptr_t)World->PersistentLevel + 0x98);
	for (int i = 0; i < Actors.Count(); i++)
	{
		SDK::AActor* Actor = Actors[i];

		if (!Actor)
			continue;

		if (!Actor->RootComponent)
			continue;

		if (Actor->IsA(SDK::ASolarCharacter::StaticClass()))
		{
			SDK::ASolarCharacter* Enemy = static_cast<SDK::ASolarCharacter*>(Actor);

			if (Enemy == LocalCharacter)
				continue;

			if (Enemy->InSameTeamWithFirstPlayerController())
				continue;

			if (!PlayerController->LineOfSightTo(Enemy, { 0.f,0.f,0.f }, false))
				continue;

			if (!Enemy->K2_IsAlive())
				continue;

			if (_profiler.gIgnoreKnocked.Custom.bValue && Enemy->IsDying())
				continue;

			if (_profiler.gIgnoreStealth.Custom.bValue && Enemy->IsInInvisibleStatus())
				continue;

			switch (_profiler.gAimBone.Custom.iValue)
			{
			case 0:
				Aimbot::AimPosition = Enemy->Mesh->GetBoneWorldPos(HEAD);
				break;

			case 1:
				Aimbot::AimPosition = Enemy->Mesh->GetBoneWorldPos(NECK_01);
				break;

			case 2:
				Aimbot::AimPosition = Enemy->Mesh->GetBoneWorldPos(SPINE_03);
				Aimbot::AimPosition.Y -= 10;
				break;

			case 3:
				int Point = Engine::GetNearestBone(PlayerController->PlayerCameraManager, Enemy, Engine::HitBoxes);
				Aimbot::AimPosition = Enemy->Mesh->GetBoneWorldPos(Point);
				break;
			}

			if (_profiler.gAimPrediction.Custom.bValue)
			{
				SDK::ASolarPlayerWeapon* CachedCurrentWeapon = LocalCharacter->CachedCurrentWeapon;
				if (!CachedCurrentWeapon)
					continue;

				SDK::USingleWeaponConfig* Config = CachedCurrentWeapon->Config;
				if (!Config)
					continue;

				SDK::UAmmoConfig* AmmoConfig = Config->PrimaryAmmo;
				if (!AmmoConfig)
					continue;

				float BulletSpeed = AmmoConfig->InitSpeed / 100.f;
				float BulletGravity = AmmoConfig->ProjectileMaxGravity;
				float Distance = LocalLocation.Distance(Aimbot::AimPosition) / 100.f;

				SDK::FVector Velocity = Enemy->RootComponent->ComponentVelocity;
				Aimbot::CurrentPosition = Aimbot::AimbotPrediction(BulletSpeed, BulletGravity, Distance, Aimbot::AimPosition, Velocity);
			}
			else
			{
				Aimbot::CurrentPosition = Aimbot::AimPosition;
			}

			SDK::FVector2D TargetPos = SDK::FVector2D();
			if (!PlayerController->ProjectWorldLocationToScreen(Aimbot::CurrentPosition, &TargetPos, false))
				continue;

			const float x = TargetPos.X - (ScreenWidth / 2);
			const float y = TargetPos.Y - (ScreenHeight / 2);
			float CenterDistance = sqrt(pow(y, 2) + pow(x, 2));

			if (CenterDistance < Aimbot::ClosestDistance && CenterDistance <= _profiler.gAimFOV.Custom.flValue)
			{
				Aimbot::ClosestDistance = CenterDistance;
				Aimbot::LockPosition = TargetPos;
				Aimbot::TargetPosition = Aimbot::CurrentPosition;
				Aimbot::TargetRotation = Aimbot::CalcAngle(LocalLocation, Aimbot::CurrentPosition, OldRotation, _profiler.gAimSmooth.Custom.flValue);
			}
		}
	}

	//Draw::DrawLine(ScreenWidth / 2, ScreenHeight / 2, Aimbot::LockPosition.X, Aimbot::LockPosition.Y, 1.f, ImVec4(1.f, 0.141f, 0.f, 1.f));

	if (_profiler.gAimType.Custom.iValue == 0)
	{
		Aimbot::SetRotation(PlayerController->PlayerCameraManager, PlayerController, Aimbot::TargetRotation, false, _profiler.gAimSmooth.Custom.flValue);
	}
	else if (_profiler.gAimType.Custom.iValue == 1)
	{
		Aimbot::LockOnTarget();
	}
}

void XXX::Misc()
{
	if (!SanityCheck())
		return;

	SDK::ASolarCharacter* LocalCharacter = static_cast<SDK::ASolarCharacter*>(PlayerController->AcknowledgedPawn);
	if (!LocalCharacter)
		return;

	if (_mainGUI.GetKeyPress(VK_DELETE, false))
	{
		LocalCharacter->Suicide();
	}

	if (_mainGUI.GetKeyPress(VK_F3, false))
	{
		if (!LocalCharacter)
			return;

		LocalCharacter->ServerSetJetPackModule(1140103, true);
		LocalCharacter->ServerSetJetPackModule(1110403, false);
	}

	SDK::ASolarSpectateInfo* SpectateInfo = LocalCharacter->GetSpectateInfo();
	if (!SpectateInfo)
		return;

	if (_profiler.gSpamLike.Custom.bValue)
	{
		if (_mainGUI.GetKeyPress(VK_OEM_PLUS, false))
		{
			SpectateInfo->ServerChangeLikeValue(_profiler.gLikeValue.Custom.iValue, 2, SDK::ESocialActionType::Like);
		}

		if (_mainGUI.GetKeyPress(VK_OEM_MINUS, false))
		{
			SpectateInfo->ServerChangeLikeValue(_profiler.gDislikeValue.Custom.iValue, -1, SDK::ESocialActionType::Unlike);
		}
	}

	if (_profiler.gStopSpectator.Custom.bValue)
	{
		SDK::TArray<SDK::ASolarPlayerState*> Spectators = SpectateInfo->PlayersSpectatingMe;
		for (int i = 0; i < Spectators.Count(); i++)
		{
			SDK::ASolarCharacter* SpectatorCharacter = Spectators[i]->GetSolarCharacter();
			if (!SpectatorCharacter)
				continue;

			SDK::ASolarSpectateInfo* Spectator = SpectatorCharacter->GetSpectateInfo();
			if (!Spectator)
				continue;

			Spectator->ServerStopSpectateOtherPlayer();
		}
	}
}

void XXX::Radar()
{
	if (!_profiler.gRadar.Custom.bValue)
		return;

	ImGui::SetNextWindowSize(ImVec2(150.0f, 150.0f), ImGuiCond_Appearing);
	ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.0f, 0.0f, 0.0f, 0.45f));
	ImGui::Begin("Radar", &_profiler.gRadar.Custom.bValue, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
	{
		ImVec2 windowPos = ImGui::GetWindowPos();
		ImVec2 windowSize = ImGui::GetWindowSize();

		_profiler.gRadarPosX.Custom.flValue = windowPos.x;
		_profiler.gRadarPosY.Custom.flValue = windowPos.y;

		_profiler.gRadarSizeX.Custom.flValue = windowSize.x;
		_profiler.gRadarSizeY.Custom.flValue = windowSize.y;

		float RadarCenterX = windowPos.x + (150.0f / 2);
		float RadarCenterY = windowPos.y + (150.0f / 2);

		ImDrawList* DrawList = ImGui::GetWindowDrawList();
		if (DrawList != nullptr)
		{
			DrawList->AddLine(
				ImVec2(windowPos.x + (windowSize.x / 2), windowPos.y),
				ImVec2(windowPos.x + (windowSize.x / 2), windowPos.y + windowSize.y), IM_COL32(255, 255, 255, 255), 1.0f);

			DrawList->AddLine(
				ImVec2(windowPos.x, windowPos.y + (windowSize.y / 2)),
				ImVec2(windowPos.x + windowSize.x, windowPos.y + (windowSize.y / 2)), IM_COL32(255, 255, 255, 255), 1.0f);
		}

		if (!SanityCheck())
			return;

		SDK::ASolarCharacter* LocalCharacter = static_cast<SDK::ASolarCharacter*>(PlayerController->AcknowledgedPawn);
		if (!LocalCharacter)
			return;

		SDK::TArray<SDK::AActor*> Actors = *(SDK::TArray<SDK::AActor*>*)((uintptr_t)World->PersistentLevel + 0x98);
		for (int i = 0; i < Actors.Count(); i++)
		{
			SDK::AActor* Actor = Actors[i];

			if (!Actor)
				continue;

			if (!Actor->RootComponent)
				continue;

			if (Actor->IsA(SDK::ASolarCharacter::StaticClass()))
			{
				SDK::ASolarCharacter* Enemy = static_cast<SDK::ASolarCharacter*>(Actor);

				if (Enemy->InSameTeamWithFirstPlayerController())
					continue;

				if (Enemy == LocalCharacter)
					continue;

				if (!Enemy->K2_IsAlive())
					continue;

				float Distance = LocalCharacter->GetDistanceTo(Enemy) / 100.0f;

				SDK::FVector2D RotatePoint = Math::WorldToRadar(CameraManager->GetCameraRotation(), CameraManager->GetCameraLocation(), Enemy->K2_GetActorLocation(), SDK::FVector2D(windowPos.x, windowPos.y), SDK::FVector2D(windowSize.x, windowSize.y));

				if (Distance >= 0.f && Distance < _profiler.gRadarDistance.Custom.flValue)
				{
					Draw::DrawCircleFilled(RotatePoint.X, RotatePoint.Y, 4, ImVec4(1.0f, 0.874f, 0.0f, 1.0f));
				}
			}
		}
	}
	ImGui::PopStyleColor();
	ImGui::End();
}

void XXX::BypassEAC()
{
	SDK::USolarEasyAntiCheatManager* EAC_ = SDK::USolarEasyAntiCheatManager::GetDefaultObj();
	if (!EAC_)
		return;

	EAC_->EnableAntiCheat = false;
	EAC_->bEnableAntiCheatLauncherCheck = false;

	SDK::UWorld* World = *SDK::UWorld::GWorld;
	if (!World)
		return;

	SDK::USolarGameInstanceBase* GameInstance = static_cast<SDK::USolarGameInstanceBase*>(World->OwningGameInstance);
	if (!GameInstance)
		return;

	SDK::USolarEasyAntiCheatManager* EAC__ = GameInstance->GetSolarEasyAntiCheatManager();
	if (!EAC__)
		return;

	EAC__->EnableAntiCheat = false;
	EAC__->bEnableAntiCheatLauncherCheck = false;
}