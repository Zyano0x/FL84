#include "pch.h"

namespace Menu
{
	bool MenuOpen = false;

	void Hotkey(int* k, const ImVec2& size_arg)
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

	void HelpMarker(const char* desc)
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

	void StyleMenu()
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

	void InitGUI()
	{
		ImGui::CreateContext();
		auto& io = ImGui::GetIO(); (void)io;
		io.LogFilename = nullptr;
		io.IniFilename = nullptr;
		io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
		io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
		io.Fonts->AddFontFromMemoryTTF(RudaFont, sizeof(RudaFont), 17.0f);

		static const ImWchar Ranges[] = { 0xE005, 0xF8FF, 0 };

		// Load Fonts
		ImFontConfig Font_Config;
		Font_Config.MergeMode = true;
		Font_Config.PixelSnapH = true;
		Font_Config.OversampleH = 2.5;
		Font_Config.OversampleV = 2.5;
		Font_Config.GlyphMinAdvanceX = 17.0f;

		io.Fonts->AddFontFromMemoryTTF(FASolid, sizeof(FASolid), 15.0f, &Font_Config, Ranges);

		StyleMenu();

		ImGui_ImplWin32_Init(window);
		ImGui_ImplDX11_Init(pDevice, pContext);
	}

	void Render()
	{
		ImGui::SetNextWindowSize(ImVec2(450, 450));
		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255 / 255.f, 242 / 255.f, 0, 1.f));
		ImGui::Begin(xorstr_("Zyano Private"), &MenuOpen, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
		ImGui::PopStyleColor();
		{
			auto Draw = ImGui::GetWindowDrawList();
			auto Size = ImGui::GetWindowSize();
			auto Pos = ImGui::GetWindowPos();

			ImGui::Spacing();
			if (ImGui::CollapsingHeader(ICON_FA_BULLSEYE " Aimbot"))
			{
				ImGui::SameLine();
				HelpMarker("F1 - Enable/Disable Aimbot");
				ImGui::Spacing();
				ImGui::Spacing();
				ImGui::Checkbox(xorstr_(" Enabled"), &Settings[AIM_ENABLED].Value.bValue);
				ImGui::Spacing();
				ImGui::Spacing();

				if (!Settings[AIM_ENABLED].Value.bValue)
				{
					ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
					ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
				}
				{
					ImGui::Checkbox(xorstr_(" Draw FOV"), &Settings[DRAW_FOV].Value.bValue);
					ImGui::Spacing();
					ImGui::Checkbox(xorstr_(" Ignore Knocked"), &Settings[IGNORE_KNOCKED].Value.bValue);
					ImGui::Spacing();
					ImGui::Checkbox(xorstr_(" Ignore Stealth"), &Settings[IGNORE_STEALTH].Value.bValue);
					ImGui::Spacing();		
					ImGui::Checkbox(xorstr_(" No Recoil"), &Settings[NO_RECOIL].Value.bValue);
					ImGui::Spacing();
					ImGui::Checkbox(xorstr_(" Fast Reload"), &Settings[FAST_RELOAD].Value.bValue);
					ImGui::Spacing();

					ImGui::Text(xorstr_("Aim Key"));
					ImGui::SameLine(ImGui::GetCursorPosX() + 150.0f);
					Menu::Hotkey(&Settings[AIM_KEY].Value.iValue);

					ImGui::Spacing();
					static const char* AimMode[] = { " Aimbot FOV", " Silent Aim", " Aim + Silent"};
					ImGui::PushItemWidth(220);
					ImGui::Combo(xorstr_(" Aim Mode"), &Settings[AIM_MODE].Value.iValue, AimMode, IM_ARRAYSIZE(AimMode));
					ImGui::PopItemWidth();

					ImGui::Spacing();
					static const char* SelectedBone[] = { " HEAD", " NECK", " SPINE"," NEAREST BONE"};
					ImGui::PushItemWidth(220);
					ImGui::Combo(xorstr_(" Select Bone"), &Settings[AIM_SELECT_BONE].Value.iValue, SelectedBone, IM_ARRAYSIZE(SelectedBone));
					ImGui::PopItemWidth();

					ImGui::Spacing();
					ImGui::PushItemWidth(220);
					ImGui::SliderFloat(xorstr_(" Aimbot FOV"), &Settings[AIM_FOV].Value.fValue, 1, 150, "%.f");
					ImGui::PopItemWidth();

					if (Settings[AIM_MODE].Value.iValue == 1)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						ImGui::Spacing();
						ImGui::PushItemWidth(220);
						ImGui::SliderFloat(xorstr_(" Smooth"), &Settings[AIM_SMOOTH].Value.fValue, 1, 10, "%.f");
						ImGui::PopItemWidth();

						ImGui::Spacing();
						ImGui::PushItemWidth(220);
						ImGui::SliderFloat(xorstr_(" Human Speed"), &Settings[HUMAN_SPEED].Value.fValue, 1, 100, "%.f");
						ImGui::PopItemWidth();

						ImGui::Spacing();
						ImGui::PushItemWidth(220);
						ImGui::SliderFloat(xorstr_(" Human Scale"), &Settings[HUMAN_SCALE].Value.fValue, 1, 20, "%.f");
						ImGui::PopItemWidth();
					}
					if (Settings[AIM_MODE].Value.iValue == 1)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}
				}
				if (!Settings[AIM_ENABLED].Value.bValue)
				{
					ImGui::PopItemFlag();
					ImGui::PopStyleVar();
				}

			}

			ImGui::Spacing();
			if (ImGui::CollapsingHeader(ICON_FA_EYE_SLASH " Visuals"))
			{
				ImGui::SameLine();
				HelpMarker("F2 - Enable/Disable Items ESP");
				ImGui::Spacing();
				if (ImGui::TreeNode(xorstr_("Players")))
				{
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Checkbox(xorstr_(" Enabled"), &Settings[ESP_ENABLED].Value.bValue);
					ImGui::Spacing();
					ImGui::Spacing();

					if (!Settings[ESP_ENABLED].Value.bValue)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						ImGui::Checkbox(xorstr_(" Enemy"), &Settings[ESP_ENEMY].Value.bValue);
						ImGui::SameLine(ImGui::GetCursorPosX() + 135.0f);
						ImGui::ColorEdit4(xorstr_(" Visible Color"), (float*)&Settings[COLOR_ENEMY_VISIBLE].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);
						ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						ImGui::ColorEdit4(xorstr_(" Stealth Color"), (float*)&Settings[COLOR_ENEMY_STEALTH].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Team"), &Settings[ESP_TEAM].Value.bValue);
						ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						ImGui::ColorEdit4(xorstr_(" Team Color"), (float*)&Settings[COLOR_TEAM].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Name"), &Settings[ESP_NAME].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Direction Line"), &Settings[ESP_DIRECTIONLINE].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Distance"), &Settings[ESP_DISTANCE].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Health"), &Settings[ESP_HEALTH].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Skeleton"), &Settings[ESP_SKELETON].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Weapon"), &Settings[ESP_WEAPON].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Vehicle"), &Settings[ESP_VEHICLE].Value.bValue);

						ImGui::Spacing();
						ImGui::PushItemWidth(220);
						ImGui::SliderFloat(xorstr_(" Radar Distance"), &Settings[RADAR_DISTANCE].Value.fValue, 1, 300, "%.f");
						ImGui::PopItemWidth();

						ImGui::Spacing();
						static const char* SnaplinesType[] = { " Off", " Top", " Base" };
						ImGui::PushItemWidth(220);
						ImGui::Combo(xorstr_(" Snaplines"), &Settings[ESP_SNAPLINES].Value.iValue, SnaplinesType, IM_ARRAYSIZE(SnaplinesType));
						ImGui::PopItemWidth();

						ImGui::Spacing();
						static const char* BoxType[] = { " Off", " Box", " Corners Box" };
						ImGui::PushItemWidth(220);
						ImGui::Combo(xorstr_(" Box Style"), &Settings[ESP_BOX_TYPE].Value.iValue, BoxType, IM_ARRAYSIZE(BoxType));
						ImGui::PopItemWidth();
					}
					if (!Settings[ESP_ENABLED].Value.bValue)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}

					ImGui::TreePop();
				}

				ImGui::Spacing();
				if (ImGui::TreeNode(xorstr_("Items")))
				{
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Checkbox(xorstr_(" Enabled"), &Settings[ESP_LOOT_ENABLED].Value.bValue);
					ImGui::Spacing();
					ImGui::Spacing();

					if (!Settings[ESP_LOOT_ENABLED].Value.bValue)
					{
						ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
						ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
					}
					{
						ImGui::Checkbox(xorstr_(" Weapon"), &Settings[ESP_LOOT_WEAPON].Value.bValue);
						ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						ImGui::ColorEdit4(xorstr_(" Weapon Color"), (float*)&Settings[COLOR_LOOT_WEAPON].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);

						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Bullet"), &Settings[ESP_LOOT_AMMO].Value.bValue);
						ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						ImGui::ColorEdit4(xorstr_(" Bullet Color"), (float*)&Settings[COLOR_LOOT_AMMO].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);

						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Weapon Parts"), &Settings[ESP_LOOT_ATTACHMENTS].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Shield"), &Settings[ESP_LOOT_SHIELD].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Shield Upgrade"), &Settings[ESP_LOOT_SHIELDUPGR].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Horizontal Jetpack"), &Settings[ESP_LOOT_HJETPACK].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Vertical Jetpack"), &Settings[ESP_LOOT_VJETPACK].Value.bValue);
						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Death Box"), &Settings[ESP_LOOT_DEATHBOX].Value.bValue);

						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Health Items"), &Settings[ESP_LOOT_HEALTH].Value.bValue);
						ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						ImGui::ColorEdit4(xorstr_(" Health Items"), (float*)&Settings[COLOR_LOOT_HEALTH].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);

						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" Treasure Box"), &Settings[ESP_TREASUREBOX].Value.bValue);
						ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						ImGui::ColorEdit4(xorstr_(" Treasure Box"), (float*)&Settings[COLOR_TREASUREBOX].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);

						ImGui::Spacing();
						ImGui::Checkbox(xorstr_(" AirDrop Box"), &Settings[ESP_AIRDROP].Value.bValue);
						ImGui::SameLine(ImGui::GetCursorPosX() + 260.0f);
						ImGui::ColorEdit4(xorstr_(" AirDrop Box"), (float*)&Settings[COLOR_AIRDROP].Value.v4Value, ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoInputs);

						ImGui::Spacing();
						static const char* LevelItems[] = { " Level 1", " Level 2", " Level 3", " Level 4" , " Level 5" , " Level 6" };
						ImGui::PushItemWidth(220);
						ImGui::Combo(xorstr_(" Level Items"), &Settings[ESP_LOOT_LEVEL].Value.iValue, LevelItems, IM_ARRAYSIZE(LevelItems));
						ImGui::PopItemWidth();

						ImGui::Spacing();
						ImGui::PushItemWidth(220);
						ImGui::SliderFloat(xorstr_(" Items Distance"), &Settings[ESP_ITEMS_DISTANCE].Value.fValue, 1.f, 300.f, "%.f");
						ImGui::PopItemWidth();
					}
					if (!Settings[ESP_LOOT_ENABLED].Value.bValue)
					{
						ImGui::PopItemFlag();
						ImGui::PopStyleVar();
					}

					ImGui::TreePop();
				}
			}

			ImGui::Spacing();
			if (ImGui::CollapsingHeader(ICON_FA_SLIDERS " Miscs"))
			{
				ImGui::Spacing();
				ImGui::Spacing();
				ImGui::Checkbox(xorstr_(" Radar"), &Settings[RADAR_ENABLED].Value.bValue);
				ImGui::Spacing();
				ImGui::Checkbox(xorstr_(" Offscreen"), &Settings[OFFSCREEN].Value.bValue);
			}

			ImGui::Spacing();
			if (ImGui::CollapsingHeader(ICON_FA_BOLT " Exploits"))
			{
				ImGui::Spacing();
				ImGui::Spacing();
				ImGui::Checkbox(xorstr_(" Spam Like/Dislike"), &Settings[SPAM_LIKE].Value.bValue);
				ImGui::SameLine();
				HelpMarker("Key (-)/Key (+) - Like/Dislike");
				ImGui::Spacing();
				ImGui::Checkbox(xorstr_(" Kick Spectator"), &Settings[STOP_SPECTATOR].Value.bValue);
				ImGui::Spacing();
				ImGui::Checkbox(xorstr_(" Shotgun High Damage"), &Settings[SHOTGUN_DAMAGE].Value.bValue);
				ImGui::Spacing();
				ImGui::Checkbox(xorstr_(" Test_"), &Settings[TEST_].Value.bValue);
			}

			ImGui::Spacing();
			if (ImGui::CollapsingHeader(ICON_FA_GEAR " Config"))
			{
				ImGui::Spacing();
				ImGui::Spacing();

				if (ImGui::Button(xorstr_("Load Config"), ImVec2(95, 35)))
				{
					if (LoadSettings())
					{
						ImGui::OpenPopup(xorstr_("Settings loaded"));
					}
					else
					{
						ImGui::OpenPopup(xorstr_("Loading failed"));
					}
				}

				ImGui::Spacing();

				if (ImGui::Button(xorstr_("Save Config"), ImVec2(95, 35)))
				{
					if (SaveSettings())
					{
						ImGui::OpenPopup(xorstr_("Settings saved"));
					}
					else
					{
						ImGui::OpenPopup(xorstr_("Saving failed"));
					}
				}

				if (ImGui::BeginPopupModal(xorstr_("Settings Loaded"), 0, ImGuiWindowFlags_NoResize))
				{
					ImGui::Text(xorstr_("The settings have been loaded"));
					ImGui::Separator();
					if (ImGui::Button(xorstr_("OK"), ImVec2(70, 0))) { ImGui::CloseCurrentPopup(); }
					ImGui::EndPopup();
				}

				if (ImGui::BeginPopupModal(xorstr_("Settings Saved"), 0, ImGuiWindowFlags_NoResize))
				{
					ImGui::Text(xorstr_("The settings have been saved"));
					ImGui::Separator();
					if (ImGui::Button(xorstr_("OK"), ImVec2(70, 0))) { ImGui::CloseCurrentPopup(); }
					ImGui::EndPopup();
				}

				if (ImGui::BeginPopupModal(xorstr_("Loading Failed"), 0, ImGuiWindowFlags_NoResize))
				{
					ImGui::Text(xorstr_("Failed to load the settings"));
					ImGui::Separator();
					if (ImGui::Button(xorstr_("OK"), ImVec2(70, 0))) { ImGui::CloseCurrentPopup(); }
					ImGui::EndPopup();
				}

				if (ImGui::BeginPopupModal(xorstr_("Saving Failed"), 0, ImGuiWindowFlags_NoResize))
				{
					ImGui::Text(xorstr_("Failed to save the settings"));
					ImGui::Separator();
					if (ImGui::Button(xorstr_("OK"), ImVec2(70, 0))) { ImGui::CloseCurrentPopup(); }
					ImGui::EndPopup();
				}
			}
		}
		ImGui::End();
	}
}