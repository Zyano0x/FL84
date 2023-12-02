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
	 * BlueprintGeneratedClass BP_SolarReplayPlayerController.BP_SolarReplayPlayerController_C
	 * Size -> 0x0008 (FullSize[0x0F60] - InheritedSize[0x0F58])
	 */
	class ABP_SolarReplayPlayerController_C : public ASolarReplayPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0F58(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ExecuteUbergraph_BP_SolarReplayPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
