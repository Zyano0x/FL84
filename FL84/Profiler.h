#pragma once

#include "RapidXML/rapidxml_wrap.hpp"

//=====================================================================================

namespace ZyanoCheats
{
	class cProfiler
	{
	public:

		struct sCvar
		{
			LPCSTR szLabel;
			LPCSTR* szItems;

			union uCvarValue
			{
				bool bValue;
				int iValue;
				DWORD dwValue;
				float flValue;
				LPSTR szValue;
				ImVec4 cValue;

				uCvarValue(bool value) : bValue(value) {}
				uCvarValue(int value) : iValue(value) {}
				uCvarValue(DWORD value) : dwValue(value) {}
				uCvarValue(float value) : flValue(value) {}
				uCvarValue(LPSTR value) : szValue(value) {}
				uCvarValue(ImVec4 value) : cValue(value) {}
			} Custom, Default;

			union uMinValue
			{
				int	iMin;
				float flMin;

				uMinValue(int min) : iMin(min) {}
				uMinValue(float min) : flMin(min) {}
			} MinValue;

			union uMaxValue
			{
				int	iMax;
				float flMax;

				uMaxValue(int max) : iMax(max) {}
				uMaxValue(float max) : flMax(max) {}
			} MaxValue;

			sCvar(LPCSTR name, LPCSTR* items, bool value, int min, int max) : szLabel(name), szItems(items), Custom(value), Default(value), MinValue(min), MaxValue(max) {}
			sCvar(LPCSTR name, LPCSTR* items, int value, int min, int max) : szLabel(name), szItems(items), Custom(value), Default(value), MinValue(min), MaxValue(max) {}
			sCvar(LPCSTR name, LPCSTR* items, DWORD value, int min, int max) : szLabel(name), szItems(items), Custom(value), Default(value), MinValue(min), MaxValue(max) {}
			sCvar(LPCSTR name, LPCSTR* items, float value, float min, float max) : szLabel(name), szItems(items), Custom(value), Default(value), MinValue(min), MaxValue(max) {}
			sCvar(LPCSTR name, LPCSTR* items, LPSTR value, int min, int max) : szLabel(name), szItems(items), Custom(value), Default(value), MinValue(min), MaxValue(max) {}
			sCvar(LPCSTR name, LPCSTR* items, ImVec4 value, float min, float max) : szLabel(name), szItems(items), Custom(value), Default(value), MinValue(min), MaxValue(max) {}
		};

		typedef enum
		{
			AIMMODE_FOV,
			AIMMODE_SILENT,
			AIMMODE_AUTOMATIC,
			AIMMODE_MAX
		} eAimmode;

		typedef enum
		{
			AIMTYPE_MEMORY,
			AIMTYPE_MOUSE_EVENT,
			AIMTYPE_MAX
		} eAimtype;

		typedef enum
		{
			AIMBONE_HEAD,
			AIMBONE_NECK,
			AIMBONE_SPINE,
			AIMBONE_MAX,
		} eAimbone;

		typedef enum
		{
			PLAYER_SNAPLINES_OFF,
			PLAYER_SNAPLINES_TOP,
			PLAYER_SNAPLINES_BOTTOM,
			PLAYER_SNAPLINES_CENTER,
			PLAYER_SNAPLINES_MAX,
		} ePlayerSnaplines;

		typedef enum
		{
			PLAYER_BOXES_OFF,
			PLAYER_BOXES_BORDER,
			PLAYER_BOXES_CORNER,
			PLAYER_BOXES_BORDER_FILLED,
			PLAYER_BOXES_CORNER_FILLED,
			PLAYER_BOXES_MAX,
		} ePlayerBoxes;

		typedef enum
		{
			ITEMS_LEVEL_1,
			ITEMS_LEVEL_2,
			ITEMS_LEVEL_3,
			ITEMS_LEVEL_4,
			ITEMS_LEVEL_5,
			ITEMS_LEVEL_MAX
		} eItemsLevel;

		std::vector<LPCSTR> szAimMode = { " Aimbot FOV", " Silent Aim", " Automatic" };
		std::vector<LPCSTR> szAimType = { " Memory", " Mouse Event"};
		std::vector<LPCSTR> szAimBone = { " Head", " Neck", " Spine" };
		std::vector<LPCSTR> szPlayerSnaplines = { " Off", " Top", " Bottom", " Center" };
		std::vector<LPCSTR> szPlayerBoxes = { " Off", " Border", " Corner", " Border Filled", " Corner Filled" };
		std::vector<LPCSTR> szItemLevel = { " Level 1", " Level 2", " Level 3", " Level 4", " Level 5" };

		sCvar gAimMode = { " Aim Mode", szAimMode.data(), AIMMODE_FOV, AIMMODE_FOV, AIMMODE_MAX };
		sCvar gAimType = { " Aim Type", szAimType.data(), AIMTYPE_MEMORY, AIMTYPE_MOUSE_EVENT, AIMTYPE_MAX };
		sCvar gAimBone = { " Aim Bone", szAimBone.data(), AIMBONE_HEAD, AIMBONE_HEAD, AIMBONE_MAX };

		sCvar gPlayerSnaplines = { " Player Snaplines", szPlayerSnaplines.data(), PLAYER_SNAPLINES_OFF, PLAYER_SNAPLINES_OFF, PLAYER_SNAPLINES_MAX };
		sCvar gPlayerBoxes = { " Player Boxes", szPlayerBoxes.data(), PLAYER_BOXES_OFF, PLAYER_BOXES_OFF, PLAYER_BOXES_MAX };

		sCvar gItemLevel = { " Item Level", szItemLevel.data(), ITEMS_LEVEL_1, ITEMS_LEVEL_1, ITEMS_LEVEL_MAX };

		sCvar gAimEnabled = { " Enabled", nullptr, false, FALSE, TRUE };
		sCvar gAimPrediction = { " Aim Prediction", nullptr, false, FALSE, TRUE };
		sCvar gAimFOV = { " Aimbot FOV", nullptr, 100.f, 1.0f, 150.f };
		sCvar gAimSmooth = { " Aimbot Smooth", nullptr, 5.0f, 1.0f, 10.0f };
		sCvar gAimKey = { " Aimbot Key", nullptr, 1, 1, 166 };
		sCvar gIgnoreKnocked = { " Ignore Knocked", nullptr, false, FALSE, TRUE };
		sCvar gIgnoreStealth = { " Ignore Stealth", nullptr, false, FALSE, TRUE };
		sCvar gHumanSpeed = { " Human Speed", nullptr, 10.0f, 1.0f, 100.0f };
		sCvar gHumanScale = { " Human Scale", nullptr, 1.0f, 1.0f, 20.0f };
		sCvar gIsAiming = { " Is Aiming", nullptr, false, FALSE, TRUE };
		sCvar gDrawFOV = { " Draw FOV", nullptr, false, FALSE, TRUE };
		sCvar gVisibleCheck = { " Visible Check", nullptr, false, FALSE, TRUE };
		sCvar gAimLine = { " Aimbot Line", nullptr, false, FALSE, TRUE };
		sCvar gBulletPenetration = { " Bullet Penetration", nullptr, false, FALSE, TRUE };

		sCvar gPlayerEspEnabled = { " Enabled", nullptr, false, FALSE, TRUE };
		sCvar gTeamEsp = { " Team", nullptr, false, FALSE, TRUE };
		sCvar gEnemyEsp = { " Enemy", nullptr, false, FALSE, TRUE };
		sCvar gPlayerName = { " Name", nullptr, false, FALSE, TRUE };
		sCvar gPlayerDistance = { " Distance", nullptr, true, FALSE, TRUE };
		sCvar gPlayerHealth = { " Health", nullptr, false, FALSE, TRUE };
		sCvar gPlayerWeapon = { " Weapon", nullptr, false, FALSE, TRUE };
		sCvar gPlayerDirectionLine = { " Direction Line", nullptr, false, FALSE, TRUE };
		sCvar gPlayerSkeleton = { " Skeleton", nullptr, false, FALSE, TRUE };
		sCvar gVehicle = { " Vehicle", nullptr, false, FALSE, TRUE };

		sCvar gItemEspEnabled = { " Enabled", nullptr, false, FALSE, TRUE };
		sCvar gItemDistance = { " Items Distance", nullptr, 200.f, 1.0f, 300.f };
		sCvar gWeaponItems = { " Weapon", nullptr, false, FALSE, TRUE };
		sCvar gShieldItems = { " Shield", nullptr, false, FALSE, TRUE };
		sCvar gShieldUpgrItems = { " Shield Upgrade", nullptr, false, FALSE, TRUE };
		sCvar gAmmoItems = { " Ammo", nullptr, false, FALSE, TRUE };
		sCvar gAttachmentsItems = { " Weapon Parts", nullptr, false, FALSE, TRUE };
		sCvar gHJetPackItems = { " Horizontal JetPack", nullptr, false, FALSE, TRUE };
		sCvar gVJetPackItems = { " Vertical JetPack", nullptr, false, FALSE, TRUE };
		sCvar gHealthItems = { " Health", nullptr, false, FALSE, TRUE };
		sCvar gDeathBox = { " Death Box", nullptr, false, FALSE, TRUE };
		sCvar gTreasureBox = { " Treasure Box", nullptr, false, FALSE, TRUE };
		sCvar gAirDrop = { " AirDrop", nullptr, false, FALSE, TRUE };

		sCvar gNoRecoil = { " No Recoil", nullptr, false, FALSE, TRUE };
		sCvar gVehicleNoRecoil = { " Vehicle No Recoil", nullptr, false, FALSE, TRUE };
		sCvar gVehicleSilentAim = { " Vehicle Silent Aim", nullptr, false, FALSE, TRUE };
		sCvar gFastReload = { " Fast Reload", nullptr, false, FALSE, TRUE };
		sCvar gOffscreen = { " Offscreen", nullptr, false, FALSE, TRUE };
		sCvar gRadar = { " Radar", nullptr, false, FALSE, TRUE };
		sCvar gRadarDistance = { " Radar Distance", nullptr, 300.f, 1.0f, 500.f };

		sCvar gStopSpectator = { " Stop Spectator", nullptr, false, FALSE, TRUE };
		sCvar gFastSpectating = { " Fast Spectating", nullptr, false, FALSE, TRUE };
		sCvar gSuicide = { " Suicide", nullptr, false, FALSE, TRUE };
		sCvar gSpamLike = { " Spam Like", nullptr, false, FALSE, TRUE };
		sCvar gLikeValue = { " Like", nullptr, 100, 1, 10000000 };
		sCvar gDislikeValue = { " Dislike", nullptr, -100, -1, -10000000 };
		sCvar gShotgunDamage = { " Shotgun High Damage", nullptr, false, FALSE, TRUE };
		sCvar gShotgunSilent = { " Shotgun Silent", nullptr, false, FALSE, TRUE };
		sCvar gVehicleSpeed = { " Vehicle Speed", nullptr, false, FALSE, TRUE };
		sCvar gVehicleSpeedMulti = { " Speed", nullptr, 1.0f, 1.0f, 5.0f };

		sCvar gColorTeammate = { " Team Color", nullptr, ImVec4(0.0f, 0.909f, 0.988f, 1.0f), 0.0f, 1.0f };
		sCvar gColorEnemyInvisible = { "Enemy Color", nullptr, ImVec4(1.0f, 0.949f, 0.0f, 1.0f), 0.0f, 1.0f };
		sCvar gColorEnemyVisible = { " Visible Color", nullptr, ImVec4(1.0f, 0.141f, 0.0f, 1.0f), 0.0f, 1.0f };
		sCvar gColorEnemyStealth = { " Stealth Color", nullptr, ImVec4(0.0f, 0.0f, 0.0f, 1.0f), 0.0f, 1.0f };
		sCvar gColorWeaponItems = { " Weapon Color", nullptr, ImVec4(0.0f, 0.764f, 1.0f, 1.0f), 0.0f, 1.0f };
		sCvar gColorAmmoItems = { " Ammo Color", nullptr, ImVec4(0.474f, 0.709f, 0.709f, 1.0f), 0.0f, 1.0f };
		sCvar gColorHealthItems = { " Health Color", nullptr, ImVec4(0.839f, 0.682f, 0.003f, 1.0f), 0.0f, 1.0f };
		sCvar gColorTreasureBox = { " Treasure Box Color", nullptr, ImVec4(0.85f, 0.313f, 0.188f, 1.0f), 0.0f, 1.0f };
		sCvar gColorAirDrop = { " AirDrop Color", nullptr, ImVec4(0.258f, 0.960f, 0.784f, 1.0f), 0.0f, 1.0f };

		sCvar gTest = { " _TEST", nullptr, false, FALSE, TRUE };

		acut::XmlDoc<char> XML;

		bool SaveProfile(const std::string& path);
		bool LoadProfile(const std::string& path);
		void DisableAll();
	} extern _profiler;
}