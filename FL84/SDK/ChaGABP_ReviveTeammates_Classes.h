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
	 * BlueprintGeneratedClass ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class UChaGABP_ReviveTeammates_C : public UChaGA_ReviveTeammates
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void K2_OnEndAbility(bool bWasCancelled);
		void OnAbilityExec();
		void ExecuteUbergraph_ChaGABP_ReviveTeammates(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
