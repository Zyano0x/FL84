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
	 * BlueprintGeneratedClass BP_BTT_SetBlackBoardKey_Vector.BP_BTT_SetBlackBoardKey_Vector_C
	 * Size -> 0x003C (FullSize[0x00E4] - InheritedSize[0x00A8])
	 */
	class UBP_BTT_SetBlackBoardKey_Vector_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FVector                                             Int;                                                     // 0x00D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTT_SetBlackBoardKey_Vector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
