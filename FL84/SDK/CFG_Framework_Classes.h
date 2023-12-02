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
	 * BlueprintGeneratedClass CFG_Framework.CFG_Framework_C
	 * Size -> 0x0009 (FullSize[0x0429] - InheritedSize[0x0420])
	 */
	class UCFG_Framework_C : public UCGMGameplayConfig
	{
	public:
		class UBP_ConfigSave_C*                                    ModeConfig;                                              // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSkillStateByNameEnum(ESkillStateNameEnum Enum, struct FS_SkillState* Out);
		struct FCustomRoomData GetCustomRoomData();
		bool IsCustomRoomMode();
		void GetSavedConfig(class UBP_ConfigSave_C** AsBPConfigSave, bool* bSuccess);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
