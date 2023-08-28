#include "pch.h"

Config_t Settings[CONFIGS_];

char SettingsFile[MAX_PATH];

char ConfigDirectory[MAX_PATH];

//=============================================================================================================================================

Config_t AddConfig(const std::string AppName, const std::string KeyName, const char* Default)
{
	Value_t val;

	val.szValue = Default;

	return Config_t(SETTING_STRING, AppName, KeyName, val.szValue, val);
}

Config_t AddConfig(const std::string AppName, const std::string KeyName, const bool bDefault)
{
	Value_t val;

	val.bValue = bDefault;

	return Config_t(SETTING_BOOL, AppName, KeyName, (val.bValue) ? "on" : "off", val);
}

Config_t AddConfig(const std::string AppName, const std::string KeyName, const ImVec2 v2Default)
{
	Value_t val;

	val.v2Value = v2Default;

	return Config_t(SETTING_VEC2, AppName, KeyName, 
		STREAM(std::fixed << std::setprecision(3) << val.v2Value.x << "," << std::fixed << std::setprecision(3) << val.v2Value.y), val);
}

Config_t AddConfig(const std::string AppName, const std::string KeyName, const ImVec4 v4Default)
{
	Value_t val;

	val.v4Value = v4Default;

	return Config_t(SETTING_VEC4, AppName, KeyName,
		STREAM(
			std::fixed << std::setprecision(3) << val.v4Value.x << " " <<
			std::fixed << std::setprecision(3) << val.v4Value.y << " " <<
			std::fixed << std::setprecision(3) << val.v4Value.z << " " <<
			std::fixed << std::setprecision(3) << val.v4Value.w), val);
}

Config_t AddConfig(const std::string AppName, const std::string KeyName, const int iDefault, const int iMin, const int iMax)
{
	Value_t val;

	val.iValue = iDefault;
	val.iMin = iMin;
	val.iMax = iMax;

	return Config_t(SETTING_INT, AppName, KeyName, std::to_string(val.iValue), val);
}

Config_t AddConfig(const std::string AppName, const std::string KeyName, const float fDefault, const float fMin, const float fMax)
{
	Value_t val;

	val.fValue = fDefault;
	val.fMin = fMin;
	val.fMax = fMax;

	return Config_t(SETTING_FLOAT, AppName, KeyName, STREAM(std::fixed << std::setprecision(3) << val.fValue), val);
}

//=============================================================================================================================================

void InitSettings()
{
	Settings[AIM_ENABLED] = AddConfig("Aimbot Settings", "Aimbot_Enabled", false);
	Settings[AIM_PREDICTION] = AddConfig("Aimbot Settings", "Aimbot_Prediction", true);
	Settings[AIM_MODE] = AddConfig("Aimbot Settings", "Aimbot_Mode", 0, 0, 1);
	Settings[AIM_FOV] = AddConfig("Aimbot Settings", "Aimbot_FOV", 150.0f, 10.0f, 250.0f);
	Settings[AIM_SMOOTH] = AddConfig("Aimbot Settings", "Aimbot_Smooth", 2.0f, 1.0f, 100.0f);
	Settings[AIM_KEY] = AddConfig("Aimbot Settings", "Aimbot_Key", 1, 0, 166);
	Settings[AIM_SELECT_BONE] = AddConfig("Aimbot Settings", "Aimbot_Select_Bone", 0, 0, 2);
	Settings[HUMAN_SPEED] = AddConfig("Aimbot Settings", "Aimbot_Human_Speed", 10.0f, 1.0f, 100.f);
	Settings[HUMAN_SCALE] = AddConfig("Aimbot Settings", "Aimbot_Human_Scale", 1.0f, 1.0f, 20.f);
	Settings[DRAW_FOV] = AddConfig("Aimbot Settings", "Aimbot_DrawFOV", false);
	Settings[NO_RECOIL] = AddConfig("Aimbot Settings", "Aimbot_NoRecoil", false);

	//=============================================================================================================================

	Settings[ESP_ENABLED] = AddConfig("Esp Settings", "Esp_Enabled", true);
	Settings[ESP_ENEMY] = AddConfig("Esp Settings", "Esp_Enemy", true);
	Settings[ESP_TEAM] = AddConfig("Esp Settings", "Esp_Team", false);
	Settings[ESP_NAME] = AddConfig("Esp Settings", "Esp_Name", true);
	Settings[ESP_DISTANCE] = AddConfig("Esp Settings", "Esp_Distance", true);
	Settings[ESP_HEALTH] = AddConfig("Esp Settings", "Esp_Health", false);
	Settings[ESP_SKELETON] = AddConfig("Esp Settings", "Esp_Skeleton", true);
	Settings[ESP_DIRECTIONLINE] = AddConfig("Esp Settings", "Esp_Direction_Line", false);
	Settings[ESP_WEAPON] = AddConfig("Esp Settings", "Esp_Weapon", false);
	Settings[ESP_SNAPLINES] = AddConfig("Esp Settings", "Esp_Snaplines", 2, 0, 2);
	Settings[ESP_BOX_TYPE] = AddConfig("Esp Settings", "Esp_Box_Style", 2, 0, 2);
	Settings[ESP_ITEMS_DISTANCE] = AddConfig("Esp Settings", "Esp_Items_Distance", 200.f, 1.0f, 300.0f);
	Settings[ESP_LOOT_ENABLED] = AddConfig("Esp Settings", "Esp_Loot_Enabled", false);
	Settings[ESP_LOOT_LEVEL] = AddConfig("Esp Settings", "Esp_Loot_Level", 1, 0, 5);
	Settings[ESP_LOOT_WEAPON] = AddConfig("Esp Settings", "Esp_Loot_Weapon", true);
	Settings[ESP_LOOT_SHIELD] = AddConfig("Esp Settings", "Esp_Loot_Shield", false);
	Settings[ESP_LOOT_SHIELDUPGR] = AddConfig("Esp Settings", "Esp_Loot_Shield_Upgrade", false);
	Settings[ESP_LOOT_AMMO] = AddConfig("Esp Settings", "Esp_Loot_Ammo", false);
	Settings[ESP_LOOT_ATTACHMENTS] = AddConfig("Esp Settings", "Esp_Loot_Attachments", true);
	Settings[ESP_LOOT_HJETPACK] = AddConfig("Esp Settings", "Esp_Loot_Horizontal_Jetpack", false);
	Settings[ESP_LOOT_VJETPACK] = AddConfig("Esp Settings", "Esp_Loot_Vertical_Jetpack", false);
	Settings[ESP_LOOT_HEALTH] = AddConfig("Esp Settings", "Esp_Loot_Health_Items", false);
	Settings[ESP_LOOT_DEATHBOX] = AddConfig("Esp Settings", "Esp_Loot_Death_Box", true);
	Settings[ESP_TREASUREBOX] = AddConfig("Esp Settings", "Esp_Treasure_Box", true);
	Settings[ESP_AIRDROP] = AddConfig("Esp Settings", "Esp_Airdrop_Box", true);
	Settings[ESP_VEHICLE] = AddConfig("Esp Settings", "Esp_Vehicle", false);

	//=============================================================================================================================

	Settings[COLOR_TEAM] = AddConfig("Color Settings", "Color_Team", ImVec4(0.0f, 0.909f, 0.988f, 1.0f));
	Settings[COLOR_ENEMY] = AddConfig("Color Settings", "Color_Enemy", ImVec4(1.0f, 0.949f, 0.0f, 1.0f));
	Settings[COLOR_ENEMY_VISIBLE] = AddConfig("Color Settings", "Color_Enemy_Visible", ImVec4(0.725f, 0.0f, 0.764f, 1.0f));
	Settings[COLOR_LOOT_WEAPON] = AddConfig("Color Settings", "Color_Loot_Weapon", ImVec4(0.0f, 0.764f, 1.0f, 1.0f));
	Settings[COLOR_LOOT_AMMO] = AddConfig("Color Settings", "Color_Loot_Ammo", ImVec4(0.474f, 0.709f, 0.709f, 1.0f));
	Settings[COLOR_LOOT_ATTACHMENTS] = AddConfig("Color Settings", "Color_Loot_Attachments", ImVec4(0.843f, 0.176f, 0.427f, 1.0f));
	Settings[COLOR_LOOT_HEALTH] = AddConfig("Color Settings", "Color_Loot_Health_Items", ImVec4(0.839f, 0.682f, 0.003f, 1.0f));
	Settings[COLOR_TREASUREBOX] = AddConfig("Color Settings", "Color_Treasure_Box", ImVec4(0.85f, 0.313f, 0.188f, 1.0f));
	Settings[COLOR_AIRDROP] = AddConfig("Color Settings", "Color_Airdrop_Box", ImVec4(0.258f, 0.960f, 0.784f, 1.0f));
}

bool LoadSettings()
{
	sprintf_s<MAX_PATH>(SettingsFile, "%s%s", ConfigDirectory, SETTINGS_FILE_NAME);

	FILE* Settings_File = fopen(SettingsFile, "r"); // "r" 	Opens a file for reading. The file must exist.
	if (!Settings_File)
	{
		// First time writing to file
		Settings_File = fopen(SettingsFile, "w+"); // "w+" 	Creates an empty file for both reading and writing.
		if (!Settings_File)
		{
			return false;
		}

		for (size_t i = 0; i < CONFIGS_; i++)
		{
			switch (Settings[i].EType)
			{
			case SETTING_BOOL:
				Settings[i].Default = (Settings[i].Value.bValue) ? "on" : "off";
				break;

			case SETTING_INT:
				LIMIT_VALUE(Settings[i].Value.iValue, Settings[i].Value.iMin, Settings[i].Value.iMax);
				Settings[i].Default = std::to_string(Settings[i].Value.iValue);
				break;

			case SETTING_FLOAT:
				LIMIT_VALUE(Settings[i].Value.fValue, Settings[i].Value.fMin, Settings[i].Value.fMax);
				Settings[i].Default = STREAM(std::fixed << std::setprecision(3) << Settings[i].Value.fValue);
				break;

			case SETTING_VEC4:
				Settings[i].Default = STREAM(
					std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.x << " " <<
					std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.y << " " <<
					std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.z << " " <<
					std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.w
				);
				break;

			case SETTING_VEC2:
				Settings[i].Default = STREAM(
					std::fixed << std::setprecision(3) << Settings[i].Value.v2Value.x << "," <<
					std::fixed << std::setprecision(3) << Settings[i].Value.v2Value.y
				);
				break;

			case SETTING_STRING:
				Settings[i].Default = Settings[i].Value.szValue;
			}

			WritePrivateProfileStringA(Settings[i].AppName.c_str(), Settings[i].KeyName.c_str(), Settings[i].Default.c_str(), SettingsFile);
		}

		fclose(Settings_File);

		return true;
	}

	// Loading 

	char* temp = new char[1024];
	if (temp == nullptr)
	{
		fclose(Settings_File);
		return false;
	}

	for (size_t i = 0; i < CONFIGS_; i++)
	{
		GetPrivateProfileStringA(Settings[i].AppName.c_str(),
			Settings[i].KeyName.c_str(),
			Settings[i].Default.c_str(),
			temp,
			1024,
			SettingsFile);

		switch (Settings[i].EType)
		{
		case SETTING_BOOL:
			Settings[i].Value.bValue = (_stricmp(temp, "on") == 0);
			break;

		case SETTING_INT:
			Settings[i].Value.iValue = atoi(temp);
			LIMIT_VALUE(Settings[i].Value.iValue, Settings[i].Value.iMin, Settings[i].Value.iMax);
			break;

		case SETTING_FLOAT:
			Settings[i].Value.fValue = static_cast<float>(atof(temp));
			LIMIT_VALUE(Settings[i].Value.fValue, Settings[i].Value.fMin, Settings[i].Value.fMax);
			break;

		case SETTING_VEC4:
			sscanf_s(temp, "%f %f %f %f",
				&Settings[i].Value.v4Value.x,
				&Settings[i].Value.v4Value.y,
				&Settings[i].Value.v4Value.z,
				&Settings[i].Value.v4Value.w);
			break;

		case SETTING_VEC2:
			sscanf_s(temp, "%f,%f",
				&Settings[i].Value.v2Value.x,
				&Settings[i].Value.v2Value.y);
			break;

		case SETTING_STRING:
			Settings[i].Value.szValue = temp;
		}
	}

	delete[] temp;
	fclose(Settings_File);
	return true;
}

bool SaveSettings()
{
	FILE* fp = fopen(SettingsFile, "a");

	if (!fp)
	{
		return false;
	}

	for (size_t i = 0; i < CONFIGS_; i++)
	{
		switch (Settings[i].EType)
		{
		case SETTING_BOOL:
			Settings[i].Default = (Settings[i].Value.bValue) ? "on" : "off";
			break;

		case SETTING_INT:
			LIMIT_VALUE(Settings[i].Value.iValue, Settings[i].Value.iMin, Settings[i].Value.iMax);
			Settings[i].Default = std::to_string(Settings[i].Value.iValue);
			break;

		case SETTING_FLOAT:
			LIMIT_VALUE(Settings[i].Value.fValue, Settings[i].Value.fMin, Settings[i].Value.fMax);
			Settings[i].Default = STREAM(std::fixed << std::setprecision(3) << Settings[i].Value.fValue);
			break;

		case SETTING_VEC4:
			Settings[i].Default = STREAM(
				std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.x << " " <<
				std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.y << " " <<
				std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.z << " " <<
				std::fixed << std::setprecision(3) << Settings[i].Value.v4Value.w
			);
			break;

		case SETTING_VEC2:
			Settings[i].Default = STREAM(
				std::fixed << std::setprecision(3) << Settings[i].Value.v2Value.x << "," <<
				std::fixed << std::setprecision(3) << Settings[i].Value.v2Value.y
			);
			break;

		case SETTING_STRING:
			Settings[i].Default = Settings[i].Value.szValue;
		}

		WritePrivateProfileStringA(Settings[i].AppName.c_str(), Settings[i].KeyName.c_str(), Settings[i].Default.c_str(), SettingsFile);
	}

	fclose(fp);

	return true;
}