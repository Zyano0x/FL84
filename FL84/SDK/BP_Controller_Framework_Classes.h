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
	 * BlueprintGeneratedClass BP_Controller_Framework.BP_Controller_Framework_C
	 * Size -> 0x004C (FullSize[0x0E9C] - InheritedSize[0x0E50])
	 */
	class ABP_Controller_Framework_C : public ASCMPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FPoseSnapshot                                       Snapshot;                                                // 0x0E58(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TempMaxDist;                                             // 0x0E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempMaxIndex;                                            // 0x0E94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EnableAiPalRate;                                         // 0x0E98(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void MeerkatTriggerReport(const class FString& Value);
		void UpdateAiPalRate(int32_t Rate);
		void OnRep_EnableAiPalRate();
		void OnNotifyLockPlayer(const class FString& Name);
		void RequestNotifyLockPlayer(const class FString& Name);
		void InpActEvt_GMT_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InputReviveSelfReleased();
		void AssembleCustomAntiCheatData(class ASolarWeapon* ActiveWeapon, class ASolarVehiclePawn* BoardedVehicle);
		void CustomAntiCheatDataExport(TArray<class FString> DataName, TArray<class FString> DataContent);
		void ClientNotifyLockPlayer(const class FString& Name);
		void RpcClientRepAceStatusToServer(const class FString& Value);
		void ExecuteUbergraph_BP_Controller_Framework(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
