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
	 * BlueprintGeneratedClass BP_HUD_Framework.BP_HUD_Framework_C
	 * Size -> 0x0020 (FullSize[0x03D0] - InheritedSize[0x03B0])
	 */
	class ABP_HUD_Framework_C : public ABattleHUDForTechDesign
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnWindowVisibiltyChanged;                                // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void RemoveInputActionFlagTeamDeath();
		void AddInputActionFlagTeamDeath();
		void BP_SCustomHUDBase_AutoGenFunc(class UObject* Publisher, class UObject* Payload, TArray<class FString> MetaData);
		void ReceiveBeginPlay();
		void EventOnWindowVisibiltyChanged(E_BattleUIType UIType, E_WidgetVisibility Visibility);
		void ExecuteUbergraph_BP_HUD_Framework(int32_t EntryPoint);
		void OnWindowVisibiltyChanged__DelegateSignature(E_BattleUIType UIType, E_WidgetVisibility Visibility);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
