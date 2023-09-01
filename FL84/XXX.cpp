#include "pch.h"

XXX ZZZ;

//========================================================================================================

void XXX::Unknown()
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

	CG::APlayerCameraManager* CameraManager = PlayerController->PlayerCameraManager;
	if (!CameraManager)
		return;

	CG::ASolarCharacter* LocalCharacter = reinterpret_cast<CG::ASolarCharacter*>(PlayerController->AcknowledgedPawn);
	if (!LocalCharacter)
		return;

	PlayerController->GetViewportSize(&ScreenWidth, &ScreenHeight);

	CG::TArray<CG::AActor*> Actors = *(CG::TArray<CG::AActor*>*)((uintptr_t)World->PersistentLevel + 0x98);
	for (int i = 0; i < Actors.Count(); i++)
	{
		CG::AActor* Actor = Actors[i];

		if (!Actor)
			continue;

		if (Actor->IsA(CG::ASolarCharacter::StaticClass()))
		{
			CG::ASolarCharacter* Enemy = reinterpret_cast<CG::ASolarCharacter*>(Actor);

			if (Enemy->InSameTeamWithFirstPlayerController())
				IsTeam = true;
			else
				IsTeam = false;

			//Don't draw the enemy is esp enemy is off
			if (!IsTeam && !Settings[ESP_ENEMY].Value.bValue)
				continue;

			//Don't draw the teammates is esp team is off
			if (IsTeam && !Settings[ESP_TEAM].Value.bValue)
				continue;

			if (!IsTeam)
			{
				ImVec4Copy(Settings[COLOR_ENEMY].Value.v4Value, ColorVisisble);

				if (PlayerController->LineOfSightTo(Enemy, { 0.f,0.f,0.f }, false))
					ImVec4Copy(Settings[COLOR_ENEMY_VISIBLE].Value.v4Value, ColorVisisble);
			}
			else
			{
				ImVec4Copy(Settings[COLOR_TEAM].Value.v4Value, ColorVisisble);
			}

			if (!Enemy->K2_IsAlive())
				continue;

			if (Enemy == LocalCharacter)
				continue;

			Head = Engine::GetBonePosition(Enemy->Mesh, HEAD);
			Root = Engine::GetBonePosition(Enemy->Mesh, ROOT);
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

				if (!Settings[ESP_ENABLED].Value.bValue)
					return;

				if (Settings[ESP_NAME].Value.bValue)
				{
					std::string Name = "------";

					if (!Enemy->PlayerState)
						continue;

					CG::ESCMPlayerType PlayerType = reinterpret_cast<CG::ASCMPlayerState*>(Enemy->PlayerState)->PlayerType;

					if (PlayerType == CG::ESCMPlayerType::BotAI)
					{
						Draw::DrawString("BOT", (Left + Right) / 2, Top - 17, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
					}
					else
					{
						CG::FString PlayerName = Enemy->PlayerState->PlayerNamePrivate;

						if (PlayerName.IsValid())
							Name = std::string(PlayerName.ToString());
					}

					Draw::DrawString(Name, (Left + Right) / 2, Top - 17, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}

				if (Settings[ESP_DISTANCE].Value.bValue && !Settings[ESP_WEAPON].Value.bValue)
				{
					int Distance = LocalCharacter->GetDistanceTo(Enemy) / 100;

					Draw::DrawString(std::string("[" + std::to_string(Distance) + " M]"), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(std::string("[In Vehicle]"), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}
				else if (!Settings[ESP_DISTANCE].Value.bValue && Settings[ESP_WEAPON].Value.bValue)
				{
					std::string Weapon = "----";
					std::string AmmoClip = "----";

					if (Enemy->CachedCurrentWeapon)
					{
						Weapon = Enemy->CachedCurrentWeapon->ItemData.Name.ToString();
						AmmoClip = std::to_string(Enemy->CachedCurrentWeapon->CurrentClipAmmo);
					}

					Draw::DrawString(std::string(Weapon).append(" | ").append(AmmoClip), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(std::string("[In Vehicle]"), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}
				else if (Settings[ESP_DISTANCE].Value.bValue && Settings[ESP_WEAPON].Value.bValue)
				{
					int Distance = LocalCharacter->GetDistanceTo(Enemy) / 100;

					std::string Weapon = "----";
					std::string AmmoClip = "----";

					if (Enemy->CachedCurrentWeapon)
					{
						Weapon = Enemy->CachedCurrentWeapon->ItemData.Name.ToString();
						AmmoClip = std::to_string(Enemy->CachedCurrentWeapon->CurrentClipAmmo);
					}

					Draw::DrawString(std::string(Weapon).append(" | ").append(AmmoClip), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
					Draw::DrawString(std::string("[" + std::to_string(Distance) + " M]"), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(std::string("[In Vehicle]"), (Left + Right) / 2, Bottom + 35, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}

				if (Settings[ESP_HEALTH].Value.bValue)
				{
					ImVec4 ShieldColor = ImVec4();
					if (Enemy->CurrShieldValue > 0)
						ShieldColor = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);

					ImVec4 HPColor = ImVec4();
					if (Enemy->GetCurrentHealth() > 0)
						HPColor = ImVec4(0.745f, 0.0f, 0.0f, 1.f);

					if (Enemy->CurrShieldValue > 0)
						Draw::VerticalHealthBar(Left - 10, Top, Width, Bottom - Top, (int)Enemy->CurrShieldValue, (int)Enemy->MaxShieldValue, ShieldColor);
					else
						Draw::VerticalHealthBar(Left - 10, Top, Width, Bottom - Top, (int)Enemy->GetCurrentHealth(), (int)Enemy->GetMaxHealth(), HPColor);
				}

				if (Settings[ESP_SKELETON].Value.bValue)
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

					CG::FVector2D BoneScreen, PrevBoneScreen;
					for (const std::pair<int, int>& Connection : SkeletonConnections)
					{
						int Bone1 = Connection.first;
						int Bone2 = Connection.second;

						CG::FVector BoneLoc1 = /*Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(Bone1))*/ Engine::GetBonePosition(Enemy->Mesh, Bone1);
						CG::FVector BoneLoc2 = /*Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(Bone2))*/ Engine::GetBonePosition(Enemy->Mesh, Bone2);

						if (PlayerController->ProjectWorldLocationToScreen(BoneLoc1, &BoneScreen, false)
							&& PlayerController->ProjectWorldLocationToScreen(BoneLoc2, &PrevBoneScreen, false))
						{
							Draw::DrawLine(BoneScreen.X, BoneScreen.Y, PrevBoneScreen.X, PrevBoneScreen.Y, 1.f, ColorVisisble);
						}
					}
				}

				if (Settings[ESP_DIRECTIONLINE].Value.bValue)
				{
					CG::FVector Start = Enemy->Mesh->GetBoneWorldPos(HEAD);
					CG::FVector Angles = Enemy->K2_GetActorRotation().ToVector();
					CG::FVector End = Angles * 250 + Start;
					CG::FVector2D ScreenStart, ScreenEnd;

					if (PlayerController->ProjectWorldLocationToScreen(Start, &ScreenStart, false)
						&& PlayerController->ProjectWorldLocationToScreen(End, &ScreenEnd, false))
					{
						Draw::DrawLine(ScreenStart.X, ScreenStart.Y, ScreenEnd.X, ScreenEnd.Y, 1.f, ColorVisisble);
						Draw::DrawCircleFilled(ScreenEnd.X, ScreenEnd.Y, 4, ColorVisisble);
					}
				}

				if (Settings[ESP_BOX_TYPE].Value.iValue && !Enemy->IsDying() && !Enemy->K2_IsSwimming())
				{
					switch (Settings[ESP_BOX_TYPE].Value.iValue)
					{
					case 1:
						Draw::DrawBox(Left, Top, Right, Bottom, true, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.f));
						break;
					case 2:
						Draw::DrawCornersBox(Left, Top, Right, Bottom, true, true, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.f));
						break;
					}
				}

				if (Settings[ESP_SNAPLINES].Value.iValue)
				{
					switch (Settings[ESP_SNAPLINES].Value.iValue)
					{
					case 1:
						Draw::DrawLine(ScreenWidth / 2, 0, HeadPos.X, HeadPos.Y, 1.f, ColorVisisble);
						break;
					case 2:
						Draw::DrawLine(ScreenWidth / 2, ScreenHeight, FootPos.X, FootPos.Y, 1.f, ColorVisisble);
						break;
					}
				}
			}
		}

		if (Actor->IsA(CG::ASolarItemActor::StaticClass()) || Actor->IsA(CG::ASolarGroundPreviewActor::StaticClass()))
		{
			CG::ASolarItemActor* Item = reinterpret_cast<CG::ASolarItemActor*>(Actor);

			CG::FVector ItemLocation = Item->K2_GetActorLocation();

			PlayerController->ProjectWorldLocationToScreen(ItemLocation, &ItemPos, false);

			int ItemDistance = LocalCharacter->GetDistanceTo(Item) / 100.f;

			CG::EItemType ItemType = Item->ItemData.ItemType;

			int32_t ItemQuality = Item->GetQuality();

			ImVec4 ItemColor = ImVec4();

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
				ItemColor = ImVec4(1.f, 0.654f, 0.f, 1.f);
				break;
			default:
				ItemColor = ImVec4(0.690f, 0.960f, 0.913f, 1.f);
				break;
			}

			if ((int)ItemType <= 0)
				continue;

			std::string PickupName = Item->ItemData.Name.ToString();
			CG::FVector2D ItemPos;

			PlayerController->ProjectWorldLocationToScreen(ItemLocation, &ItemPos, false);

			if (!Settings[ESP_LOOT_ENABLED].Value.bValue)
				continue;

			if (ItemType == CG::EItemType::WEAPON)
			{
				if (Settings[ESP_LOOT_WEAPON].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue)
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_LOOT_WEAPON].Value.v4Value);
			}

			if (ItemType == CG::EItemType::BULLET)
			{
				if (Settings[ESP_LOOT_AMMO].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue)
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_LOOT_AMMO].Value.v4Value);
			}

			if (ItemType == CG::EItemType::WEAPON_PARTS)
			{
				if (Settings[ESP_LOOT_ATTACHMENTS].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue && ItemQuality >= (Settings[ESP_LOOT_LEVEL].Value.iValue + 1))
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_LOOT_ATTACHMENTS].Value.v4Value);
			}

			if (ItemType == CG::EItemType::SHIELD)
			{
				if (Settings[ESP_LOOT_SHIELD].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue && ItemQuality >= (Settings[ESP_LOOT_LEVEL].Value.iValue + 1))
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::SHIELD_UPGRADE_MATERIAL || ItemType == CG::EItemType::EXP_ITEM)
			{
				if (Settings[ESP_LOOT_SHIELDUPGR].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue)
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::JETPACK_MODULE_HORIZONTAL)
			{
				if (Settings[ESP_LOOT_HJETPACK].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue && ItemQuality >= (Settings[ESP_LOOT_LEVEL].Value.iValue + 1))
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::JETPACK_MODULE_VERTICAL)
			{
				if (Settings[ESP_LOOT_VJETPACK].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue && ItemQuality >= (Settings[ESP_LOOT_LEVEL].Value.iValue + 1))
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::CARIRIDGE_BAG)
			{
				if (Settings[ESP_LOOT_HEALTH].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue)
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_LOOT_HEALTH].Value.v4Value);
			}

			if (ItemType == CG::EItemType::DEATHBOX)
			{
				if (Settings[ESP_LOOT_DEATHBOX].Value.bValue && ItemDistance < Settings[ESP_ITEMS_DISTANCE].Value.fValue)
					Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
			}

			if (ItemType == CG::EItemType::TREASUREBOX)
			{
				CG::ASolarTreasureBoxActor* TreausureBox = reinterpret_cast<CG::ASolarTreasureBoxActor*>(Item);
				if (Settings[ESP_TREASUREBOX].Value.bValue && ItemDistance < (Settings[ESP_ITEMS_DISTANCE].Value.fValue * 2))
				{
					if (TreausureBox->BOpened())
					{
						Draw::DrawString(std::string(PickupName).append(" [Opened] ").append("[").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_TREASUREBOX].Value.v4Value);
					}
					else
					{
						Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_TREASUREBOX].Value.v4Value);
					}
				}
			}

			if (ItemType == CG::EItemType::AIRDROPBOX)
			{
				CG::AAirDropTreasureBox* AirDropBox = reinterpret_cast<CG::AAirDropTreasureBox*>(Item);
				if (Settings[ESP_AIRDROP].Value.bValue && ItemDistance < (Settings[ESP_ITEMS_DISTANCE].Value.fValue * 2))
				{
					if (AirDropBox->BOpened())
					{
						Draw::DrawString(std::string(PickupName).append(" [Opened] ").append("[").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_AIRDROP].Value.v4Value);
					}
					else
					{
						Draw::DrawString(std::string(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, Settings[COLOR_AIRDROP].Value.v4Value);
					}
				}
			}
		}

		if (Actor->IsA(CG::ASolarVehiclePawn::StaticClass()))
		{
			CG::ASolarVehiclePawn* Vehicle = reinterpret_cast<CG::ASolarVehiclePawn*>(Actor);

			CG::FVector VehicleLocation = Vehicle->K2_GetActorLocation();

			PlayerController->ProjectWorldLocationToScreen(VehicleLocation, &VehiclePos, false);

			int VehicleDistance = LocalCharacter->GetDistanceTo(Vehicle) / 100;

			std::string VehicleName = Engine::GetVehicleName(Vehicle->Name.GetName());

			if (Settings[ESP_VEHICLE].Value.bValue)
			{
				ImVec4 HPColor = ImVec4();

				if (Vehicle->GetCurrentHealth() > 0)
					HPColor = ImVec4(.90f, .90f, .90f, 1.f);

				Draw::HorizontalHealthBar(VehiclePos.X - 60, VehiclePos.Y, 100, 10, (int)Vehicle->GetCurrentHealth(), (int)Vehicle->GetMaxHealth(), HPColor);
				Draw::DrawString(std::string(VehicleName).append(" [").append(std::to_string(VehicleDistance)).append(" M]"), VehiclePos.X, VehiclePos.Y + 10, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
			}
		}
	}
}

void XXX::Removal()
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

	if (Settings[NO_RECOIL].Value.bValue)
	{
		if (!PlayerController->Character)
			return;

		CG::ASolarPlayerWeapon* CachedCurrentWeapon = reinterpret_cast<CG::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		CG::USingleWeaponConfig* Config = CachedCurrentWeapon->Config;
		if (!Config)
			return;

		Config->MaxSpread = 0.0f;
		Config->HipFireBaseSpread = 0.0f;
		Config->ShoulderFireBaseSpread = 0.0f;
		Config->ADSBaseSpread = 0.0f;
		Config->VhADSBaseSpread = 0.0f;

		CG::UWeaponShootConfig* WeaponShootConfig = Config->WeaponShootConfig;
		if (!WeaponShootConfig)
			return;

		WeaponShootConfig->bEnableNewRecoil = false;
		WeaponShootConfig->bEnableNewSpread = false;

		CG::UWeaponRecoilComponent* RecoilComponent = CachedCurrentWeapon->RecoilComponent;
		if (!RecoilComponent)
			return;

		RecoilComponent->SetRecoilActive(false);
		RecoilComponent->SetRecoilVActive(false);
		RecoilComponent->SetRecoilRActive(false);
		RecoilComponent->SetRecoilHActive(false);
	}
	else
	{
		if (!PlayerController->Character)
			return;

		CG::ASolarPlayerWeapon* CachedCurrentWeapon = reinterpret_cast<CG::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		CG::USingleWeaponConfig* Config = CachedCurrentWeapon->Config;
		if (!Config)
			return;

		CG::UWeaponShootConfig* WeaponShootConfig = Config->WeaponShootConfig;
		if (!WeaponShootConfig)
			return;

		WeaponShootConfig->bEnableNewRecoil = true;
		WeaponShootConfig->bEnableNewSpread = true;
	}
}

void XXX::Aimbot()
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

	if (Settings[DRAW_FOV].Value.bValue)
	{
		ImGui::GetBackgroundDrawList()->AddCircle(ImVec2(ScreenWidth / 2, ScreenHeight / 2), Settings[AIM_FOV].Value.fValue * ((ScreenWidth / 2) / 90), ImGui::GetColorU32(ImVec4(1.f, 0.141f, 0.f, 1.f)));
	}

	if (!Settings[AIM_ENABLED].Value.bValue)
		return;

	CG::TArray<CG::AActor*> Actors = *(CG::TArray<CG::AActor*>*)((uintptr_t)World->PersistentLevel + 0x98);
	for (int i = 0; i < Actors.Count(); i++)
	{
		CG::AActor* Actor = Actors[i];

		if (!Actor)
			continue;

		if (Actor->IsA(CG::ASolarCharacter::StaticClass()))
		{
			CG::ASolarCharacter* Enemy = reinterpret_cast<CG::ASolarCharacter*>(Actor);

			if (Enemy == LocalCharacter)
				continue;

			if (Enemy->InSameTeamWithFirstPlayerController())
				continue;

			if (!PlayerController->LineOfSightTo(Enemy, { 0.f,0.f,0.f }, false))
				continue;

			float ClosestDistance = 1337;
			CG::ASolarCharacter* ClosestTarget = NULL;
			CG::FVector2D Position = CG::FVector2D();

			if (PlayerController->ProjectWorldLocationToScreen(Enemy->K2_GetActorLocation(), &Position, false))
			{
				float Multiplier = (ScreenWidth / 2) / 90;
				float xDiff = (ScreenWidth / 2) - Position.X;
				float yDiff = (ScreenHeight / 2) - Position.Y;
				float Hypotenuse = sqrtf((xDiff * xDiff) + (yDiff * yDiff));
				float Size = Settings[AIM_FOV].Value.fValue * Multiplier;
				//float Distance = Aimbot::GetCrossDistance(Position.X, Position.Y, ScreenWidth / 2, ScreenHeight / 2);

				if (Hypotenuse < Size && Hypotenuse < ClosestDistance)
				{
					/*float Radius = Settings[AIM_FOV].Value.fValue * Multiplier;

					if (Position.X <= ((ScreenWidth / 2) + Radius) &&
						Position.X >= ((ScreenWidth / 2) - Radius) &&
						Position.Y <= ((ScreenHeight / 2) + Radius) &&
						Position.Y >= ((ScreenHeight / 2) - Radius))
					{
						ClosestDistance = Distance;
						ClosestTarget = Enemy;
					}*/

					ClosestDistance = Hypotenuse;
					ClosestTarget = Enemy;
				}

				if (!ClosestTarget)
					continue;

				if (Settings[IGNORE_KNOCKED].Value.bValue && Enemy->IsDying())
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

				if (GetAsyncKeyState(Settings[AIM_KEY].Value.iValue) & 0x80000)
				{
					for (CG::FVector Hitbox : AimPos)
					{
						if (Hitbox.X != 0)
						{
							if (Settings[AIM_PREDICTION].Value.bValue)
							{
								CG::ASolarPlayerWeapon* CachedCurrentWeapon = LocalCharacter->CachedCurrentWeapon;
								if (!CachedCurrentWeapon)
									continue;

								CG::USingleWeaponConfig* Config = CachedCurrentWeapon->Config;
								if (!Config)
									continue;

								CG::UAmmoConfig* AmmoConfig = Config->PrimaryAmmo;
								if (!AmmoConfig)
									continue;

								float BulletSpeed = AmmoConfig->InitSpeed / 100.f;
								float BulletGravity = AmmoConfig->ProjectileMaxGravity;
								float Distance = LocalLocation.Distance(Hitbox) / 100.f;

								CG::FVector Velocity = Enemy->RootComponent->ComponentVelocity;
								CG::FVector AimPrediction = Aimbot::AimbotPrediction(BulletSpeed, BulletGravity, Distance, Hitbox, Velocity);

								Hitbox.X = AimPrediction.X;
								Hitbox.Y = AimPrediction.Y;
								Hitbox.Z = AimPrediction.Z;

								//CG::FVector TargetBone = Aimbot::CalcFuturePos(PlayerController, Hitbox);
								//Aimbot::AimAtPosV2(ScreenWidth, ScreenHeight, TargetBone.X, TargetBone.Y, Settings[AIM_SMOOTH].Value.fValue, Settings[HUMAN_SPEED].Value.fValue, Settings[HUMAN_SCALE].Value.fValue);
								CG::FRotator TargetRotation = Aimbot::CalcAngle(LocalLocation, Hitbox);
								TargetRotation.Roll = 0;
								TargetRotation.Clamp();
								Aimbot::SetRotation(PlayerController->PlayerCameraManager, PlayerController, TargetRotation, false, Settings[AIM_SMOOTH].Value.fValue);
							}
							else
							{
								CG::FRotator TargetRotation = Aimbot::CalcAngle(LocalLocation, Hitbox);
								TargetRotation.Roll = 0;
								TargetRotation.Clamp();
								Aimbot::SetRotation(PlayerController->PlayerCameraManager, PlayerController, TargetRotation, false, Settings[AIM_SMOOTH].Value.fValue);
							}
						}
					}
				}
			}
		}
	}
}

void XXX::Radar()
{
	if (!Settings[RADAR_ENABLED].Value.bValue)
		return;

	ImVec2 size = ImGui::GetContentRegionAvail();

	float RadarCenterX = ScreenWidth / 2.0f;
	float RadarCenterY = ScreenHeight - size.y / 4.0f;

	float radius = 80.0f;
	int segments = 64; // Increase the number of segments for a smoother circle

	// Draw a static circle with a slightly transparent background
	ImGui::GetBackgroundDrawList()->AddCircleFilled(ImVec2(RadarCenterX, RadarCenterY), radius, IM_COL32(0, 0, 0, 190), segments);

	// Draw a vertical line in the middle
	ImGui::GetBackgroundDrawList()->AddLine(ImVec2(RadarCenterX, RadarCenterY) + ImVec2(0, -radius), ImVec2(RadarCenterX, RadarCenterY) + ImVec2(0, radius), IM_COL32(150, 150, 150, 200), 1.0f);

	// Draw a horizontal line in the middle
	ImGui::GetBackgroundDrawList()->AddLine(ImVec2(RadarCenterX, RadarCenterY) + ImVec2(-radius, 0), ImVec2(RadarCenterX, RadarCenterY) + ImVec2(radius, 0), IM_COL32(150, 150, 150, 200), 1.0f);

	// Draw projection lines on the upper-right and upper-left
	ImVec2 upperRight = ImVec2(RadarCenterX + radius * cosf(-IM_PI / 4.0f), RadarCenterY + radius * sinf(-IM_PI / 4.0f));
	ImVec2 upperLeft = ImVec2(RadarCenterX + radius * cosf(-3.0f * IM_PI / 4.0f), RadarCenterY + radius * sinf(-3.0f * IM_PI / 4.0f));

	ImGui::GetBackgroundDrawList()->AddLine(ImVec2(RadarCenterX, RadarCenterY), upperRight, IM_COL32(150, 150, 150, 200), 1.0f);
	ImGui::GetBackgroundDrawList()->AddLine(ImVec2(RadarCenterX, RadarCenterY), upperLeft, IM_COL32(150, 150, 150, 200), 1.0f);

	CG::UWorld* World = *CG::UWorld::GWorld;
	if (!World)
		return;

	CG::ULocalPlayer* LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
	if (!LocalPlayer)
		return;

	CG::APlayerController* PlayerController = LocalPlayer->PlayerController;
	if (!PlayerController)
		return;

	CG::APlayerCameraManager* CameraManager = PlayerController->PlayerCameraManager;
	if (!CameraManager)
		return;

	CG::TArray<CG::AActor*> Actors = *(CG::TArray<CG::AActor*>*)((uintptr_t)World->PersistentLevel + 0x98);
	for (int i = 0; i < Actors.Count(); i++)
	{
		CG::AActor* Actor = Actors[i];

		if (!Actor)
			continue;

		if (Actor->IsA(CG::ASolarCharacter::StaticClass()))
		{
			CG::ASolarCharacter* Enemy = reinterpret_cast<CG::ASolarCharacter*>(Actor);

			if (Enemy->InSameTeamWithFirstPlayerController())
				continue;

			float Distance = CameraManager->GetCameraLocation().Distance(Enemy->K2_GetActorLocation()) / 100.f;

			CG::FVector2D Position = Math::WorldToRadar(CameraManager->GetCameraRotation(), CameraManager->GetCameraLocation(), Enemy->K2_GetActorLocation(), CG::FVector2D((int)RadarCenterX - 65, (int)RadarCenterY - 85), CG::FVector2D(radius * 2, radius * 2));

			if (Distance >= 0.f && Distance < Settings[RADAR_DISTANCE].Value.fValue)
			{
				Draw::DrawCircleFilled(Position.X, Position.Y, 4, ImVec4(1.0f, 0.874f, 0.0f, 1.0f));
			}
		}
	}
}