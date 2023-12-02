#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_TaskFormula.BP_TaskFormula_C
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class ABP_TaskFormula_C : public ATaskFormula
	{
	public:
		void SmallModeHoverCarInWaterDistance(int64_t TaskID);
		void BigModeHoverCarInWaterDistance(int64_t TaskID);
		void SmallModePosionWalkDistance(int64_t TaskID);
		void SmallModeSwimDistance(int64_t TaskID);
		void BigModePosionWalkDistance(int64_t TaskID);
		void BigModeSwimDistance(int64_t TaskID);
		void BigModeAvatarKillNum(int64_t TaskID);
		void BigModeWeaponTypeKillNum(int64_t TaskID);
		EWeaponType GetCurWeaponType();
		void GetDriveVehicleID(int32_t* AssignedCharacterID);
		void BigModeTotalVehicleDamage(int64_t TaskID);
		void SmallModeWeaponTypeDamage(int64_t TaskID);
		void BigModeWeaponTypeDamage(int64_t TaskID);
		void SmallModeWeaponDamage(int64_t TaskID);
		void BigModeWeaponDamage(int64_t TaskID);
		void SmallModeWeaponKillNum(int64_t TaskID);
		void BigModeWeaponKillNum(int64_t TaskID);
		void SmallModeLifeTime(int64_t TaskID);
		void SmallModeIntValuePlus(int64_t TaskID);
		void BigModeIntValuePlus(int64_t TaskID);
		void AnyIntValuePlus(int64_t TaskID);
		void TYBigModeLifeTime(int64_t TaskID);
		void TYAnyModeFlyCount(int64_t TaskID);
		void TYBigModeAssistNum(int64_t TaskID);
		void TYAnyModeAssistNum(int64_t TaskID);
		void TYBigModeHealSelf(int64_t TaskID);
		void TYAnyModeHealSelf(int64_t TaskID);
		void TYBigModeSaveCount(int64_t TaskID);
		void TYModeCauseDamage(int64_t TaskID);
		void TYBigModeCauseDamage(int64_t TaskID);
		void TYAnyModeCauseDamage(int64_t TaskID);
		void TYBigModeKillDownNum(int64_t TaskID);
		void TYAnyModeKillDownNum(int64_t TaskID);
		void TYModeSingleKillNum(int64_t TaskID);
		void GetWeaponTypeStartIndexPlus1(int32_t* WeaponType);
		void SmallModeWeaponTypeKillNum(int64_t TaskID);
		void GetCurCharacterID(int32_t* AssignedCharacterID);
		void TYModeAvatarKillNum(int64_t TaskID);
		int32_t GetCurWeaponID();
		void TYModeWeaponKillNum(int64_t TaskID);
		void TYModeKillNum(int64_t TaskID);
		void TYDriveAnyVechileDistance(int64_t TaskID);
		void TYUseAvatarKillNum(int64_t TaskID);
		void TYDriveVechileDistance(int64_t TaskID);
		void GetSolarPlayerState(class ASolarPlayerState** OutResult);
		void TYWeaponKillNum(int64_t TaskID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
