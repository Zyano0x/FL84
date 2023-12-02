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
	 * BlueprintGeneratedClass BP_BotAIController.BP_BotAIController_C
	 * Size -> 0x0018 (FullSize[0x0890] - InheritedSize[0x0878])
	 */
	class ABP_BotAIController_C : public ASolarBotAIController
	{
	public:
		unsigned char                                              UnknownData_2LDM[0x8];                                   // 0x0878(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0880(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UObject*                                             NewVar_1;                                                // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetWarmGameClock(bool Enable);
		class FString GetModuleName();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_BotAIController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
