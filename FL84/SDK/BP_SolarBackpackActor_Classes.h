#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * BlueprintGeneratedClass BP_SolarBackpackActor.BP_SolarBackpackActor_C
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class ABP_SolarBackpackActor_C : public ASolarBackpackActor
	{
	public:
		class UMaterialInstanceDynamic* TryCreateDynamicMaterialInstance(class UPrimitiveComponent* Component, int32_t ElementIndex, class UMaterialInterface* SourceMaterial, const class FName& OptionlName);
		void FX_Idle();
		void FX_Flying();
		void FX_Charging();
		void FX_LowPower();
		void FX_Default();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
