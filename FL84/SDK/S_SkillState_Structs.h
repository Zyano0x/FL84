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
	 * UserDefinedStruct S_SkillState.S_SkillState
	 * Size -> 0x0002
	 */
	struct FS_SkillState
	{
	public:
		ERoleSkillOperation                                        UniqueAbility_4_1687CEEF476DE16EEE6A42B53EC116E7;        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERoleSkillOperation                                        TacticsAbility_5_36D081C34231A20607055BA95F67E65B;       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
