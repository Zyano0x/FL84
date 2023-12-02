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
	 * BlueprintGeneratedClass BP_BTT_SetBlackBoardKey_Object.BP_BTT_SetBlackBoardKey_Object_C
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UBP_BTT_SetBlackBoardKey_Object_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x00B0(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTT_SetBlackBoardKey_Object(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
