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
	 * BlueprintGeneratedClass EQC_FishingTarget.EQC_FishingTarget_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEQC_FishingTarget_C : public UEnvQueryContext_BlueprintBase
	{
	public:
		void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
