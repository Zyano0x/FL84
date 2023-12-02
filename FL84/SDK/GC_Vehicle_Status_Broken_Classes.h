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
	 * BlueprintGeneratedClass GC_Vehicle_Status_Broken.GC_Vehicle_Status_Broken_C
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UGC_Vehicle_Status_Broken_C : public UGameplayCueNotify_Static
	{
	public:
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
