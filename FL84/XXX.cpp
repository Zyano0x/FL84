#include "pch.h"

XXX ZXC;

//========================================================================================================

bool XXX::SanityCheck()
{
	SPOOF_FUNC;

	World = *CG::UWorld::GWorld;
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

	MathLibrary = reinterpret_cast<CG::UKismetMathLibrary*>(CG::UKismetMathLibrary::StaticClass());
	if (!MathLibrary)
		return false;

	GameplayStatics = reinterpret_cast<CG::UGameplayStatics*>(CG::UGameplayStatics::StaticClass());
	if (!GameplayStatics)
		return false;

	return true;
}

void XXX::Unknown()
{
	SPOOF_FUNC;

	if (!SanityCheck())
		return;

	PlayerController->GetViewportSize(&ScreenWidth, &ScreenHeight);

	CG::ASolarCharacter* LocalCharacter = static_cast<CG::ASolarCharacter*>(PlayerController->K2_GetPawn());
	if (!LocalCharacter)
		return;

	if (_profiler.gDrawFOV.Custom.bValue)
		ImGui::GetBackgroundDrawList()->AddCircle(ImVec2(ScreenWidth / 2, ScreenHeight / 2), _profiler.gAimFOV.Custom.flValue, ImGui::GetColorU32(ImVec4(1.f, 0.141f, 0.f, 1.f)));

	CG::TArray<CG::AActor*> Actors = *(CG::TArray<CG::AActor*>*)((uintptr_t)World->PersistentLevel + 0x98);
	for (int i = 0; i < Actors.Count(); i++)
	{
		CG::AActor* Actor = Actors[i];

		if (!Actor)
			continue;

		if (!Actor->RootComponent)
			continue;

		if (Actor->IsA(CG::ASolarCharacter::StaticClass()))
		{
			CG::ASolarCharacter* Enemy = static_cast<CG::ASolarCharacter*>(Actor);

			if (Enemy == LocalCharacter)
				continue;

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
			else ImVec4Copy(_profiler.gColorTeammate.Custom.cValue, ColorVisisble);

			if (!Enemy->K2_IsAlive())
				continue;

			//Head = Enemy->Mesh->GetBoneWorldPos(HEAD);
			//Root = Enemy->Mesh->GetBoneWorldPos(ROOT);
			//int32_t iHEAD = Enemy->Mesh->GetBoneIndex(CG::FName("head"));
			//int32_t iROOT = Enemy->Mesh->GetBoneIndex(CG::FName("Root"));
			Head = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(Enemy->Mesh->GetBoneIndex(CG::FName("head"))));
			Root = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(Enemy->Mesh->GetBoneIndex(CG::FName("Root"))));

			if (Math::W2S(Head, &HeadPos)
				&& Math::W2S(Root, &FootPos))
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

					CG::ESCMPlayerType PlayerType = static_cast<CG::ASCMPlayerState*>(Enemy->PlayerState)->PlayerType;

					if (PlayerType == CG::ESCMPlayerType::BotAI)
					{
						Draw::DrawString(ImGui::GetIO().FontDefault, xorstr_("BOT"), (Left + Right) / 2, Top - 17, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
					}
					else
					{
						//CG::FString PlayerName = Enemy->PlayerState->PlayerNamePrivate;
						CG::FString PlayerName = Enemy->PlayerState->GetPlayerName();

						if (PlayerName.IsValid())
						{
							Name = Engine::WString_UTF8(PlayerName.ToStringW());
							size_t HashSymbol = Name.find("#");

							if (HashSymbol != std::wstring::npos)
								Name.erase(HashSymbol);				
						}
					}

					Draw::DrawString(ImGui::GetIO().FontDefault, Name, (Left + Right) / 2, Top - 17, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}

				if (_profiler.gPlayerDistance.Custom.bValue && !_profiler.gPlayerWeapon.Custom.bValue)
				{
					int Distance = LocalCharacter->GetDistanceTo(Enemy) / 100;

					Draw::DrawString(ImGui::GetIO().FontDefault, std::string("[" + std::to_string(Distance) + " M]"), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(ImGui::GetIO().FontDefault, xorstr_("[In Vehicle]"), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}
				else if (!_profiler.gPlayerDistance.Custom.bValue && _profiler.gPlayerWeapon.Custom.bValue)
				{
					std::string Weapon = xorstr_("----");
					std::string AmmoClip = xorstr_("----");

					if (Enemy->CachedCurrentWeapon)
					{
						Weapon = Enemy->CachedCurrentWeapon->ItemData.Name.ToString();
						AmmoClip = std::to_string(Enemy->CachedCurrentWeapon->ClipRemainAmmoCount);
					}

					Draw::DrawString(ImGui::GetIO().FontDefault, Weapon.append(" | ").append(AmmoClip), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(ImGui::GetIO().FontDefault, xorstr_("[In Vehicle]"), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
				}
				else if (_profiler.gPlayerDistance.Custom.bValue && _profiler.gPlayerWeapon.Custom.bValue)
				{
					int Distance = LocalCharacter->GetDistanceTo(Enemy) / 100;

					std::string Weapon = xorstr_("----");
					std::string AmmoClip = xorstr_("----");

					if (Enemy->CachedCurrentWeapon)
					{
						Weapon = Enemy->CachedCurrentWeapon->ItemData.Name.ToString();
						AmmoClip = std::to_string(Enemy->CachedCurrentWeapon->ClipRemainAmmoCount);
					}

					Draw::DrawString(ImGui::GetIO().FontDefault, Weapon.append(" | ").append(AmmoClip), (Left + Right) / 2, Bottom + 5, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
					Draw::DrawString(ImGui::GetIO().FontDefault, std::string("[" + std::to_string(Distance) + " M]"), (Left + Right) / 2, Bottom + 20, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));

					if (Enemy->IsInVehicle())
						Draw::DrawString(ImGui::GetIO().FontDefault, xorstr_("[In Vehicle]"), (Left + Right) / 2, Bottom + 35, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
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
					std::vector<std::pair<const char*, const char*>> SkeletonConnections = {
						{"Neck_01", "head"}, // NECK -> HEAD

						{"spine_02", "Neck_01"},
						{"spine_01", "spine_02"},
						{"spine_03", "spine_01"}, // STOMACH -> CHEST
						{"pelvis", "spine_03"},

						{"clavicle_R", "spine_02"},
						{"upperarm_r", "clavicle_R"},
						{"lowerarm_r", "upperarm_r"}, // RIGHT ELBOW
						{"hand_r", "lowerarm_r"},

						{"clavicle_l", "spine_02"},
						{"upperarm_l", "clavicle_l"},
						{"lowerarm_l", "upperarm_l"}, // LEFT ELBOW
						{"hand_l", "lowerarm_l"},

						{"thigh_r", "pelvis"},
						{"calf_r", "thigh_r"},
						{"foot_r", "calf_r"},

						{"thigh_l", "pelvis"},
						{"calf_l", "thigh_l"},
						{"foot_l", "calf_l"},
					};

					CG::FVector BoneScreen, PrevBoneScreen;
					for (const std::pair<const char*, const char*>& Connection : SkeletonConnections)
					{
						auto BONE1 = Connection.first;
						auto BONE2 = Connection.second;

						//int32_t iBONE1 = Enemy->Mesh->GetBoneIndex(CG::FName(BONE1));
						//int32_t iBONE2 = Enemy->Mesh->GetBoneIndex(CG::FName(BONE2));
						CG::FVector BoneLoc1 = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(Enemy->Mesh->GetBoneIndex(CG::FName(BONE1))));
						CG::FVector BoneLoc2 = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(Enemy->Mesh->GetBoneIndex(CG::FName(BONE2))));

						if (Math::W2S(BoneLoc1, &BoneScreen)
							&& Math::W2S(BoneLoc2, &PrevBoneScreen))
						{
							Draw::DrawLine(BoneScreen.X, BoneScreen.Y, PrevBoneScreen.X, PrevBoneScreen.Y, 1.5f, ColorVisisble);
						}
					}
				}

				if (_profiler.gPlayerDirectionLine.Custom.bValue)
				{
					CG::FVector Start = Enemy->Mesh->GetSocketLocation(Enemy->Mesh->GetBoneName(Enemy->Mesh->GetBoneIndex(CG::FName("head"))));
					CG::FVector Angles = MathLibrary->STATIC_Conv_RotatorToVector(Enemy->K2_GetActorRotation());
					CG::FVector End = Angles * 250 + Start;
					CG::FVector ScreenStart, ScreenEnd;

					if (Math::W2S(Start, &ScreenStart)
						&& Math::W2S(End, &ScreenEnd))
					{
						Draw::DrawLine(ScreenStart.X, ScreenStart.Y, ScreenEnd.X, ScreenEnd.Y, 1.5f, ColorVisisble);
					}
				}

				if (_profiler.gPlayerBoxes.Custom.iValue && !Enemy->IsDying() && !Enemy->K2_IsSwimming())
				{
					switch (_profiler.gPlayerBoxes.Custom.iValue)
					{
					case 1:
						Draw::DrawBox(Left, Top, Right, Bottom, false, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.5f));
						break;
					case 2:
						Draw::DrawCornersBox(Left, Top, Right, Bottom, true, false, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.5f));
						break;
					case 3:
						Draw::DrawBox(Left, Top, Right, Bottom, true, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.5f));
						break;
					case 4:
						Draw::DrawCornersBox(Left, Top, Right, Bottom, true, true, ImVec4(ColorVisisble.x, ColorVisisble.y, ColorVisisble.z, 1.5f));
						break;
					}
				}

				if (_profiler.gPlayerSnaplines.Custom.iValue)
				{
					switch (_profiler.gPlayerSnaplines.Custom.iValue)
					{
					case 1:
						Draw::DrawLine(ScreenWidth / 2, 0, HeadPos.X, HeadPos.Y, 1.5f, ColorVisisble);
						break;
					case 2:
						Draw::DrawLine(ScreenWidth / 2, ScreenHeight, FootPos.X, FootPos.Y, 1.5f, ColorVisisble);
						break;
					case 3:
						Draw::DrawLine(ScreenWidth / 2, ScreenHeight / 2, FootPos.X, FootPos.Y, 1.5f, ColorVisisble);
						break;
					}
				}
			}
			else
			{
				if (!_profiler.gOffscreen.Custom.bValue)
					continue;

				CG::FVector2D EntityPos = Math::WorldToRadar(CameraManager->GetCameraRotation(), CameraManager->GetCameraLocation(), Enemy->K2_GetActorLocation(), CG::FVector2D(0, 0), CG::FVector2D(ScreenWidth, ScreenHeight));
				int RadarRange = _profiler.gAimFOV.Custom.flValue / 3;

				CG::FVector Angles = CG::FVector();
				CG::FVector Forward = CG::FVector((float)(ScreenWidth / 2) - EntityPos.X, (float)(ScreenHeight / 2) - EntityPos.Y, 0.f);

				Math::VectorAnglesRadar(Forward, Angles);

				const float Yaw = DEG2RAD(Angles.Y + 180.f);
				const float PointX = (ScreenWidth / 2) + (RadarRange / 2) * 8 * cosf(Yaw);
				const float PointY = (ScreenHeight / 2) + (RadarRange / 2) * 8 * sinf(Yaw);

				std::array<CG::FVector, 3> Points
				{
					CG::FVector(PointX - ((90) / 4 + 2.5f) / 2, PointY - ((50) / 4 + 2.5f) / 2, 0.f),
					CG::FVector(PointX + ((90) / 4 + 2.5f) / 4, PointY, 0.f),
					CG::FVector(PointX - ((90) / 4 + 2.5f) / 2, PointY + ((50) / 4 + 2.5f) / 2, 0.f)
				};

				Math::RotateTriangle(Points, Angles.Y + 180.f);
				Draw::DrawTriangle(Points.at(0).X, Points.at(0).Y, Points.at(1).X, Points.at(1).Y, Points.at(2).X, Points.at(2).Y, true, ColorVisisble, 2.5f);
			}
		}

		if (Actor->IsA(CG::ASolarItemActor::StaticClass()) || Actor->IsA(CG::ASolarGroundPreviewActor::StaticClass()))
		{
			if (!_profiler.gItemEspEnabled.Custom.bValue)
				continue;

			CG::ASolarItemActor* Item = static_cast<CG::ASolarItemActor*>(Actor);

			CG::FVector ItemLocation = Item->K2_GetActorLocation();

			GameplayStatics->STATIC_ProjectWorldToScreen(PlayerController, ItemLocation, &ItemPos, false);

			int ItemDistance = LocalCharacter->GetDistanceTo(Item) / 100.f;

			CG::EItemType ItemType = Item->ItemData.ItemType;

			int32_t ItemID = Item->ItemData.ItemID;

			int32_t ItemQuality = Item->GetQuality();

			std::string PickupName = Engine::WString_UTF8(Item->ItemData.Name.ToStringW());

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

			if (ItemType <= CG::EItemType::NONE)
				continue;

			if (ItemType == CG::EItemType::WEAPON)
			{
				std::string WeaponType = Engine::GetWeaponType(ItemID);

				if (_profiler.gWeaponItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(ImGui::GetIO().FontDefault, WeaponType.append(" ").append(PickupName).append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorWeaponItems.Custom.cValue);
			}

			if (ItemType == CG::EItemType::BULLET)
			{
				if (_profiler.gAmmoItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorAmmoItems.Custom.cValue);
			}

			if (ItemType == CG::EItemType::WEAPON_PARTS)
			{
				if (_profiler.gAttachmentsItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::SHIELD)
			{
				if (_profiler.gShieldItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::SHIELD_UPGRADE_MATERIAL || ItemType == CG::EItemType::EXP_ITEM)
			{
				if (_profiler.gShieldUpgrItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::JETPACK_MODULE_HORIZONTAL)
			{
				if (_profiler.gHJetPackItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::JETPACK_MODULE_VERTICAL)
			{
				if (_profiler.gVJetPackItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue && ItemQuality >= _profiler.gItemLevel.Custom.iValue + 1)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ItemColor);
			}

			if (ItemType == CG::EItemType::CARIRIDGE_BAG)
			{
				if (_profiler.gHealthItems.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorHealthItems.Custom.cValue);
			}

			if (ItemType == CG::EItemType::DEATHBOX)
			{
				if (_profiler.gDeathBox.Custom.bValue && ItemDistance < _profiler.gItemDistance.Custom.flValue)
					Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
			}

			if (ItemType == CG::EItemType::TREASUREBOX)
			{
				CG::ASolarTreasureBoxActor* TreausureBox = static_cast<CG::ASolarTreasureBoxActor*>(Item);
				if (_profiler.gTreasureBox.Custom.bValue && ItemDistance < (_profiler.gItemDistance.Custom.flValue * 2))
				{
					if (TreausureBox->BOpened())
					{
						Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [Opened] ").append("[").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorTreasureBox.Custom.cValue);
					}
					else
					{
						Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorTreasureBox.Custom.cValue);
					}
				}
			}

			if (ItemType == CG::EItemType::AIRDROPBOX)
			{
				CG::AAirDropTreasureBox* AirDropBox = static_cast<CG::AAirDropTreasureBox*>(Item);
				if (_profiler.gAirDrop.Custom.bValue && ItemDistance < (_profiler.gItemDistance.Custom.flValue * 2))
				{
					if (AirDropBox->BOpened())
					{
						Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [Opened] ").append("[").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorAirDrop.Custom.cValue);
					}
					else
					{
						Draw::DrawString(ImGui::GetIO().FontDefault, PickupName.append(" [").append(std::to_string(ItemDistance)).append(" M]"), ItemPos.X, ItemPos.Y, 15.f, true, _profiler.gColorAirDrop.Custom.cValue);
					}
				}
			}
		}

		if (Actor->IsA(CG::ASolarVehiclePawn::StaticClass()))
		{
			if (!_profiler.gVehicle.Custom.bValue)
				continue;

			CG::ASolarVehiclePawn* Vehicle = static_cast<CG::ASolarVehiclePawn*>(Actor);

			CG::FVector VehicleLocation = Vehicle->K2_GetActorLocation();

			GameplayStatics->STATIC_ProjectWorldToScreen(PlayerController, VehicleLocation, &VehiclePos, false);

			int VehicleDistance = LocalCharacter->GetDistanceTo(Vehicle) / 100;

			std::string VehicleName = Engine::GetVehicleName(Vehicle->VehicleID);

			ImVec4 HPColor = ImVec4();

			if (Vehicle->GetCurrentHealth() > 0)
				HPColor = ImVec4(.90f, .90f, .90f, 1.f);

			Draw::HorizontalHealthBar(VehiclePos.X - 55, VehiclePos.Y, 100, 10, (int)Vehicle->GetCurrentHealth(), (int)Vehicle->GetMaxHealth(), HPColor);
			Draw::DrawString(ImGui::GetIO().FontDefault, VehicleName.append(" [").append(std::to_string(VehicleDistance)).append(" M]"), VehiclePos.X, VehiclePos.Y + 10, 15.f, true, ImVec4(1.f, 1.f, 1.f, 1.f));
		}
	}
}

void XXX::Removals()
{
	SPOOF_FUNC;

	if (!SanityCheck())
		return;

	/*if (_profiler.gTest.Custom.bValue)
	{
		if (!PlayerController->Character)
			return;

		HMODULE hModule = LI_FN(GetModuleHandleW)(xorstr_(L"SolarlandClient-Win64-Shipping.exe"));

		CG::ASolarPlayerWeapon* CachedCurrentWeapon = static_cast<CG::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		uint64_t* VTable = *(uint64_t**)(CachedCurrentWeapon + 0x0);

		uint64_t Address = VTable[268] - (uint64_t)hModule;

		printf("0x%llX\n", Address);
	}*/

	if (_profiler.gFastReload.Custom.bValue)
	{
		if (!PlayerController->Character)
			return;

		CG::ASolarPlayerWeapon* CachedCurrentWeapon = static_cast<CG::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		CG::USingleWeaponConfig* Config = CachedCurrentWeapon->K2_GetCurrentConfig();
		if (!Config)
			return;

		CG::UAmmoConfig* AmmoConfig = Config->PrimaryAmmo;
		if (!AmmoConfig)
			return;

		AmmoConfig->BaseReloadTime = 1.65f;
	}

	if (_profiler.gNoRecoil.Custom.bValue)
	{
		if (!PlayerController->Character)
			return;

		CG::ASolarPlayerWeapon* CachedCurrentWeapon = static_cast<CG::ASolarCharacter*>(PlayerController->Character)->CachedCurrentWeapon;
		if (!CachedCurrentWeapon)
			return;

		CG::USingleWeaponConfig* Config = CachedCurrentWeapon->K2_GetCurrentConfig();
		if (!Config)
			return;

		Config->MaxSpread = 0.0f;
		Config->MinSpread = 0.0f;
		Config->HipFireBaseSpread = 0.0f;
		Config->ShoulderFireBaseSpread = 0.0f;
		Config->ADSBaseSpread = 0.0f;
		Config->VhADSBaseSpread = 0.0f;

		CG::UAmmoConfig* PrimaryAmmo = Config->PrimaryAmmo;
		if (!PrimaryAmmo)
			return;

		PrimaryAmmo->ADSSpreadCOP = 0.0f;
		PrimaryAmmo->BoltActionTime = 0.0f;
		PrimaryAmmo->FireIntervalRevertPreTime = 0.85f;
		PrimaryAmmo->FireIntervalReavertSpeed = 0.85f;

		CG::FAmmonRecoilScope FAmmonRecoilScopePrimary = PrimaryAmmo->ScopeRecoil;
		FAmmonRecoilScopePrimary.EnableCrossHairVibration = false;

		CG::UAmmoConfig* SecondaryAmmo = Config->SecondaryAmmo;
		if (!SecondaryAmmo)
			return;

		SecondaryAmmo->ADSSpreadCOP = 0.0f;
		SecondaryAmmo->BoltActionTime = 0.0f;
		SecondaryAmmo->FireIntervalRevertPreTime = 0.85f;
		SecondaryAmmo->FireIntervalReavertSpeed = 0.85f;

		CG::FAmmonRecoilScope FAmmonRecoilScopeSecondary = SecondaryAmmo->ScopeRecoil;
		FAmmonRecoilScopeSecondary.EnableCrossHairVibration = false;

		CG::UWeaponShootConfig* WeaponShootConfig = static_cast<CG::UWeaponHandheldConfig*>(Config)->WeaponShootConfig;
		if (!WeaponShootConfig)
			return;

		WeaponShootConfig->bEnableNewShootSpeed = false;
		WeaponShootConfig->bEnableNewRecoil = false;
		WeaponShootConfig->bEnableNewSpread = false;
		WeaponShootConfig->bEnableNewWeaponAnim = false;
		WeaponShootConfig->BaseSpread = 0.0f;

		CG::UWeaponRecoilComponent* RecoilComponent = CachedCurrentWeapon->GetRecoilComp();
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
	SPOOF_FUNC;

	if (!SanityCheck())
		return;

	CG::ASolarCharacter* LocalCharacter = static_cast<CG::ASolarCharacter*>(PlayerController->K2_GetPawn());
	if (!LocalCharacter)
		return;

	CG::ASolarPlayerController* SolarPlayerController = LocalCharacter->GetSolarPlayerController(true);
	if (!SolarPlayerController)
		return;

	CG::ASolarVehiclePawn* LocalVehicle = SolarPlayerController->BestInteractingVehicle;
	if (!LocalVehicle)
		return;

	if (_profiler.gVehicleSpeed.Custom.bValue)
	{
		LocalVehicle->VehicleAttributeSet->SpeedMultiplier.BaseValue = _profiler.gVehicleSpeedMulti.Custom.flValue;
		LocalVehicle->VehicleAttributeSet->SpeedMultiplier.CurrentValue = _profiler.gVehicleSpeedMulti.Custom.flValue;
	}

	if (_profiler.gVehicleNoRecoil.Custom.bValue)
	{
		CG::ASolarVehicleWeapon* VehicleWeapon = LocalVehicle->SeatSlots[0].SeatWeapon;
		if (!VehicleWeapon)
			return;

		CG::USingleWeaponConfig* Config = VehicleWeapon->K2_GetCurrentConfig();
		if (!Config)
			return;

		Config->MaxSpread = 0.0f;
		Config->MinSpread = 0.0f;
		Config->HipFireBaseSpread = 0.0f;
		Config->ShoulderFireBaseSpread = 0.0f;
		Config->ADSBaseSpread = 0.0f;
		Config->VhADSBaseSpread = 0.0f;

		CG::UWeaponRecoilComponent* RecoilComponent = VehicleWeapon->RecoilComponent;
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
	SPOOF_FUNC;

	if (!SanityCheck())
		return;

	bool bTargetLine = false;
	CG::FVector TargetLine = CG::FVector();
	std::vector<tTargetInfo> vTargetInfo;

	if (!_profiler.gAimEnabled.Custom.bValue)
		return;

	Aimbot::GetBoneMethod(vTargetInfo);

	if (!vTargetInfo.empty())
	{
		for (int i = 0; i < vTargetInfo.size(); i++)
		{
			CG::FVector TargetPos = CG::FVector();
			if (!Math::W2S(vTargetInfo.front().AimPosition, &TargetPos))
				continue;

			const float x = TargetPos.X - (ScreenWidth / 2);
			const float y = TargetPos.Y - (ScreenHeight / 2);
			float CenterDistance = sqrt(pow(y, 2) + pow(x, 2));

			if (CenterDistance < Aimbot::ClosestDistance && CenterDistance <= _profiler.gAimFOV.Custom.flValue)
			{
				Aimbot::ClosestDistance = CenterDistance;
				Aimbot::LockPosition = TargetPos; // Mouse Event
				Aimbot::TargetPosition = vTargetInfo.front().AimPosition; // Silent
				Aimbot::TargetRotation = Aimbot::CalcAngle(ZXC.CameraManager->GetCameraLocation(), vTargetInfo.front().AimPosition, ZXC.CameraManager->GetCameraRotation(), _profiler.gAimSmooth.Custom.flValue); // Memory
				bTargetLine = Math::W2S(Aimbot::AimPosition, &TargetLine);
			}
		}
	}

	if (_profiler.gAimLine.Custom.bValue)
		if (bTargetLine) Draw::DrawLine(ScreenWidth / 2, ScreenHeight / 2, TargetLine.X, TargetLine.Y, 1.f, ImVec4(1.f, 0.141f, 0.f, 1.5f));

	if (_profiler.gAimType.Custom.iValue == cProfiler::AIMTYPE_MEMORY) Aimbot::SetRotation(CameraManager, PlayerController, Aimbot::TargetRotation, false);
	else if (_profiler.gAimType.Custom.iValue == cProfiler::AIMTYPE_MOUSE_EVENT) Aimbot::LockOnTarget();
}

void XXX::Misc()
{
	SPOOF_FUNC;

	if (!SanityCheck())
		return;

	CG::ASolarCharacter* LocalCharacter = static_cast<CG::ASolarCharacter*>(PlayerController->K2_GetPawn());
	if (!LocalCharacter)
		return;

	if (_profiler.gSuicide.Custom.bValue)
	{
		if (_mainGUI.GetKeyPress(VK_DELETE, false)) LocalCharacter->Suicide();
	}

	if (_mainGUI.GetKeyPress(VK_F3, false))
	{
		if (!LocalCharacter)
			return;

		LocalCharacter->ServerSetJetPackModule(1140103, true);
		LocalCharacter->ServerSetJetPackModule(1110403, false);
		LocalCharacter->ServerInitSheildComp(1010616);
	}

	CG::ASolarSpectateInfo* LocalSpectateInfo = LocalCharacter->GetSpectateInfo();
	if (!LocalSpectateInfo)
		return;

	if (_profiler.gSpamLike.Custom.bValue)
	{
		if (_mainGUI.GetKeyPress(VK_OEM_PLUS, false)) LocalSpectateInfo->ServerChangeLikeValue(_profiler.gLikeValue.Custom.iValue, 2, CG::ESocialActionType::Like);

		if (_mainGUI.GetKeyPress(VK_OEM_MINUS, false)) LocalSpectateInfo->ServerChangeLikeValue(_profiler.gDislikeValue.Custom.iValue, -1, CG::ESocialActionType::Unlike);
	}

	if (_profiler.gFastSpectating.Custom.bValue)
	{
		if (_mainGUI.GetKeyPress(VK_LEFT, false)) LocalSpectateInfo->ServerSpectatePreviousPlayer();

		if (_mainGUI.GetKeyPress(VK_RIGHT, false)) LocalSpectateInfo->ServerSpectateNextPlayer();
	}

	if (_profiler.gSpectateMode.Custom.bValue)
	{	
		if (_mainGUI.GetKeyPress(VK_PRIOR, false)) LocalSpectateInfo->ServerBeginSpectateOtherPlayer();

		if (_mainGUI.GetKeyPress(VK_NEXT, false)) LocalSpectateInfo->ServerStopSpectateOtherPlayer();
	}

	if (_profiler.gStopSpectator.Custom.bValue)
	{
		CG::TArray<CG::ASolarPlayerState*> Spectators = LocalSpectateInfo->PlayersSpectatingMe;
		for (int i = 0; i < Spectators.Count(); i++)
		{
			CG::ASolarSpectateInfo* SpectateInfo = *(CG::ASolarSpectateInfo**)(Spectators[i] + 0x780);

			printf("0x%llX\n", SpectateInfo);

			if (!SpectateInfo)
				continue;

			SpectateInfo->ServerStopSpectateOtherPlayer();
		}
	}
}

void XXX::Radar()
{
	SPOOF_FUNC;

	if (!_profiler.gRadar.Custom.bValue)
		return;

	ImGui::SetNextWindowSize(ImVec2(170.0f, 170.0f), ImGuiCond_Appearing);
	ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.0f, 0.0f, 0.0f, 0.45f));
	ImGui::Begin("Radar", &_profiler.gRadar.Custom.bValue, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
	{
		RadarPos = ImGui::GetWindowPos();
		RadarSize = ImGui::GetWindowSize();

		ImDrawList* DrawList = ImGui::GetForegroundDrawList();
		if (DrawList != nullptr)
		{
			DrawList->AddLine(
				ImVec2(RadarPos.x + (RadarSize.x / 2), RadarPos.y),
				ImVec2(RadarPos.x + (RadarSize.x / 2), RadarPos.y + RadarSize.y), IM_COL32(255, 255, 255, 255), 1.0f);

			DrawList->AddLine(
				ImVec2(RadarPos.x, RadarPos.y + (RadarSize.y / 2)),
				ImVec2(RadarPos.x + RadarSize.x, RadarPos.y + (RadarSize.y / 2)), IM_COL32(255, 255, 255, 255), 1.0f);
		}
	}
	ImGui::PopStyleColor();
	ImGui::End();

	if (!SanityCheck())
		return;

	CG::ASolarCharacter* LocalCharacter = static_cast<CG::ASolarCharacter*>(PlayerController->K2_GetPawn());
	if (!LocalCharacter)
		return;

	CG::TArray<CG::AActor*> Actors = CG::TArray<CG::AActor*>();
	GameplayStatics->STATIC_GetAllActorsOfClass(World, CG::ASolarCharacter::StaticClass(), &Actors);
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

		float Distance = LocalCharacter->GetDistanceTo(Enemy) / 100.0f;

		CG::FVector2D RotatePoint = Math::WorldToRadar(CameraManager->GetCameraRotation(), CameraManager->GetCameraLocation(), Enemy->K2_GetActorLocation(), CG::FVector2D(RadarPos.x, RadarPos.y), CG::FVector2D(RadarSize.x, RadarSize.y));

		if (Distance >= 0.f && Distance < _profiler.gRadarDistance.Custom.flValue)
		{
			Draw::DrawCircleFilled(RotatePoint.X, RotatePoint.Y, 4, ImVec4(1.0f, 0.874f, 0.0f, 1.0f));
		}
	}
}

void XXX::BypassEAC()
{
	SPOOF_FUNC;

	CG::USolarEasyAntiCheatManager* EAC_ = reinterpret_cast<CG::USolarEasyAntiCheatManager*>(CG::USolarEasyAntiCheatManager::StaticClass());
	if (!EAC_)
		return;

	EAC_->EnableAntiCheat = false;
	EAC_->bEnableAntiCheatLauncherCheck = false;

	CG::UWorld* World = *CG::UWorld::GWorld;
	if (!World)
		return;

	CG::USolarGameInstanceBase* GameInstance = static_cast<CG::USolarGameInstanceBase*>(World->OwningGameInstance);
	if (!GameInstance)
		return;

	CG::USolarEasyAntiCheatManager* EAC__ = GameInstance->GetSolarEasyAntiCheatManager();
	if (!EAC__)
		return;

	EAC__->EnableAntiCheat = false;
	EAC__->bEnableAntiCheatLauncherCheck = false;
}