/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetSelfInf
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::SetSelfInf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetSelfInf"));
		
		UWarmupMatch_Result_Rank_C_SetSelfInf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetTop3
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::SetTop3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetTop3"));
		
		UWarmupMatch_Result_Rank_C_SetTop3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.GetPNG＆Name
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutAvatar                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UWarmupMatch_Result_Rank_C::GetPNGName(const class FString& PlayerId, class UTexture2D** OutAvatar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.GetPNG＆Name"));
		
		UWarmupMatch_Result_Rank_C_GetPNGName_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAvatar != nullptr)
			*OutAvatar = params.OutAvatar;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetRankList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::SetRankList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetRankList"));
		
		UWarmupMatch_Result_Rank_C_SetRankList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.NaviList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::NaviList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.NaviList"));
		
		UWarmupMatch_Result_Rank_C_NaviList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Construct List Item
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_C::ConstructListItem(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Construct List Item"));
		
		UWarmupMatch_Result_Rank_C_ConstructListItem_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_C::SetIcon(class ASCMPlayerState* Player, int32_t Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetIcon"));
		
		UWarmupMatch_Result_Rank_C_SetIcon_Params params {};
		params.Player = Player;
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.OnDelayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::OnDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.OnDelayed"));
		
		UWarmupMatch_Result_Rank_C_OnDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWarmupMatch_Result_Rank_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.PreConstruct"));
		
		UWarmupMatch_Result_Rank_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Open
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Open"));
		
		UWarmupMatch_Result_Rank_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Close
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Close"));
		
		UWarmupMatch_Result_Rank_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
		
		UWarmupMatch_Result_Rank_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__UI_Component_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::BndEvt__UI_Component_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__UI_Component_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));
		
		UWarmupMatch_Result_Rank_C_BndEvt__UI_Component_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Construct"));
		
		UWarmupMatch_Result_Rank_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Rank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMDataChangeType                                 ChangeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_C::Rank(ESCMDataChangeType ChangeType, const class FString& OldValue, const class FString& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Rank"));
		
		UWarmupMatch_Result_Rank_C_Rank_Params params {};
		params.ChangeType = ChangeType;
		params.OldValue = OldValue;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__ListView_227_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_C::BndEvt__ListView_227_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__ListView_227_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature"));
		
		UWarmupMatch_Result_Rank_C_BndEvt__ListView_227_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Event_OpenLeaderboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_C::Event_OpenLeaderboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Event_OpenLeaderboard"));
		
		UWarmupMatch_Result_Rank_C_Event_OpenLeaderboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.OnBackKey
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EWidgetBackKeyType                                 BackKeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_C::OnBackKey(EWidgetBackKeyType BackKeyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.OnBackKey"));
		
		UWarmupMatch_Result_Rank_C_OnBackKey_Params params {};
		params.BackKeyType = BackKeyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.ExecuteUbergraph_WarmupMatch_Result_Rank
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_C::ExecuteUbergraph_WarmupMatch_Result_Rank(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.ExecuteUbergraph_WarmupMatch_Result_Rank"));
		
		UWarmupMatch_Result_Rank_C_ExecuteUbergraph_WarmupMatch_Result_Rank_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWarmupMatch_Result_Rank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWarmupMatch_Result_Rank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C"));
		return ptr;
	}

}


