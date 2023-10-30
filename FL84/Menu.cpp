#include "pch.h"

typedef enum
{
	AIMBOT, VISUALS, MISCS, CONFIGS
}eMainTabs;

namespace ZyanoCheats
{
	MainGUI _mainGUI;

	int MainTab = 0;

	void MainGUI::Hotkey(int* k, const ImVec2& size_arg)
	{
		static bool waitingforkey = false;
		if (waitingforkey == false)
		{
			if (ImGui::Button(KeyNames[*(int*)k], size_arg))
				waitingforkey = true;
		}

		else if (waitingforkey == true)
		{
			ImGui::Button("...", size_arg);

			for (auto& Key : KeyCodes)
			{
				if (GetAsyncKeyState(Key))
				{
					*(int*)k = Key;
					waitingforkey = false;
				}
			}
		}
	}

	void MainGUI::HelpMarker(const char* desc)
	{
		ImGui::TextDisabled("(?)");
		if (ImGui::BeginItemTooltip())
		{
			ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
			ImGui::TextUnformatted(desc);
			ImGui::PopTextWrapPos();
			ImGui::EndTooltip();
		}
	}

	void MainGUI::StyleMenu()
	{
		ImGuiStyle* style = &ImGui::GetStyle();
		style->Alpha = 1.f;
		style->WindowTitleAlign = ImVec2(0.5, 0.5);
		style->WindowRounding = 7.f;
		style->WindowPadding = ImVec2(10, 10);
		style->FramePadding = ImVec2(3, 3);
		style->FrameRounding = 5.f;
		style->ItemInnerSpacing = ImVec2(4, 4);
		style->ItemSpacing = ImVec2(8, 4);
		style->ScrollbarSize = 5.f;
		style->ScrollbarRounding = 12.f;
		style->GrabRounding = 5.f;
		style->GrabMinSize = 7.f;
		style->CurveTessellationTol = 1.f;
		style->AntiAliasedLines = true;

		ImVec4* colors = ImGui::GetStyle().Colors;

		colors[ImGuiCol_TitleBg] = ImColor(0, 0, 0, 235);
		colors[ImGuiCol_TitleBgActive] = ImColor(0, 0, 0, 235);

		colors[ImGuiCol_WindowBg] = ImVec4(0, 0, 0, 0.921f);

		colors[ImGuiCol_Border] = ImVec4{ 0.20f ,0.20f ,0.20f ,0.20f };
		colors[ImGuiCol_BorderShadow] = ImVec4{ 0.10f , 0.10f , 0.10f , 0.10f };

		colors[ImGuiCol_Text] = ImVec4(0.80f, 0.80f, 0.83f, 1.00f);
		colors[ImGuiCol_TextDisabled] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);

		colors[ImGuiCol_Button] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
		colors[ImGuiCol_ButtonActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
		colors[ImGuiCol_ButtonHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);

		colors[ImGuiCol_FrameBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
		colors[ImGuiCol_FrameBgHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
		colors[ImGuiCol_FrameBgActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);

		colors[ImGuiCol_CheckMark] = ImColor(255, 242, 0, 255);
		colors[ImGuiCol_SliderGrab] = ImColor(255, 242, 0, 255);
		colors[ImGuiCol_SliderGrabActive] = ImColor(255, 242, 0, 255);

		colors[ImGuiCol_Tab] = ImColor(0, 0, 0, 255);
		colors[ImGuiCol_TabHovered] = ImColor(55, 55, 55, 255);
		colors[ImGuiCol_TabActive] = ImColor(55, 55, 55, 255);

		colors[ImGuiCol_Header] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
		colors[ImGuiCol_HeaderActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
		colors[ImGuiCol_HeaderHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);

		colors[ImGuiCol_ScrollbarGrab] = ImColor(255, 242, 0, 255);
		colors[ImGuiCol_ScrollbarGrabActive] = ImColor(255, 242, 0, 255);
	}

	void MainGUI::InitGUI()
	{
		if (!hWindow || !pDevice || !pDeviceContext)
			return;

		oWindowProcess = (tWindowProcess)SetWindowLongPtr(hWindow, GWLP_WNDPROC, (LONG_PTR)_thunkWindowProcess.GetThunk());

		ImGui::CreateContext();
		auto& io = ImGui::GetIO(); (void)io;

		Menu.szIniFileName = acut::GetExeDirectory() + DEFAULT_INI;
		Menu.szLogFileName = acut::GetExeDirectory() + DEFAULT_LOG;

		io.LogFilename = Menu.szIniFileName.c_str();
		io.IniFilename = Menu.szLogFileName.c_str();

		io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
		io.Fonts->AddFontFromMemoryTTF(RudaFont, sizeof(RudaFont), 17.0f);

		static const ImWchar Ranges[] =
		{
			0x0020, 0x00FF, // Basic Latin + Latin Supplement
			0x0400, 0x052F, // Cyrillic + Cyrillic Supplement
			0x2DE0, 0x2DFF, // Cyrillic Extended-A
			0xA640, 0xA69F, // Cyrillic Extended-B
			0xE000, 0xE226, // icons
			0,
		};

		// Load Fonts
		ImFontConfig Font_Config;
		Font_Config.PixelSnapH = false;
		Font_Config.OversampleH = 5;
		Font_Config.OversampleV = 5;
		Font_Config.RasterizerMultiply = 1.2f;
		Font_Config.GlyphRanges = Ranges;

		io.Fonts->AddFontFromMemoryTTF(FASolid, sizeof(FASolid), 15.0f, &Font_Config, Ranges);
		Elements::RudaFont = io.Fonts->AddFontFromMemoryTTF(RudaFont, sizeof(RudaFont), 15.0f, &Font_Config, Ranges);
		Elements::Weapon_Icon = io.Fonts->AddFontFromMemoryCompressedTTF(WeaponsCompressedData, sizeof(WeaponsCompressedData), 30);
		Elements::Tab_Icon = io.Fonts->AddFontFromMemoryTTF(ClarityFont, sizeof(ClarityFont), 15.0f, &Font_Config, Ranges);

		StyleMenu();
	
		ImGui_ImplWin32_Init(hWindow);
		ImGui_ImplDX11_Init(pDevice, pDeviceContext);
	}

	void MainGUI::Render()
	{
		ImGui::SetNextWindowSize(ImVec2(820, 570));
		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255 / 255.f, 242 / 255.f, 0, 1.f));
		ImGui::Begin(xorstr_("Zyano Private"), &Menu.bShowWindow, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
		ImGui::PopStyleColor();
		{
			ImGui::Spacing();
			ImGui::BeginGroup();
			{
				if (Elements::Tab("B", "Aimbot", MainTab == AIMBOT)) { MainTab = AIMBOT; }
				ImGui::SameLine();
				if (Elements::Tab("D", "Visuals", MainTab == VISUALS)) { MainTab = VISUALS; }
				ImGui::SameLine();
				if (Elements::Tab("E", "Miscs", MainTab == MISCS)) { MainTab = MISCS; }
				ImGui::SameLine();
				if (Elements::Tab("H", "Configs", MainTab == CONFIGS)) { MainTab = CONFIGS; }
			}
			ImGui::EndGroup();

			switch (MainTab)
			{
			case AIMBOT:
				ImGui::BeginChild("Aimbot", ImVec2(0, 0));
				{
					ImGui::Spacing();
					ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gAimEnabled.szLabel, &_profiler.gAimEnabled.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine();
					HelpMarker(xorstr_("F1 - Enable/Disable Aimbot"));

					ImGui::Spacing();
					ImGui::Spacing();

					if (!_profiler.gAimEnabled.Custom.bValue)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						if (ImGui::Checkbox(_profiler.gDrawFOV.szLabel, &_profiler.gDrawFOV.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 225.0f);

						if (ImGui::Checkbox(_profiler.gIgnoreKnocked.szLabel, &_profiler.gIgnoreKnocked.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 450.0f);

						if (ImGui::Checkbox(_profiler.gVisibleCheck.szLabel, &_profiler.gVisibleCheck.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gAimPrediction.szLabel, &_profiler.gAimPrediction.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 225.0f);

						if (ImGui::Checkbox(_profiler.gIgnoreStealth.szLabel, &_profiler.gIgnoreStealth.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 450.0f);

						if (ImGui::Checkbox(_profiler.gAimLine.szLabel, &_profiler.gAimLine.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						ImGui::Text(_profiler.gAimKey.szLabel);
						ImGui::SameLine(ImGui::GetCursorPosX() + 150.0f);
						Hotkey(&_profiler.gAimKey.Custom.iValue);

						ImGui::Spacing();

						ImGui::PushItemWidth(220);
						if (ImGui::Combo(_profiler.gAimType.szLabel, &_profiler.gAimType.Custom.iValue, _profiler.gAimType.szItems, _profiler.gAimType.MaxValue.iMax))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();

						ImGui::Spacing();

						ImGui::PushItemWidth(220);
						if (ImGui::Combo(_profiler.gAimMode.szLabel, &_profiler.gAimMode.Custom.iValue, _profiler.gAimMode.szItems, _profiler.gAimMode.MaxValue.iMax))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();

						ImGui::SameLine(ImGui::GetCursorPosX() + 400.0f);

						ImGui::PushItemWidth(220);
						if (ImGui::Combo(_profiler.gAimBone.szLabel, &_profiler.gAimBone.Custom.iValue, _profiler.gAimBone.szItems, _profiler.gAimBone.MaxValue.iMax))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();

						ImGui::Spacing();

						ImGui::PushItemWidth(220);
						if (ImGui::SliderFloat(_profiler.gAimFOV.szLabel, &_profiler.gAimFOV.Custom.flValue, _profiler.gAimFOV.MinValue.flMin, _profiler.gAimFOV.MaxValue.flMax, "%.f"))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();

						if (_profiler.gAimMode.Custom.iValue == 1)
						{
							ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
							ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
						}
						{
							ImGui::SameLine(ImGui::GetCursorPosX() + 400.0f);

							ImGui::PushItemWidth(220);
							if (ImGui::SliderFloat(_profiler.gHumanSpeed.szLabel, &_profiler.gHumanSpeed.Custom.flValue, _profiler.gHumanSpeed.MinValue.flMin, _profiler.gHumanSpeed.MaxValue.flMax, "%.f"))
							{
								Menu.bWriteLog = true;
							}
							ImGui::PopItemWidth();

							ImGui::Spacing();

							ImGui::PushItemWidth(220);
							if (ImGui::SliderFloat(_profiler.gAimSmooth.szLabel, &_profiler.gAimSmooth.Custom.flValue, _profiler.gAimSmooth.MinValue.flMin, _profiler.gAimSmooth.MaxValue.flMax, "%.f"))
							{
								Menu.bWriteLog = true;
							}
							ImGui::PopItemWidth();

							ImGui::SameLine(ImGui::GetCursorPosX() + 400.0f);

							ImGui::PushItemWidth(220);
							if (ImGui::SliderFloat(_profiler.gHumanScale.szLabel, &_profiler.gHumanScale.Custom.flValue, _profiler.gHumanScale.MinValue.flMin, _profiler.gHumanScale.MaxValue.flMax, "%.f"))
							{
								Menu.bWriteLog = true;
							}
							ImGui::PopItemWidth();
						}
						if (_profiler.gAimMode.Custom.iValue == 1)
						{
							ImGui::PopItemFlag();
							ImGui::PopStyleVar();
						}
					}
					if (!_profiler.gAimEnabled.Custom.bValue)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}
				}
				ImGui::EndChild();
				break;
			case VISUALS:
				ImGui::BeginChild("Players", ImVec2(400, 0));
				{
					ImGui::SeparatorText("Players");
					ImGui::Spacing();
					ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gPlayerEspEnabled.szLabel, &_profiler.gPlayerEspEnabled.Custom.bValue))
					{
						Menu.bWriteLog = true;
					}

					ImGui::Spacing();
					ImGui::Spacing();

					if (!_profiler.gPlayerEspEnabled.Custom.bValue)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						if (ImGui::Checkbox(_profiler.gEnemyEsp.szLabel, &_profiler.gEnemyEsp.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 135.0f);
						if (ImGui::ColorEdit3(_profiler.gColorEnemyVisible.szLabel, _profiler.gColorEnemyVisible.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						if (ImGui::ColorEdit3(_profiler.gColorEnemyStealth.szLabel, _profiler.gColorEnemyStealth.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gTeamEsp.szLabel, &_profiler.gTeamEsp.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						if (ImGui::ColorEdit3(_profiler.gColorTeammate.szLabel, _profiler.gColorTeammate.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gPlayerName.szLabel, &_profiler.gPlayerName.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gPlayerDirectionLine.szLabel, &_profiler.gPlayerDirectionLine.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gPlayerDistance.szLabel, &_profiler.gPlayerDistance.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gPlayerHealth.szLabel, &_profiler.gPlayerHealth.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gPlayerSkeleton.szLabel, &_profiler.gPlayerSkeleton.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gPlayerWeapon.szLabel, &_profiler.gPlayerWeapon.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gVehicle.szLabel, &_profiler.gVehicle.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						ImGui::PushItemWidth(220);
						if (ImGui::Combo(_profiler.gPlayerSnaplines.szLabel, &_profiler.gPlayerSnaplines.Custom.iValue, _profiler.gPlayerSnaplines.szItems, _profiler.gPlayerSnaplines.MaxValue.iMax))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();

						ImGui::Spacing();

						ImGui::PushItemWidth(220);
						if (ImGui::Combo(_profiler.gPlayerBoxes.szLabel, &_profiler.gPlayerBoxes.Custom.iValue, _profiler.gPlayerBoxes.szItems, _profiler.gPlayerBoxes.MaxValue.iMax))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();
					}
					if (!_profiler.gPlayerEspEnabled.Custom.bValue)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}
				}
				ImGui::EndChild();

				ImGui::SameLine();

				ImGui::BeginChild("Items", ImVec2(0, 0));
				{
					ImGui::SeparatorText("Items");
					ImGui::Spacing();
					ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gItemEspEnabled.szLabel, &_profiler.gItemEspEnabled.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine();
					HelpMarker("F2 - Enable/Disable");

					ImGui::Spacing();
					ImGui::Spacing();

					if (!_profiler.gItemEspEnabled.Custom.bValue)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						if (ImGui::Checkbox(_profiler.gWeaponItems.szLabel, &_profiler.gWeaponItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 220.0f);
						if (ImGui::ColorEdit3(_profiler.gColorWeaponItems.szLabel, _profiler.gColorWeaponItems.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gAmmoItems.szLabel, &_profiler.gAmmoItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 220.0f);
						if (ImGui::ColorEdit3(_profiler.gColorAmmoItems.szLabel, _profiler.gColorAmmoItems.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gAttachmentsItems.szLabel, &_profiler.gAttachmentsItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gShieldItems.szLabel, &_profiler.gShieldItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gShieldUpgrItems.szLabel, &_profiler.gShieldUpgrItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gHJetPackItems.szLabel, &_profiler.gHJetPackItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gVJetPackItems.szLabel, &_profiler.gVJetPackItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gDeathBox.szLabel, &_profiler.gDeathBox.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gHealthItems.szLabel, &_profiler.gHealthItems.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 220.0f);
						if (ImGui::ColorEdit3(_profiler.gColorHealthItems.szLabel, _profiler.gColorHealthItems.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gTreasureBox.szLabel, &_profiler.gTreasureBox.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 220.0f);
						if (ImGui::ColorEdit3(_profiler.gColorTreasureBox.szLabel, _profiler.gColorTreasureBox.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						if (ImGui::Checkbox(_profiler.gAirDrop.szLabel, &_profiler.gAirDrop.Custom.bValue))
						{
							Menu.bWriteLog = true;
						} ImGui::SameLine(ImGui::GetCursorPosX() + 220.0f);
						if (ImGui::ColorEdit3(_profiler.gColorAirDrop.szLabel, _profiler.gColorAirDrop.Custom.cValue, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs))
						{
							Menu.bWriteLog = true;
						} ImGui::Spacing();

						ImGui::PushItemWidth(220);
						if (ImGui::Combo(_profiler.gItemLevel.szLabel, &_profiler.gItemLevel.Custom.iValue, _profiler.gItemLevel.szItems, _profiler.gItemLevel.MaxValue.iMax))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();

						ImGui::Spacing();

						ImGui::PushItemWidth(220);
						if (ImGui::SliderFloat(_profiler.gItemDistance.szLabel, &_profiler.gItemDistance.Custom.flValue, _profiler.gItemDistance.MinValue.flMin, _profiler.gItemDistance.MaxValue.flMax, "%.f"))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();
					}
					if (!_profiler.gItemEspEnabled.Custom.bValue)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}
				}
				ImGui::EndChild();
				break;
			case MISCS:
				ImGui::BeginChild("Miscs", ImVec2(0, 240));
				{
					ImGui::SeparatorText("Miscs");
					ImGui::Spacing();
					ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gNoRecoil.szLabel, &_profiler.gNoRecoil.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine(ImGui::GetCursorPosX() + 200.0f);

					if (ImGui::Checkbox(_profiler.gVehicleNoRecoil.szLabel, &_profiler.gVehicleNoRecoil.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gFastReload.szLabel, &_profiler.gFastReload.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine(ImGui::GetCursorPosX() + 200.0f);

					if (ImGui::Checkbox(_profiler.gVehicleSilentAim.szLabel, &_profiler.gVehicleSilentAim.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gOffscreen.szLabel, &_profiler.gOffscreen.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gRadar.szLabel, &_profiler.gRadar.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::Spacing();

					ImGui::PushItemWidth(220);
					if (ImGui::SliderFloat(_profiler.gRadarDistance.szLabel, &_profiler.gRadarDistance.Custom.flValue, _profiler.gRadarDistance.MinValue.flMin, _profiler.gRadarDistance.MaxValue.flMax, "%.f"))
					{
						Menu.bWriteLog = true;
					}
					ImGui::PopItemWidth();
				}
				ImGui::EndChild();

				ImGui::BeginChild("Exploits", ImVec2(0, 0));
				{
					ImGui::SeparatorText("Exploits");
					ImGui::Spacing();
					ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gSpamLike.szLabel, &_profiler.gSpamLike.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine();
					HelpMarker("Key (-)/Key (+) - Like/Dislike");
					ImGui::SameLine(ImGui::GetCursorPosX() + 200.0f);

					if (!_profiler.gSpamLike.Custom.bValue)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						ImGui::PushItemWidth(130);
						ImGui::InputInt(_profiler.gLikeValue.szLabel, &_profiler.gLikeValue.Custom.iValue, 1, 100, ImGuiInputTextFlags_CharsDecimal);
						ImGui::PopItemWidth();
						ImGui::SameLine();
						HelpMarker("Max 10m Likes");

						ImGui::SameLine(ImGui::GetCursorPosX() + 460.0f);

						ImGui::PushItemWidth(130);
						ImGui::InputInt(_profiler.gDislikeValue.szLabel, &_profiler.gDislikeValue.Custom.iValue, 1, 100, ImGuiInputTextFlags_CharsDecimal);
						ImGui::PopItemWidth();
						ImGui::SameLine();
						HelpMarker("Max 10m Dislikes");

						ImGui::Spacing();
					}
					if (!_profiler.gSpamLike.Custom.bValue)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}

					if (ImGui::Checkbox(_profiler.gStopSpectator.szLabel, &_profiler.gStopSpectator.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine(ImGui::GetCursorPosX() + 200.0f);

					if (ImGui::Checkbox(_profiler.gFastSpectating.szLabel, &_profiler.gFastSpectating.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine();
					HelpMarker(xorstr_("Left Arrow/Right Arrow"));
					ImGui::SameLine(ImGui::GetCursorPosX() + 460.0f);

					if (ImGui::Checkbox(_profiler.gSuicide.szLabel, &_profiler.gSuicide.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine();
					HelpMarker(xorstr_("Press Delete"));
					ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gBulletPenetration.szLabel, &_profiler.gBulletPenetration.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine(ImGui::GetCursorPosX() + 200.0f);

					if (ImGui::Checkbox(_profiler.gShotgunDamage.szLabel, &_profiler.gShotgunDamage.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine(ImGui::GetCursorPosX() + 460.0f);

					if (ImGui::Checkbox(_profiler.gShotgunSilent.szLabel, &_profiler.gShotgunSilent.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gTest.szLabel, &_profiler.gTest.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::Spacing();

					if (ImGui::Checkbox(_profiler.gVehicleSpeed.szLabel, &_profiler.gVehicleSpeed.Custom.bValue))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine();
					HelpMarker("High Risk Ban");
					ImGui::Spacing();

					if (!_profiler.gVehicleSpeed.Custom.bValue)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						ImGui::PushItemWidth(220);
						if (ImGui::SliderFloat(_profiler.gVehicleSpeedMulti.szLabel, &_profiler.gVehicleSpeedMulti.Custom.flValue, _profiler.gVehicleSpeedMulti.MinValue.flMin, _profiler.gVehicleSpeedMulti.MaxValue.flMax, "%.1f"))
						{
							Menu.bWriteLog = true;
						}
						ImGui::PopItemWidth();
					}
					if (!_profiler.gVehicleSpeed.Custom.bValue)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}
				}
				ImGui::EndChild();
				break;
			case CONFIGS:
				ImGui::BeginChild("Configs", ImVec2(0, 0));
				{
					ImGui::Spacing();
					ImGui::Spacing();

					if (ImGui::Button(xorstr_("Set as Default"), ImVec2(155.0f, 35.0f)))
					{
						_profiler.SaveProfile("");
						Menu.bWriteLog = true;
					} ImGui::SameLine(ImGui::GetCursorPosX() + 200.0f);

					if ((Menu.bSaveButton = ImGui::Button(xorstr_("Save Profile"), ImVec2(155.0f, 35.0f))))
					{
						Menu.bWriteLog = true;
					} ImGui::SameLine(ImGui::GetCursorPosX() + 400.0f);
					LPCSTR szSavePath = Menu.SaveDialog.saveFileDialog(Menu.bSaveButton, Menu.SaveDialog.getLastDirectory(), NULL, xorstr_(".xml"), xorstr_("Save Profile"));

					if (strlen(szSavePath))
					{
						_profiler.SaveProfile(szSavePath);
						strcpy_s(Menu.szProfile, szSavePath);
					}

					if ((Menu.bLoadButton = ImGui::Button(xorstr_("Load Profile"), ImVec2(155.0f, 35.0f))))
					{
						Menu.bWriteLog = true;
					} LPCSTR szLoadPath = Menu.LoadDialog.chooseFileDialog(Menu.bLoadButton, Menu.LoadDialog.getLastDirectory(), xorstr_(".xml"), xorstr_("Load Profile"));

					if (strlen(szLoadPath))
					{
						_profiler.LoadProfile(szLoadPath);
						strcpy_s(Menu.szProfile, szLoadPath);
					}

					ImGui::Spacing();

					ImGui::PushItemWidth(ImGui::GetWindowContentRegionWidth());
					ImGui::InputText("##", Menu.szProfile, sizeof(Menu.szProfile), ImGuiInputTextFlags_ReadOnly);
					ImGui::PopItemWidth();
				}
				ImGui::EndChild();		
				break;
			}
		}
		ImGui::End();
	}

	bool MainGUI::GetKeyPress(int vkey, bool immediate)
	{
		if (VirtualKeys[vkey].bKey)
		{
			VirtualKeys[vkey].bUp = false;
			VirtualKeys[vkey].bDown = true;
		}
		else if (!VirtualKeys[vkey].bKey && VirtualKeys[vkey].bDown)
		{
			VirtualKeys[vkey].bUp = true;
			VirtualKeys[vkey].bDown = false;
		}
		else
		{
			VirtualKeys[vkey].bUp = false;
			VirtualKeys[vkey].bDown = false;
		}

		if (immediate)
			return VirtualKeys[vkey].bDown;
		else
			return VirtualKeys[vkey].bUp;
	}

	LRESULT CALLBACK MainGUI::WindowProcess(_In_ HWND hWnd, _In_ UINT uMsg, _In_ WPARAM wParam, _In_ LPARAM lParam)
	{
		switch (uMsg)
		{
		case WM_LBUTTONDOWN:
			VirtualKeys[VK_LBUTTON].bKey = true;
			break;

		case WM_LBUTTONUP:
			VirtualKeys[VK_LBUTTON].bKey = false;
			break;

		case WM_RBUTTONDOWN:
			VirtualKeys[VK_RBUTTON].bKey = true;
			break;

		case WM_RBUTTONUP:
			VirtualKeys[VK_RBUTTON].bKey = false;
			break;

		case WM_KEYDOWN:
			VirtualKeys[wParam].bKey = true;
			break;

		case WM_KEYUP:
			VirtualKeys[wParam].bKey = false;
			break;
		}

		if (GetKeyPress(VK_INSERT, false))
			Menu.bShowWindow = !Menu.bShowWindow;

		if (GetKeyPress(VK_HOME, false))
			_profiler.LoadProfile("");

		if (GetKeyPress(VK_END, false))
			_profiler.DisableAll();

		if (GetKeyPress(VK_F1, false))
			_profiler.gAimEnabled.Custom.bValue ^= 1;

		if (GetKeyPress(VK_F2, false))
			_profiler.gItemEspEnabled.Custom.bValue ^= 1;

		if (bInitialized && Menu.bShowWindow && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
			return TRUE;

		return spoof_call(CallWindowProc, oWindowProcess, hWnd, uMsg, wParam, lParam);
	}

	void WINAPI MainGUI::Present(_In_ IDXGISwapChain* SwapChain, _In_ UINT SyncInterval, _In_ UINT Flags)
	{
		if (!bInitialized)
		{
			SwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice);
			pDevice->GetImmediateContext(&pDeviceContext);
			DXGI_SWAP_CHAIN_DESC sd;
			SwapChain->GetDesc(&sd);

			hWindow = sd.OutputWindow;
			ID3D11Texture2D* Buffer;
			SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&Buffer);
			pDevice->CreateRenderTargetView(Buffer, NULL, &pRenderTarget);

			Buffer->Release();

			InitGUI();

			bInitialized = true;
		}

		ImGui::GetIO().MouseDrawCursor = Menu.bShowWindow;

		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		if (!_profiler.gIsAiming.Custom.bValue)
			Aimbot::ResetLock();

		ZXC.Unknown();
		ZXC.Removals();
		ZXC.Aimbot();
		ZXC.Radar();
		ZXC.Vehicle();
		ZXC.Misc();

		if (Menu.bShowWindow)
		{
			if (Menu.bWriteLog)
			{
				ImGui::LogToFile();
				Menu.bWriteLog = false;
			}

			Render();
		}

		ImGui::Render();
		pDeviceContext->OMSetRenderTargets(1, &pRenderTarget, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}

	HRESULT WINAPI MainGUI::ResizeBuffers(_In_ IDXGISwapChain* SwapChain, _In_ UINT BufferCount, _In_ UINT Width, _In_ UINT Height, _In_ DXGI_FORMAT NewFormat, _In_ UINT SwapChainFlags)
	{
		if (pRenderTarget)
		{
			pDeviceContext->OMSetRenderTargets(0, 0, 0);
			pRenderTarget->Release();
		}

		HRESULT hr = spoof_call(oResizeBuffers, SwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

		ID3D11Texture2D* Buffer;
		SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&Buffer);
		pDevice->CreateRenderTargetView(Buffer, NULL, &pRenderTarget);

		Buffer->Release();

		pDeviceContext->OMSetRenderTargets(1, &pRenderTarget, NULL);

		// Set up the viewport.
		D3D11_VIEWPORT vp;
		vp.Width = Width;
		vp.Height = Height;
		vp.MinDepth = 0.0f;
		vp.MaxDepth = 1.0f;
		vp.TopLeftX = 0;
		vp.TopLeftY = 0;
		pDeviceContext->RSSetViewports(1, &vp);

		return hr;
	}
}