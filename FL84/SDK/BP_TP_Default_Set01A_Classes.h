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
	 * BlueprintGeneratedClass BP_TP_Default_Set01A.BP_TP_Default_Set01A_C
	 * Size -> 0x0010 (FullSize[0x03A0] - InheritedSize[0x0390])
	 */
	class ABP_TP_Default_Set01A_C : public ABP_CapsuleBase_InBattle_C
	{
	public:
		class UParticleSystemComponent*                            FX_T_Cabin_PQ01;                                         // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_T_Cabin_PQ02;                                         // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
