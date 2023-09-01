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
	 * BlueprintGeneratedClass BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class ABP_PBags_BDogF_Set01_C : public ABP_SolarBackpackActor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void FX_Flying();
		void FX_Idle();
		void FX_LowPower();
		void FX_Charging();
		void FX_Default();
		void OnMeshEffectFactorChange();
		void ExecuteUbergraph_BP_PBags_BDogF_Set01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
