#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * BlueprintGeneratedClass B_DuckRollingMeshComponent.B_DuckRollingMeshComponent_C
	 * Size -> 0x0010 (FullSize[0x0CC0] - InheritedSize[0x0CB0])
	 */
	class UB_DuckRollingMeshComponent_C : public UDuckRollingMeshComponent
	{
	public:
		TArray<class UAnimMontage*>                                JumpPoseMontages;                                        // 0x0CB0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
