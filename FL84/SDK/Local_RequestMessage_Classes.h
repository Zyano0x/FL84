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
	 * BlueprintGeneratedClass Local_RequestMessage.Local_RequestMessage_C
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class ULocal_RequestMessage_C : public UActorComponent
	{
	public:
		class FString                                              NewVar_1;                                                // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             UIInitFinishEventDispatcher;                             // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UIInitFinishEventDispatcher__DelegateSignature(class UUserWidget* WidgetRef);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
