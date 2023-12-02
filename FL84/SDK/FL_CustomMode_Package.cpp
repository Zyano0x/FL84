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
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.Get Portrait from Avatar ID
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  PortraitTexture                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_GetPortraitfromAvatarID(int32_t AvatarID, class UObject* __WorldContext, class UTexture2D** PortraitTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.Get Portrait from Avatar ID"));
		
		UFL_CustomMode_C_GetPortraitfromAvatarID_Params params {};
		params.AvatarID = AvatarID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PortraitTexture != nullptr)
			*PortraitTexture = params.PortraitTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.Get Loc Request Componet
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ULocal_RequestMessage_C* UFL_CustomMode_C::STATIC_GetLocRequestComponet(class UObject* WorldContextObject, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.Get Loc Request Componet"));
		
		UFL_CustomMode_C_GetLocRequestComponet_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.[s]BindOnPlayerReconnected
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_CustomMode_C::STATIC_sBindOnPlayerReconnected(const class FScriptDelegate& Event, class UObject* __WorldContext, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.[s]BindOnPlayerReconnected"));
		
		UFL_CustomMode_C_sBindOnPlayerReconnected_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.[s]BindOnPlayerDisconnected
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_CustomMode_C::STATIC_sBindOnPlayerDisconnected(const class FScriptDelegate& Event, class UObject* __WorldContext, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.[s]BindOnPlayerDisconnected"));
		
		UFL_CustomMode_C_sBindOnPlayerDisconnected_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.从物品ID获取本地化文本ID
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID2                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_IDID(int32_t ID, class UObject* __WorldContext, int32_t* ID2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.从物品ID获取本地化文本ID"));
		
		UFL_CustomMode_C_IDID_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID2 != nullptr)
			*ID2 = params.ID2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.获取武器技能Icon
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID2                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Icon(int32_t ID, class UObject* __WorldContext, class UTexture2D** Icon, int32_t* ID2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.获取武器技能Icon"));
		
		UFL_CustomMode_C_Icon_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
		if (ID2 != nullptr)
			*ID2 = params.ID2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.获取武器Icon
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                                                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartsType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Icon(int32_t ID, class UObject* __WorldContext, class UTexture2D** Icon, int32_t* , int32_t* PartsType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.获取武器Icon"));
		
		UFL_CustomMode_C_Icon_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
		if ( != nullptr)
			* = params.;
		if (PartsType != nullptr)
			*PartsType = params.PartsType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.获取武器配件Icon
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      HUDColor                                                   (Parm, OutParm, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon2                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartsType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Icon(int32_t ID, class UObject* __WorldContext, class UTexture2D** Icon, TArray<float>* HUDColor, class UTexture2D** Icon2, int32_t* PartsType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.获取武器配件Icon"));
		
		UFL_CustomMode_C_Icon_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
		if (HUDColor != nullptr)
			*HUDColor = params.HUDColor;
		if (Icon2 != nullptr)
			*Icon2 = params.Icon2;
		if (PartsType != nullptr)
			*PartsType = params.PartsType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.Pawn is a vehicle
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_CustomMode_C::STATIC_Pawnisavehicle(class APawn* Pawn, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.Pawn is a vehicle"));
		
		UFL_CustomMode_C_Pawnisavehicle_Params params {};
		params.Pawn = Pawn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.GetNetMode
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESolarNetMode UFL_CustomMode_C::STATIC_GetNetMode(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.GetNetMode"));
		
		UFL_CustomMode_C_GetNetMode_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.[c]BindOnReceiveRequest
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_cBindOnReceiveRequest(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.[c]BindOnReceiveRequest"));
		
		UFL_CustomMode_C_cBindOnReceiveRequest_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.[c]BindOnRequestReplied
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_cBindOnRequestReplied(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.[c]BindOnRequestReplied"));
		
		UFL_CustomMode_C_cBindOnRequestReplied_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.[s]BindOnRequestDealt
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_RequestMessage_C*                        RequestManager                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_sBindOnRequestDealt(const class FScriptDelegate& Event, class UObject* __WorldContext, class ABP_RequestMessage_C** RequestManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.[s]BindOnRequestDealt"));
		
		UFL_CustomMode_C_sBindOnRequestDealt_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestManager != nullptr)
			*RequestManager = params.RequestManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.GetRequestComponet
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UBPC_RequestMessage_C* UFL_CustomMode_C::STATIC_GetRequestComponet(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.GetRequestComponet"));
		
		UFL_CustomMode_C_GetRequestComponet_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.Name2String
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FName>                                Names                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Strings                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Name2String(TArray<class FName>* Names, class UObject* __WorldContext, TArray<class FString>* Strings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.Name2String"));
		
		UFL_CustomMode_C_Name2String_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Names != nullptr)
			*Names = params.Names;
		if (Strings != nullptr)
			*Strings = params.Strings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.ArrayContain
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              Main                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Sub                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Contain                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_CustomMode_C::STATIC_ArrayContain(TArray<class FString>* Main, TArray<class FString>* Sub, class UObject* __WorldContext, bool* Contain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.ArrayContain"));
		
		UFL_CustomMode_C_ArrayContain_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Main != nullptr)
			*Main = params.Main;
		if (Sub != nullptr)
			*Sub = params.Sub;
		if (Contain != nullptr)
			*Contain = params.Contain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.转换时间字符串
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                                                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        2                                                          (Parm, OutParm)
	 */
	void UFL_CustomMode_C::STATIC_(int32_t , class UObject* __WorldContext, class FText* 2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.转换时间字符串"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (2 != nullptr)
			*2 = params.2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.抽选随机数字
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                                                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    3                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(int32_t , int32_t 2, TArray<int32_t>* 3, class UObject* __WorldContext, int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.抽选随机数字"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.2 = 2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (3 != nullptr)
			*3 = params.3;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.获取打包类型
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESolarBuildConfiguration                                                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(class UObject* __WorldContext, ESolarBuildConfiguration* )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.获取打包类型"));
		
		UFL_CustomMode_C__Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.Number 2Letter
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Letter                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Number2Letter(int32_t Number, class UObject* __WorldContext, class FString* Letter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.Number 2Letter"));
		
		UFL_CustomMode_C_Number2Letter_Params params {};
		params.Number = Number;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Letter != nullptr)
			*Letter = params.Letter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.设置Noya提示触发间隔
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                                                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Noya(float , class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.设置Noya提示触发间隔"));
		
		UFL_CustomMode_C_Noya_Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.获取Noya界面
	 * 		Flags  -> (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_Notice_Noya_C*                           NoyaWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Noya(class UObject* __WorldContext, class UUI_Notice_Noya_C** NoyaWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.获取Noya界面"));
		
		UFL_CustomMode_C_Noya_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoyaWidget != nullptr)
			*NoyaWidget = params.NoyaWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.更新Noya触发条件
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<unsigned char, bool>                                                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Noya(TMap<unsigned char, bool> , class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.更新Noya触发条件"));
		
		UFL_CustomMode_C_Noya_Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.触发Noya主动提示
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_NoticeType_Noya                                                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      3                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Noya(E_NoticeType_Noya , float 2, const class FString& 3, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.触发Noya主动提示"));
		
		UFL_CustomMode_C_Noya_Params params {};
		params. = ;
		params.2 = 2;
		params.3 = 3;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.注册Noya被动提示
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_NoticeType_Noya                                                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      3                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TMap<unsigned char, bool>                          4                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            5                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_Noya(E_NoticeType_Noya , float 2, const class FString& 3, TMap<unsigned char, bool> 4, int32_t 5, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.注册Noya被动提示"));
		
		UFL_CustomMode_C_Noya_Params params {};
		params. = ;
		params.2 = 2;
		params.3 = 3;
		params.4 = 4;
		params.5 = 5;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.角色驾驶状态
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EDriveState UFL_CustomMode_C::STATIC_(class AActor* NewParam, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.角色驾驶状态"));
		
		UFL_CustomMode_C__Params params {};
		params.NewParam = NewParam;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.角色势力列表
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class AActor*>                                                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Result                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(TArray<class AActor*>* , class UObject* __WorldContext, TArray<class FString>* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.角色势力列表"));
		
		UFL_CustomMode_C__Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.坐标打点
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      str                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(const struct FVector& Vector, class UObject* __WorldContext, class FString* str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.坐标打点"));
		
		UFL_CustomMode_C__Params params {};
		params.Vector = Vector;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (str != nullptr)
			*str = params.str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.仅注册小地图标记物
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InMapMarkClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InMarkPos                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EdgeSupport                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMapMarkBase*                                Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(class UClass* InMapMarkClass, const struct FVector& InMarkPos, bool EdgeSupport, int32_t ZOrder, class UObject* __WorldContext, class UMapMarkBase** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.仅注册小地图标记物"));
		
		UFL_CustomMode_C__Params params {};
		params.InMapMarkClass = InMapMarkClass;
		params.InMarkPos = InMarkPos;
		params.EdgeSupport = EdgeSupport;
		params.ZOrder = ZOrder;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.角色健康状态
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarCharacter*                                                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CharacterHealthState                             2                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(class ASolarCharacter* , class UObject* __WorldContext, E_CharacterHealthState* 2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.角色健康状态"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (2 != nullptr)
			*2 = params.2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.获取地面高度
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     3                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               4                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_CustomMode_C::STATIC_(const struct FVector& , bool 2, class UObject* __WorldContext, struct FVector* 3, float* Z, bool* 4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.获取地面高度"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.2 = 2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (3 != nullptr)
			*3 = params.3;
		if (Z != nullptr)
			*Z = params.Z;
		if (4 != nullptr)
			*4 = params.4;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.ToInt(StringArray)
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              str                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Int                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_ToIntStringArray(TArray<class FString>* str, class UObject* __WorldContext, TArray<int32_t>* Int)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.ToInt(StringArray)"));
		
		UFL_CustomMode_C_ToIntStringArray_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (str != nullptr)
			*str = params.str;
		if (Int != nullptr)
			*Int = params.Int;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.是否为本地角色
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarCharacter*                                                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               2                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_CustomMode_C::STATIC_(class ASolarCharacter* , class UObject* __WorldContext, bool* 2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.是否为本地角色"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (2 != nullptr)
			*2 = params.2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.随机POP元素
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ASolarMapElementBase*>                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                                                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASolarMapElementBase*>                resault                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_POP(TArray<class ASolarMapElementBase*>* Array, int32_t , class UObject* __WorldContext, TArray<class ASolarMapElementBase*>* resault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.随机POP元素"));
		
		UFL_CustomMode_C_POP_Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (resault != nullptr)
			*resault = params.resault;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.设置可见性
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visiable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(class UWidget* Target, bool Visiable, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.设置可见性"));
		
		UFL_CustomMode_C__Params params {};
		params.Target = Target;
		params.Visiable = Visiable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.获取页码数量
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageCapacity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(int32_t ItemCount, int32_t PageCapacity, class UObject* __WorldContext, int32_t* PageCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.获取页码数量"));
		
		UFL_CustomMode_C__Params params {};
		params.ItemCount = ItemCount;
		params.PageCapacity = PageCapacity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PageCount != nullptr)
			*PageCount = params.PageCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.物品下标
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                                                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            3                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            4                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(int32_t , int32_t 2, int32_t 3, class UObject* __WorldContext, int32_t* 4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.物品下标"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.2 = 2;
		params.3 = 3;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (4 != nullptr)
			*4 = params.4;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.切换控件可见性
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(class UUserWidget* Target, class UObject* __WorldContext, bool* Visible, class UUserWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.切换控件可见性"));
		
		UFL_CustomMode_C__Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.角色是否存活
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarCharacter*                                                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               2                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_CustomMode_C::STATIC_(class ASolarCharacter* , class UObject* __WorldContext, bool* 2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.角色是否存活"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (2 != nullptr)
			*2 = params.2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.触发提示
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		E_NoticeLevel                                      3                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_(class UObject* , const class FString& 2, E_NoticeLevel 3, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.触发提示"));
		
		UFL_CustomMode_C__Params params {};
		params. = ;
		params.2 = 2;
		params.3 = 3;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_CustomMode.FL_CustomMode_C.Convert(ToString)
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      KeyString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_CustomMode_C::STATIC_ConvertToString(const struct FKey& Key, class UObject* __WorldContext, class FString* KeyString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_CustomMode.FL_CustomMode_C.Convert(ToString)"));
		
		UFL_CustomMode_C_ConvertToString_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyString != nullptr)
			*KeyString = params.KeyString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_CustomMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_CustomMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass FL_CustomMode.FL_CustomMode_C"));
		return ptr;
	}

}


