/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.AK Event Fun
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               isNotifyEnd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimNotifyState_SolarLobbyAkEvent_C::AKEventFun(class USkeletalMeshComponent* SkeletalMeshComp, class UAkAudioEvent* Event, const class FString& EventName, bool isNotifyEnd, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.AK Event Fun");
		
		UAnimNotifyState_SolarLobbyAkEvent_C_AKEventFun_Params params {};
		params.SkeletalMeshComp = SkeletalMeshComp;
		params.Event = Event;
		params.EventName = EventName;
		params.isNotifyEnd = isNotifyEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Get Mesh AK Component
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InSkeletalMeshComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkComponent*                                OutAkComp                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSuccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimNotifyState_SolarLobbyAkEvent_C::GetMeshAKComponent(class USkeletalMeshComponent* InSkeletalMeshComp, class UAkComponent** OutAkComp, bool* IsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Get Mesh AK Component");
		
		UAnimNotifyState_SolarLobbyAkEvent_C_GetMeshAKComponent_Params params {};
		params.InSkeletalMeshComp = InSkeletalMeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAkComp != nullptr)
			*OutAkComp = params.OutAkComp;
		if (IsSuccess != nullptr)
			*IsSuccess = params.IsSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.GetAkSwitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InSkeletalMeshComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldPlaySounds                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimNotifyState_SolarLobbyAkEvent_C::GetAkSwitch(class USkeletalMeshComponent* InSkeletalMeshComp, bool* ShouldPlaySounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.GetAkSwitch");
		
		UAnimNotifyState_SolarLobbyAkEvent_C_GetAkSwitch_Params params {};
		params.InSkeletalMeshComp = InSkeletalMeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlaySounds != nullptr)
			*ShouldPlaySounds = params.ShouldPlaySounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAnimNotifyState_SolarLobbyAkEvent_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyEnd");
		
		UAnimNotifyState_SolarLobbyAkEvent_C_Received_NotifyEnd_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAnimNotifyState_SolarLobbyAkEvent_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyBegin");
		
		UAnimNotifyState_SolarLobbyAkEvent_C_Received_NotifyBegin_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.TotalDuration = TotalDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SolarLobbyAkEvent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SolarLobbyAkEvent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C");
		return ptr;
	}

}


