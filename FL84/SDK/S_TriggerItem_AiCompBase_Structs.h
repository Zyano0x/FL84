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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_TriggerItem_AiCompBase.S_TriggerItem_AiCompBase
	 * Size -> 0x0091
	 */
	struct FS_TriggerItem_AiCompBase
	{
	public:
		E_TriggerType_AiCompBase                                   TriggerType_2_BEB26C2A4141C52136B9A19F8C06055C;          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MSL8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CoolDown_30_5AF35B8D4693268D4C775B8ADDB18B5F;            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyOnTeam_24_A1B578364A69FF58A4EE66B5A3E3B96F;         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QZ1I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ApplyOnTeamRange_27_3936C50945C041ADEC41E09AFD20FC30;    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FS_AiGroup_AiCompBase>                       AiGroup_22_C14D1C57492200282B35DEBACC4305D7;             // 0x0010(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FS_Filter_AiCompBase                                Filter_36_2B44835D40F02B33ACF96FBDC89C32CF;              // 0x0020(0x0018) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FS_RecheckSetting_AiCompBase                        Recheck_33_3A2B5E9C4CCDB711A3980798BDBBCB1C;             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class FString>                         Parameter_41_F3AAED884967B98F2AA588925201DCEA;           // 0x0040(0x0050) Edit, BlueprintVisible
		E_TriggerAction_AiCompBase                                 Action_44_E917063042B97A3F6F6DBCB1464A2C87;              // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
