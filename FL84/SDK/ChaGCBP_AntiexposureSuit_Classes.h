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
	 * BlueprintGeneratedClass ChaGCBP_AntiexposureSuit.ChaGCBP_AntiexposureSuit_C
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UChaGCBP_AntiexposureSuit_C : public UGameplayCueNotify_Static
	{
	public:
		bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
