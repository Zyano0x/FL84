#pragma once

#define SETTINGS_FILE_NAME "Config.ini"

#define LIMIT_VALUE(Val,Min,Max) \
	if( (Val) > (Max) ) (Val) = (Max); \
	else if( (Val) < (Min) ) (Val) = (Min);

#define STREAM(s) (((std::stringstream&)(std::stringstream() << s)).str())


typedef enum
{
	SETTING_BOOL,
	SETTING_INT,
	SETTING_FLOAT,
	SETTING_VEC4,
	SETTING_STRING,
	SETTING_VEC2,
	SETTING_NONE
} SettingType_t;

typedef enum
{
	// Aimbot ===============================================================================================

	AIM_ENABLED,
	AIM_MODE,
	AIM_FOV,
	AIM_SMOOTH,
	AIM_PREDICTION,
	AIM_KEY,
	AIM_SELECT_BONE,
	NO_RECOIL,
	DRAW_FOV,
	HUMAN_SPEED,
	HUMAN_SCALE,

	// ESP =======================================================================================================

	ESP_ENABLED,
	ESP_ENEMY,
	ESP_TEAM,

	ESP_DIRECTIONLINE,
	ESP_NAME,
	ESP_DISTANCE,
	ESP_SNAPLINES,
	ESP_HEALTH,
	ESP_WEAPON,
	ESP_SKELETON,
	ESP_ITEMS_DISTANCE,
	ESP_BOX_TYPE,

	ESP_LOOT_ENABLED,
	ESP_LOOT_LEVEL,
	ESP_LOOT_WEAPON,
	ESP_LOOT_SHIELD,
	ESP_LOOT_SHIELDUPGR,
	ESP_LOOT_AMMO,
	ESP_LOOT_ATTACHMENTS,
	ESP_LOOT_HJETPACK,
	ESP_LOOT_VJETPACK,
	ESP_LOOT_HEALTH,
	ESP_LOOT_DEATHBOX,

	ESP_VEHICLE,
	ESP_VEHICLE_NAME,
	ESP_VEHICLE_HP,

	ESP_INVENTORY_DETAILS,
	ESP_DEADBOX,
	ESP_AIRDROP,
	ESP_TREASUREBOX,

	RADAR_ENABLED,

	// Color =======================================================================================================

	COLOR_TEAM,
	COLOR_ENEMY,
	COLOR_ENEMY_VISIBLE,

	COLOR_LOOT_WEAPON,
	COLOR_LOOT_AMMO,
	COLOR_LOOT_ATTACHMENTS,
	COLOR_LOOT_HEALTH,
	COLOR_TREASUREBOX,

	COLOR_VEHICLE_NAME,
	COLOR_VEHICLE_BOX,
	COLOR_VEHICLE_DIRECTIONLINE,
	COLOR_VEHICLE_VELOCITY,

	COLOR_DEADBOX,
	COLOR_AIRDROP,

	COLOR_INVENTORYDETAILS,
	COLOR_BY_TEAM_ID,

	WATERMARK,

	CONFIGS_,

}Configs_t;

class Value_t
{
public:
	int	iValue;
	int	iMin;
	int	iMax;

	float fValue;
	float fMin;
	float fMax;

	bool bValue;

	ImVec4 v4Value;
	ImVec2 v2Value;

	std::string szValue;

	Value_t()
	{
		iValue = 0;
		iMin = 0;
		iMax = 0;

		fValue = 0.0f;
		fMin = 0.0f;
		fMax = 0.0f;

		bValue = false;

		v4Value = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
		v2Value = ImVec2(0.0f, 0.0f);
	}
};

class Config_t
{
public:

	SettingType_t EType;
	Value_t Value;

	std::string	AppName;
	std::string	KeyName;
	std::string Default;

	Config_t() {};

	Config_t(SettingType_t EType, std::string AppName, std::string KeyName, std::string Default, Value_t val)
	{
		this->EType = EType;

		this->AppName = AppName;
		this->KeyName = KeyName;
		this->Default = Default;

		this->Value.iValue = val.iValue;
		this->Value.iMin = val.iMin;
		this->Value.iMax = val.iMax;
		this->Value.fValue = val.fValue;
		this->Value.fMin = val.fMin;
		this->Value.fMax = val.fMax;
		this->Value.bValue = val.bValue;
		this->Value.v4Value = ImVec4(val.v4Value.x, val.v4Value.y, val.v4Value.z, val.v4Value.w);
		this->Value.v2Value = ImVec2(val.v2Value.x, val.v2Value.y);
		this->Value.szValue = val.szValue;
	}
};

extern Config_t Settings[CONFIGS_];
extern char	SettingsFile[MAX_PATH];
extern char ConfigDirectory[MAX_PATH];

void InitSettings();
bool LoadSettings();
bool SaveSettings();