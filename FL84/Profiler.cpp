#include "pch.h"

namespace ZyanoCheats
{
	cProfiler _profiler;

	bool cProfiler::SaveProfile(const std::string& path)
	{
		try
		{
			XML.create_document();
			std::wstring szFilePath;

			if (path.empty())
				szFilePath = acut::AnsiToWstring(acut::GetExeDirectory() + DEFAULT_XML, CP_ACP);

			else
				szFilePath = acut::AnsiToWstring(path, CP_ACP);

			XML.set("ZyanoCheats.Aimbot.AimbotEnabled", gAimEnabled.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.AimPrediction", gAimPrediction.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.AimMode", gAimMode.Custom.iValue);
			XML.set("ZyanoCheats.Aimbot.AimType", gAimType.Custom.iValue);
			XML.set("ZyanoCheats.Aimbot.AimBone", gAimBone.Custom.iValue);
			XML.set("ZyanoCheats.Aimbot.AimFOV", gAimFOV.Custom.flValue);
			XML.set("ZyanoCheats.Aimbot.AimSmooth", gAimSmooth.Custom.flValue);
			XML.set("ZyanoCheats.Aimbot.AimKey", gAimKey.Custom.iValue);
			XML.set("ZyanoCheats.Aimbot.IgnoreKnocked", gIgnoreKnocked.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.IgnoreStealth", gIgnoreStealth.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.HumanSpeed", gHumanSpeed.Custom.flValue);
			XML.set("ZyanoCheats.Aimbot.HumanScale", gHumanScale.Custom.flValue);
			XML.set("ZyanoCheats.Aimbot.IsAiming", gIsAiming.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.DrawFOV", gDrawFOV.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.VisibleCheck", gVisibleCheck.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.AimLine", gAimLine.Custom.bValue);
			XML.set("ZyanoCheats.Aimbot.BulletPenetration", gBulletPenetration.Custom.bValue);

			XML.set("ZyanoCheats.Wallhack.PlayerEnabled", gPlayerEspEnabled.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.Team", gTeamEsp.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.Enemy", gEnemyEsp.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.PlayerName", gPlayerName.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.PlayerDistance", gPlayerDistance.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.PlayerHealth", gPlayerHealth.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.PlayerWeapon", gPlayerWeapon.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.PlayerDirectionLine", gPlayerDirectionLine.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.PlayerSkeleton", gPlayerSkeleton.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.PlayerSnaplines", gPlayerSnaplines.Custom.iValue);
			XML.set("ZyanoCheats.Wallhack.PlayerBoxes", gPlayerBoxes.Custom.iValue);
			XML.set("ZyanoCheats.Wallhack.Vehicle", gVehicle.Custom.bValue);

			XML.set("ZyanoCheats.Wallhack.ItemEnabled", gItemEspEnabled.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.ItemDistance", gItemDistance.Custom.flValue);
			XML.set("ZyanoCheats.Wallhack.ItemLevel", gItemLevel.Custom.iValue);
			XML.set("ZyanoCheats.Wallhack.Weapon", gWeaponItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.Shield", gShieldItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.ShieldUpgrade", gShieldUpgrItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.Ammo", gAmmoItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.WeaponParts", gAttachmentsItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.HorizontalJetPack", gHJetPackItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.VerticalJetPack", gVJetPackItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.Health", gHealthItems.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.DeathBox", gDeathBox.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.TreasureBox", gTreasureBox.Custom.bValue);
			XML.set("ZyanoCheats.Wallhack.AirDrop", gAirDrop.Custom.bValue);

			XML.set("ZyanoCheats.Miscellaneous.NoRecoil", gNoRecoil.Custom.bValue);
			XML.set("ZyanoCheats.Miscellaneous.VehicleNoRecoil", gVehicleNoRecoil.Custom.bValue);
			XML.set("ZyanoCheats.Miscellaneous.VehicleSilentAim", gVehicleSilentAim.Custom.bValue);
			XML.set("ZyanoCheats.Miscellaneous.FastReload", gFastReload.Custom.bValue);
			XML.set("ZyanoCheats.Miscellaneous.Offscreen", gOffscreen.Custom.bValue);
			XML.set("ZyanoCheats.Miscellaneous.Radar", gRadar.Custom.bValue);
			XML.set("ZyanoCheats.Miscellaneous.RadarDistance", gRadarDistance.Custom.flValue);

			XML.set("ZyanoCheats.Exploits.StopSpectator", gStopSpectator.Custom.bValue);
			XML.set("ZyanoCheats.Exploits.FastSpectating", gFastSpectating.Custom.bValue);
			XML.set("ZyanoCheats.Exploits.Suicide", gSuicide.Custom.bValue);
			XML.set("ZyanoCheats.Exploits.SpamLike", gSpamLike.Custom.bValue);
			XML.set("ZyanoCheats.Exploits.LikeValue", gLikeValue.Custom.iValue);
			XML.set("ZyanoCheats.Exploits.DislikeValue", gDislikeValue.Custom.iValue);
			XML.set("ZyanoCheats.Exploits.ShotgunDamage", gShotgunDamage.Custom.bValue);
			XML.set("ZyanoCheats.Exploits.VehicleSpeed", gVehicleSpeed.Custom.bValue);
			XML.set("ZyanoCheats.Exploits.VehicleSpeedMulti", gVehicleSpeedMulti.Custom.flValue);

			XML.set("ZyanoCheats.Styles.ColorTeammate.Red", gColorTeammate.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorTeammate.Green", gColorTeammate.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorTeammate.Blue", gColorTeammate.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorEnemyInvisible.Red", gColorEnemyInvisible.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorEnemyInvisible.Green", gColorEnemyInvisible.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorEnemyInvisible.Blue", gColorEnemyInvisible.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorEnemyVisible.Red", gColorEnemyVisible.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorEnemyVisible.Green", gColorEnemyVisible.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorEnemyVisible.Blue", gColorEnemyVisible.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorEnemyStealth.Red", gColorEnemyStealth.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorEnemyStealth.Green", gColorEnemyStealth.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorEnemyStealth.Blue", gColorEnemyStealth.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorWeaponItems.Red", gColorWeaponItems.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorWeaponItems.Green", gColorWeaponItems.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorWeaponItems.Blue", gColorWeaponItems.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorAmmoItems.Red", gColorAmmoItems.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorAmmoItems.Green", gColorAmmoItems.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorAmmoItems.Blue", gColorAmmoItems.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorHealthItems.Red", gColorHealthItems.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorHealthItems.Green", gColorHealthItems.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorHealthItems.Blue", gColorHealthItems.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorTreasureBox.Red", gColorTreasureBox.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorTreasureBox.Green", gColorTreasureBox.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorTreasureBox.Blue", gColorTreasureBox.Custom.cValue[2]);

			XML.set("ZyanoCheats.Styles.ColorAirDrop.Red", gColorAirDrop.Custom.cValue[0]);
			XML.set("ZyanoCheats.Styles.ColorAirDrop.Green", gColorAirDrop.Custom.cValue[1]);
			XML.set("ZyanoCheats.Styles.ColorAirDrop.Blue", gColorAirDrop.Custom.cValue[2]);

			XML.write_document(szFilePath);

			return true;
		}

		catch (const std::runtime_error& e)
		{
			MessageBoxA(_mainGUI.hWindow, e.what(), xorstr_("Error"), MB_OK | MB_ICONERROR);

			return false;
		}
	}

	bool cProfiler::LoadProfile(const std::string& path)
	{
		try
		{
			std::wstring szFilePath;

			if (path.empty())
				szFilePath = acut::AnsiToWstring(acut::GetExeDirectory() + DEFAULT_XML, CP_ACP);

			else
				szFilePath = acut::AnsiToWstring(path, CP_ACP);

			if (LI_FN(GetFileAttributesA).safe()(acut::WstringToAnsi(szFilePath, CP_ACP).c_str()) == INVALID_FILE_ATTRIBUTES)
				return false;

			XML.read_from_file(szFilePath);

			XML.get_if_present("ZyanoCheats.Aimbot.AimbotEnabled", gAimEnabled.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimPrediction", gAimPrediction.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimMode", gAimMode.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimType", gAimType.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimBone", gAimBone.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimFOV", gAimFOV.Custom.flValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimSmooth", gAimSmooth.Custom.flValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimKey", gAimKey.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Aimbot.IgnoreKnocked", gIgnoreKnocked.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.IgnoreStealth", gIgnoreStealth.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.HumanSpeed", gHumanSpeed.Custom.flValue);
			XML.get_if_present("ZyanoCheats.Aimbot.HumanScale", gHumanScale.Custom.flValue);
			XML.get_if_present("ZyanoCheats.Aimbot.IsAiming", gIsAiming.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.DrawFOV", gDrawFOV.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.VisibleCheck", gVisibleCheck.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.AimLine", gAimLine.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Aimbot.BulletPenetration", gBulletPenetration.Custom.bValue);

			XML.get_if_present("ZyanoCheats.Wallhack.PlayerEnabled", gPlayerEspEnabled.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.Team", gTeamEsp.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.Enemy", gEnemyEsp.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerName", gPlayerName.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerDistance", gPlayerDistance.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerHealth", gPlayerHealth.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerWeapon", gPlayerWeapon.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerDirectionLine", gPlayerDirectionLine.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerSkeleton", gPlayerSkeleton.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerSnaplines", gPlayerSnaplines.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Wallhack.PlayerBoxes", gPlayerBoxes.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Wallhack.Vehicle", gVehicle.Custom.bValue);

			XML.get_if_present("ZyanoCheats.Wallhack.ItemEnabled", gItemEspEnabled.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.ItemDistance", gItemDistance.Custom.flValue);
			XML.get_if_present("ZyanoCheats.Wallhack.ItemLevel", gItemLevel.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Wallhack.Weapon", gWeaponItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.Shield", gShieldItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.ShieldUpgrade", gShieldUpgrItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.Ammo", gAmmoItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.WeaponParts", gAttachmentsItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.HorizontalJetPack", gHJetPackItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.VerticalJetPack", gVJetPackItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.Health", gHealthItems.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.DeathBox", gDeathBox.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.TreasureBox", gTreasureBox.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Wallhack.AirDrop", gAirDrop.Custom.bValue);

			XML.get_if_present("ZyanoCheats.Miscellaneous.NoRecoil", gNoRecoil.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Miscellaneous.VehicleNoRecoil", gVehicleNoRecoil.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Miscellaneous.VehicleSilentAim", gVehicleSilentAim.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Miscellaneous.FastReload", gFastReload.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Miscellaneous.Offscreen", gOffscreen.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Miscellaneous.Radar", gRadar.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Miscellaneous.RadarDistance", gRadarDistance.Custom.flValue);

			XML.get_if_present("ZyanoCheats.Exploits.StopSpectator", gStopSpectator.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Exploits.FastSpectating", gFastSpectating.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Exploits.Suicide", gSuicide.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Exploits.SpamLike", gSpamLike.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Exploits.LikeValue", gLikeValue.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Exploits.DislikeValue", gDislikeValue.Custom.iValue);
			XML.get_if_present("ZyanoCheats.Exploits.ShotgunDamage", gShotgunDamage.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Exploits.VehicleSpeed", gVehicleSpeed.Custom.bValue);
			XML.get_if_present("ZyanoCheats.Exploits.VehicleSpeedMulti", gVehicleSpeedMulti.Custom.flValue);

			XML.get_if_present("ZyanoCheats.Styles.ColorTeammate.Red", gColorTeammate.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorTeammate.Green", gColorTeammate.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorTeammate.Blue", gColorTeammate.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyInvisible.Red", gColorEnemyInvisible.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyInvisible.Green", gColorEnemyInvisible.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyInvisible.Blue", gColorEnemyInvisible.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyVisible.Red", gColorEnemyVisible.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyVisible.Green", gColorEnemyVisible.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyVisible.Blue", gColorEnemyVisible.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyStealth.Red", gColorEnemyStealth.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyStealth.Green", gColorEnemyStealth.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorEnemyStealth.Blue", gColorEnemyStealth.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorWeaponItems.Red", gColorWeaponItems.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorWeaponItems.Green", gColorWeaponItems.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorWeaponItems.Blue", gColorWeaponItems.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorAmmoItems.Red", gColorAmmoItems.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorAmmoItems.Green", gColorAmmoItems.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorAmmoItems.Blue", gColorAmmoItems.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorHealthItems.Red", gColorHealthItems.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorHealthItems.Green", gColorHealthItems.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorHealthItems.Blue", gColorHealthItems.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorTreasureBox.Red", gColorTreasureBox.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorTreasureBox.Green", gColorTreasureBox.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorTreasureBox.Blue", gColorTreasureBox.Custom.cValue[2]);

			XML.get_if_present("ZyanoCheats.Styles.ColorAirDrop.Red", gColorAirDrop.Custom.cValue[0]);
			XML.get_if_present("ZyanoCheats.Styles.ColorAirDrop.Green", gColorAirDrop.Custom.cValue[1]);
			XML.get_if_present("ZyanoCheats.Styles.ColorAirDrop.Blue", gColorAirDrop.Custom.cValue[2]);

			return true;
		}

		catch (const std::runtime_error& e)
		{
			MessageBoxA(_mainGUI.hWindow, e.what(), xorstr_("Error"), MB_OK | MB_ICONERROR);

			return false;
		}
	}

	void cProfiler::DisableAll()
	{
		gAimEnabled.Custom.bValue = gAimEnabled.Default.bValue;
		gAimMode.Custom.iValue = gAimMode.Default.iValue;
		gAimBone.Custom.iValue = gAimBone.Default.iValue;
		gAimFOV.Custom.flValue = gAimFOV.Default.flValue;
		gAimSmooth.Custom.flValue = gAimSmooth.Default.flValue;
		gAimKey.Custom.iValue = gAimKey.Default.iValue;
		gIgnoreKnocked.Custom.bValue = gIgnoreKnocked.Default.bValue;
		gIgnoreStealth.Custom.bValue = gIgnoreStealth.Default.bValue;
		gHumanSpeed.Custom.flValue = gHumanSpeed.Default.flValue;
		gHumanScale.Custom.flValue = gHumanScale.Default.flValue;
		gIsAiming.Custom.bValue = gIsAiming.Default.bValue;
		gDrawFOV.Custom.bValue = gDrawFOV.Default.bValue;

		gPlayerEspEnabled.Custom.bValue = gPlayerEspEnabled.Default.bValue;
		gTeamEsp.Custom.bValue = gTeamEsp.Default.bValue;
		gEnemyEsp.Custom.bValue = gEnemyEsp.Default.bValue;
		gPlayerName.Custom.bValue = gPlayerName.Default.bValue;
		gPlayerDistance.Custom.bValue = gPlayerDistance.Default.bValue;
		gPlayerHealth.Custom.bValue = gPlayerHealth.Default.bValue;
		gPlayerWeapon.Custom.bValue = gPlayerWeapon.Default.bValue;
		gPlayerDirectionLine.Custom.bValue = gPlayerDirectionLine.Default.bValue;
		gPlayerSkeleton.Custom.bValue = gPlayerSkeleton.Default.bValue;
		gPlayerSnaplines.Custom.bValue = gPlayerSnaplines.Default.bValue;
		gPlayerBoxes.Custom.iValue = gPlayerBoxes.Default.iValue;
		gVehicle.Custom.bValue = gVehicle.Default.bValue;

		gItemEspEnabled.Custom.bValue = gItemEspEnabled.Default.bValue;
		gItemDistance.Custom.flValue = gItemDistance.Default.flValue;
		gItemLevel.Custom.iValue = gItemLevel.Default.iValue;
		gWeaponItems.Custom.bValue = gWeaponItems.Default.bValue;
		gShieldItems.Custom.bValue = gShieldItems.Default.bValue;
		gShieldUpgrItems.Custom.bValue = gShieldUpgrItems.Default.bValue;
		gAmmoItems.Custom.bValue = gAmmoItems.Default.bValue;
		gAttachmentsItems.Custom.bValue = gAttachmentsItems.Default.bValue;
		gHJetPackItems.Custom.bValue = gHJetPackItems.Default.bValue;
		gVJetPackItems.Custom.bValue = gVJetPackItems.Default.bValue;
		gHealthItems.Custom.bValue = gHealthItems.Default.bValue;
		gDeathBox.Custom.bValue = gDeathBox.Default.bValue;
		gTreasureBox.Custom.bValue = gTreasureBox.Default.bValue;
		gAirDrop.Custom.bValue = gAirDrop.Default.bValue;

		gNoRecoil.Custom.bValue = gNoRecoil.Default.bValue;
		gFastReload.Custom.bValue = gFastReload.Default.bValue;
		gOffscreen.Custom.bValue = gOffscreen.Default.bValue;
		gRadar.Custom.bValue = gRadar.Default.bValue;
		gRadarDistance.Custom.flValue = gRadarDistance.Default.flValue;

		gStopSpectator.Custom.bValue = gStopSpectator.Default.bValue;
		gSpamLike.Custom.bValue = gSpamLike.Default.bValue;
	}
}