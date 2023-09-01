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
	 * 		RVA    -> 0x009A2F60
	 * 		Name   -> Function LimNative.LimNative.TranslateText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeSupportedLanguage                        InLang                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraInfo                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_TranslateText(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.TranslateText");
		
		ULimNative_TranslateText_Params params {};
		params.InCtx = InCtx;
		params.InText = InText;
		params.InLang = InLang;
		params.ExtraInfo = ExtraInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A2E40
	 * 		Name   -> Function LimNative.LimNative.SetResDir
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InResDir                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetResDir(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InResDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetResDir");
		
		ULimNative_SetResDir_Params params {};
		params.InCtx = InCtx;
		params.InResDir = InResDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A2CE0
	 * 		Name   -> Function LimNative.LimNative.SetMsgState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeSetMsgState                       SetMsgParams                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetMsgState(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeSetMsgState& SetMsgParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetMsgState");
		
		ULimNative_SetMsgState_Params params {};
		params.InCtx = InCtx;
		params.SetMsgParams = SetMsgParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A2C30
	 * 		Name   -> Function LimNative.LimNative.SetLogHandler
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetLogHandler(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetLogHandler");
		
		ULimNative_SetLogHandler_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A2B30
	 * 		Name   -> Function LimNative.LimNative.SetLanguage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ELimNativeSupportedLanguage                        InLanguage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetLanguage(const struct FLimNativeLowLevelWrapper& InCtx, ELimNativeSupportedLanguage InLanguage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetLanguage");
		
		ULimNative_SetLanguage_Params params {};
		params.InCtx = InCtx;
		params.InLanguage = InLanguage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A2970
	 * 		Name   -> Function LimNative.LimNative.SetGroupAttr
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetGroupAttr");
		
		ULimNative_SetGroupAttr_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A28C0
	 * 		Name   -> Function LimNative.LimNative.SetEventHandler
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetEventHandler(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetEventHandler");
		
		ULimNative_SetEventHandler_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A26B0
	 * 		Name   -> Function LimNative.LimNative.SetConvRead
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsgID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetConvRead(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& InMsgID, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetConvRead");
		
		ULimNative_SetConvRead_Params params {};
		params.InCtx = InCtx;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.InMsgID = InMsgID;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A2400
	 * 		Name   -> Function LimNative.LimNative.SetAllConfig
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeInitConfig                        InConfig                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SetAllConfig(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeInitConfig& InConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SetAllConfig");
		
		ULimNative_SetAllConfig_Params params {};
		params.InCtx = InCtx;
		params.InConfig = InConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A2070
	 * 		Name   -> Function LimNative.LimNative.SendVoiceMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMVoiceMessage                    VoiceMsg                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SendVoiceMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SendVoiceMsg");
		
		ULimNative_SendVoiceMsg_Params params {};
		params.InCtx = InCtx;
		params.VoiceMsg = VoiceMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A1D20
	 * 		Name   -> Function LimNative.LimNative.SendTextWithAtMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMTextWithAtMessage               TextWithAtMsg                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SendTextWithAtMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SendTextWithAtMsg");
		
		ULimNative_SendTextWithAtMsg_Params params {};
		params.InCtx = InCtx;
		params.TextWithAtMsg = TextWithAtMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A19D0
	 * 		Name   -> Function LimNative.LimNative.SendTextMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMTextMessage                     TextMsg                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SendTextMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SendTextMsg");
		
		ULimNative_SendTextMsg_Params params {};
		params.InCtx = InCtx;
		params.TextMsg = TextMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A1600
	 * 		Name   -> Function LimNative.LimNative.SendShareMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMShareMessage                    ShareMsg                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SendShareMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SendShareMsg");
		
		ULimNative_SendShareMsg_Params params {};
		params.InCtx = InCtx;
		params.ShareMsg = ShareMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A1260
	 * 		Name   -> Function LimNative.LimNative.SendImageMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMImageMessage                    ImageMsg                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SendImageMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SendImageMsg");
		
		ULimNative_SendImageMsg_Params params {};
		params.InCtx = InCtx;
		params.ImageMsg = ImageMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A0EA0
	 * 		Name   -> Function LimNative.LimNative.SendEmotionMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMEmotionMessage                  EmotionMsg                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_SendEmotionMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.SendEmotionMsg");
		
		ULimNative_SendEmotionMsg_Params params {};
		params.InCtx = InCtx;
		params.EmotionMsg = EmotionMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A0B80
	 * 		Name   -> Function LimNative.LimNative.RevokeVoiceMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMVoiceMessage                    VoiceMsg                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RevokeVoiceMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RevokeVoiceMsg");
		
		ULimNative_RevokeVoiceMsg_Params params {};
		params.InCtx = InCtx;
		params.VoiceMsg = VoiceMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A0890
	 * 		Name   -> Function LimNative.LimNative.RevokeTextWithAtMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMTextWithAtMessage               TextWithAtMsg                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RevokeTextWithAtMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RevokeTextWithAtMsg");
		
		ULimNative_RevokeTextWithAtMsg_Params params {};
		params.InCtx = InCtx;
		params.TextWithAtMsg = TextWithAtMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A05A0
	 * 		Name   -> Function LimNative.LimNative.RevokeTextMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMTextMessage                     TextMsg                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RevokeTextMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RevokeTextMsg");
		
		ULimNative_RevokeTextMsg_Params params {};
		params.InCtx = InCtx;
		params.TextMsg = TextMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009A0220
	 * 		Name   -> Function LimNative.LimNative.RevokeShareMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMShareMessage                    ShareMsg                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RevokeShareMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RevokeShareMsg");
		
		ULimNative_RevokeShareMsg_Params params {};
		params.InCtx = InCtx;
		params.ShareMsg = ShareMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099FED0
	 * 		Name   -> Function LimNative.LimNative.RevokeImageMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMImageMessage                    ImageMsg                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RevokeImageMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RevokeImageMsg");
		
		ULimNative_RevokeImageMsg_Params params {};
		params.InCtx = InCtx;
		params.ImageMsg = ImageMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099FB60
	 * 		Name   -> Function LimNative.LimNative.RevokeEmotionMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMEmotionMessage                  EmotionMsg                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RevokeEmotionMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RevokeEmotionMsg");
		
		ULimNative_RevokeEmotionMsg_Params params {};
		params.InCtx = InCtx;
		params.EmotionMsg = EmotionMsg;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Nonce = Nonce;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099F9F0
	 * 		Name   -> Function LimNative.LimNative.ReportMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InType                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsg                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_ReportMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InType, const class FString& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.ReportMsg");
		
		ULimNative_ReportMsg_Params params {};
		params.InCtx = InCtx;
		params.InType = InType;
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099F880
	 * 		Name   -> Function LimNative.LimNative.RemoveGroupMember
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      memberid                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RemoveGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& memberid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RemoveGroupMember");
		
		ULimNative_RemoveGroupMember_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		params.memberid = memberid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099F760
	 * 		Name   -> Function LimNative.LimNative.RemoveFromBlockee
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RemoveFromBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RemoveFromBlockee");
		
		ULimNative_RemoveFromBlockee_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099F5F0
	 * 		Name   -> Function LimNative.LimNative.RemoveFriend
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RemoveFriend(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RemoveFriend");
		
		ULimNative_RemoveFriend_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099F480
	 * 		Name   -> Function LimNative.LimNative.RefuseFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRequestID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_RefuseFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.RefuseFriendRequest");
		
		ULimNative_RefuseFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InRequestID = InRequestID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099F360
	 * 		Name   -> Function LimNative.LimNative.QuitGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_QuitGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.QuitGroup");
		
		ULimNative_QuitGroup_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099EB90
	 * 		Name   -> Function LimNative.LimNative.PostInitLIM
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeReportConfig                      ReportConfig                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeParkConfig                        ParkConfig                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_PostInitLIM(const struct FLimNativeLowLevelWrapper& ctx, const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.PostInitLIM");
		
		ULimNative_PostInitLIM_Params params {};
		params.ctx = ctx;
		params.ReportConfig = ReportConfig;
		params.ParkConfig = ParkConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099EAE0
	 * 		Name   -> Function LimNative.LimNative.MsgsGetCommon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_MsgsGetCommon(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.MsgsGetCommon");
		
		ULimNative_MsgsGetCommon_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099EA30
	 * 		Name   -> Function LimNative.LimNative.Logout
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_Logout(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.Logout");
		
		ULimNative_Logout_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099E8C0
	 * 		Name   -> Function LimNative.LimNative.LoginV2
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InEnvId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRoleID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_LoginV2(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnvId, const class FString& InRoleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.LoginV2");
		
		ULimNative_LoginV2_Params params {};
		params.InCtx = InCtx;
		params.InEnvId = InEnvId;
		params.InRoleID = InRoleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099E640
	 * 		Name   -> Function LimNative.LimNative.Login
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppUserID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRoleID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_Login(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.Login");
		
		ULimNative_Login_Params params {};
		params.InCtx = InCtx;
		params.InAppId = InAppId;
		params.InAppUserID = InAppUserID;
		params.InToken = InToken;
		params.InRoleID = InRoleID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnTranslateTextDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeTextTranslateCallBack             RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnTranslateTextDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeTextTranslateCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnTranslateTextDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnTranslateTextDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetResDirDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeResDirConfig                      RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetResDirDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeResDirConfig& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetResDirDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetResDirDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetReportConfigDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeReportConfig                      RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetReportConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeReportConfig& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetReportConfigDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetReportConfigDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetParkConfigDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeParkConfig                        RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetParkConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeParkConfig& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetParkConfigDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetParkConfigDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetMsgStateDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnSetMsgStateCallBack             RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetMsgStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSetMsgStateCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetMsgStateDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetMsgStateDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetLanguageDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeLanguageConfig                    RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetLanguageDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeLanguageConfig& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetLanguageDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetLanguageDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetGroupAttrDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupAttrSetCallBack            RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetGroupAttrDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupAttrSetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetGroupAttrDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetGroupAttrDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetConvReadDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnSetConvReadCallBack             RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetConvReadDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSetConvReadCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetConvReadDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetConvReadDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSetAllConfigDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeInitConfig                        RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSetAllConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeInitConfig& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSetAllConfigDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSetAllConfigDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnSendMsgDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnSendMsgCallBack                 RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnSendMsgDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSendMsgCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnSendMsgDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnSendMsgDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnRevokeMsgDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnRevokeMsgCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnRevokeMsgDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnRevokeMsgCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnRevokeMsgDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnRevokeMsgDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnReportMsgDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeDataCallBackBase                  RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnReportMsgDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeDataCallBackBase& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnReportMsgDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnReportMsgDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupMemberRemoveCallBack       RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMemberRemoveCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeFriendCommonCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnRemoveFriendDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeFriendCommonCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnRemoveFriendDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnRemoveFriendDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnRemoveFriendDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeFriendCommonCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnQuitGroupDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupQuitCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnQuitGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupQuitCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnQuitGroupDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnQuitGroupDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnNetConnectStateDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EventCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnNetConnectStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, int32_t EventCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnNetConnectStateDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnNetConnectStateDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.EventCode = EventCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnMsgRevokedDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnMsgRevokedEventCallBack         RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnMsgRevokedDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgRevokedEventCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnMsgRevokedDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnMsgRevokedDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnMsgReceivedDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnMsgReceivedEventCallBack        RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnMsgReceivedDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgReceivedEventCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnMsgReceivedDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnMsgReceivedDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnMsgLogicReceivedEventCallBack   RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnLogoutDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnLogoutCallBack                  RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnLogoutDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnLogoutCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnLogoutDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnLogoutDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnLoginDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnLoginCallBack                   RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnLoginDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnLoginCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnLoginDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnLoginDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnJoinGroupDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupJoinCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnJoinGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupJoinCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnJoinGroupDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnJoinGroupDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetUsersStateDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetUsersStateCallBack           RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetUsersStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersStateCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetUsersStateDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetUsersStateDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetUsersDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetUsersCallBack                RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetUsersDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetUsersDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetUsersDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetUserDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetUserCallBack                 RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetUserDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUserCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetUserDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetUserDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetOssTokenDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeGetOssTokenCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetOssTokenDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetOssTokenCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetOssTokenDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetOssTokenDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetMsgsDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetMsgsCallBack                 RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetMsgsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetMsgsCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetMsgsDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetMsgsDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeGetMiscConfigInfoCallBack         RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetMiscConfigInfoCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetGroupsDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupsGetCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetGroupsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupsGetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetGroupsDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetGroupsDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetGroupMembersDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupMembersGetCallBack         RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetGroupMembersDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMembersGetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetGroupMembersDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetGroupMembersDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetGroupMemberDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupMemberGetCallBack          RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetGroupMemberDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMemberGetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetGroupMemberDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetGroupMemberDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetGroupDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupGetCallBack                RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupGetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetGroupDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetGroupDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetGroupAttrDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupAttrGetCallBack            RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetGroupAttrDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupAttrGetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetGroupAttrDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetGroupAttrDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetGMETokenDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeGetGMETokenCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetGMETokenDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetGMETokenCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetGMETokenDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetGMETokenDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetFriendsDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetFriendCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetFriendsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetFriendCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetFriendsDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetFriendsDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetFriendRequestCallBack        RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetFriendRequestCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetConvChatLevelConfigCallBack  RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetConnStateDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeGetConnStateCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetConnStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetConnStateCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetConnStateDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetConnStateDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetConfigDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetConfigCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetConfigCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetConfigDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetConfigDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetCommonMsgsCallBack           RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetCommonMsgsCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetBlockeesDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetBlockeesCallBack             RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetBlockeesDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetBlockeesCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetBlockeesDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetBlockeesDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupAttrGetAllCallBack         RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupAttrGetAllCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnDestoryGroupDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupDestoryCallBack            RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnDestoryGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupDestoryCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnDestoryGroupDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnDestoryGroupDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnCreateGroupDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnCreateGroupCallBack             RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnCreateGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnCreateGroupCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnCreateGroupDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnCreateGroupDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnCreateFriendRequestCallBack     RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnCreateFriendRequestCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnConvsGetDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnConvsGetCallBack                RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnConvsGetDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvsGetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnConvsGetDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnConvsGetDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnConvHandleynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnConvHandleCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnConvHandleynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvHandleCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnConvHandleynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnConvHandleynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnCheckImageDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeDataCallBackBase                  RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnCheckImageDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeDataCallBackBase& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnCheckImageDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnCheckImageDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeFriendCommonCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnAddToBlockeeDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeFriendCommonCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnAddToBlockeeDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnAddToBlockeeDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnAddToBlockeeDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnAddGroupMemberDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGroupMemberAddCallBack          RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnAddGroupMemberDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMemberAddCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnAddGroupMemberDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnAddGroupMemberDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeFriendCommonCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMLogDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InData                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMLogDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMLogDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMLogDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNative.LIMEventDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InData                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::LIMEventDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNative.LIMEventDynamicDelegate__DelegateSignature");
		
		ULimNative_LIMEventDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099E520
	 * 		Name   -> Function LimNative.LimNative.JoinGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_JoinGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.JoinGroup");
		
		ULimNative_JoinGroup_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099E260
	 * 		Name   -> Function LimNative.LimNative.InitLIM
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InServerEnvID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeInitConfig                        InConfig                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeLowLevelWrapper ULimNative::STATIC_InitLIM(const class FString& InServerEnvID, const struct FLimNativeInitConfig& InConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.InitLIM");
		
		ULimNative_InitLIM_Params params {};
		params.InServerEnvID = InServerEnvID;
		params.InConfig = InConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099E110
	 * 		Name   -> Function LimNative.LimNative.GetUsersState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InUserIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetUsersState(const struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString> InUserIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetUsersState");
		
		ULimNative_GetUsersState_Params params {};
		params.InCtx = InCtx;
		params.InUserIDs = InUserIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099DFB0
	 * 		Name   -> Function LimNative.LimNative.GetUsers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FUidList                                    InUserIDs                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetUsers(const struct FLimNativeLowLevelWrapper& InCtx, const struct FUidList& InUserIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetUsers");
		
		ULimNative_GetUsers_Params params {};
		params.InCtx = InCtx;
		params.InUserIDs = InUserIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099DE90
	 * 		Name   -> Function LimNative.LimNative.GetUser
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetUser(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetUser");
		
		ULimNative_GetUser_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099DDE0
	 * 		Name   -> Function LimNative.LimNative.GetResDir
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetResDir(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetResDir");
		
		ULimNative_GetResDir_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099DD30
	 * 		Name   -> Function LimNative.LimNative.GetOssToken
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetOssToken(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetOssToken");
		
		ULimNative_GetOssToken_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099DC80
	 * 		Name   -> Function LimNative.LimNative.GetMiscConfigInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetMiscConfigInfo(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetMiscConfigInfo");
		
		ULimNative_GetMiscConfigInfo_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099DA70
	 * 		Name   -> Function LimNative.LimNative.GetMessagesByID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InFromMsgID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InToMsgID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetMessagesByID(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetMessagesByID");
		
		ULimNative_GetMessagesByID_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InFromMsgID = InFromMsgID;
		params.InToMsgID = InToMsgID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D910
	 * 		Name   -> Function LimNative.LimNative.GetLIMVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimNative::STATIC_GetLIMVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetLIMVersion");
		
		ULimNative_GetLIMVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099DA40
	 * 		Name   -> Function LimNative.LimNative.GetLimNativeInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULimNative* ULimNative::STATIC_GetLimNativeInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetLimNativeInstance");
		
		ULimNative_GetLimNativeInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D990
	 * 		Name   -> Function LimNative.LimNative.GetLanguage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetLanguage(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetLanguage");
		
		ULimNative_GetLanguage_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D7A0
	 * 		Name   -> Function LimNative.LimNative.GetGroups
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Size                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetGroups(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& Tag, const class FString& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetGroups");
		
		ULimNative_GetGroups_Params params {};
		params.InCtx = InCtx;
		params.Tag = Tag;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D5E0
	 * 		Name   -> Function LimNative.LimNative.GetGroupMembers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Size                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetGroupMembers(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& Tag, const class FString& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetGroupMembers");
		
		ULimNative_GetGroupMembers_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		params.Tag = Tag;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D470
	 * 		Name   -> Function LimNative.LimNative.GetGroupAttr
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetGroupAttr");
		
		ULimNative_GetGroupAttr_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D350
	 * 		Name   -> Function LimNative.LimNative.GetGroupAllAttr
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetGroupAllAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetGroupAllAttr");
		
		ULimNative_GetGroupAllAttr_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D230
	 * 		Name   -> Function LimNative.LimNative.GetGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetGroup");
		
		ULimNative_GetGroup_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D070
	 * 		Name   -> Function LimNative.LimNative.GetGMEToken
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRoomId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetGMEToken(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetGMEToken");
		
		ULimNative_GetGMEToken_Params params {};
		params.InCtx = InCtx;
		params.InAppId = InAppId;
		params.InUserId = InUserId;
		params.InRoomId = InRoomId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099CF60
	 * 		Name   -> Function LimNative.LimNative.GetFriendsV2
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               InNeedPresence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetFriendsV2(const struct FLimNativeLowLevelWrapper& InCtx, bool InNeedPresence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetFriendsV2");
		
		ULimNative_GetFriendsV2_Params params {};
		params.InCtx = InCtx;
		params.InNeedPresence = InNeedPresence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099CDB0
	 * 		Name   -> Function LimNative.LimNative.GetFriends
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InSize                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetFriends(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, const class FString& InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetFriends");
		
		ULimNative_GetFriends_Params params {};
		params.InCtx = InCtx;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099CC00
	 * 		Name   -> Function LimNative.LimNative.GetFriendRequests
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InSize                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetFriendRequests(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, const class FString& InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetFriendRequests");
		
		ULimNative_GetFriendRequests_Params params {};
		params.InCtx = InCtx;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099CB50
	 * 		Name   -> Function LimNative.LimNative.GetConvChatLevelConfig
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetConvChatLevelConfig(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetConvChatLevelConfig");
		
		ULimNative_GetConvChatLevelConfig_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099CAA0
	 * 		Name   -> Function LimNative.LimNative.GetConnState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetConnState(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetConnState");
		
		ULimNative_GetConnState_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C8F0
	 * 		Name   -> Function LimNative.LimNative.GetBlockees
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InSize                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetBlockees(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, const class FString& InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetBlockees");
		
		ULimNative_GetBlockees_Params params {};
		params.InCtx = InCtx;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C750
	 * 		Name   -> Function LimNative.LimNative.GetBeforeMessages
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MsgId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetBeforeMessages(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType, int32_t MsgId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetBeforeMessages");
		
		ULimNative_GetBeforeMessages_Params params {};
		params.InCtx = InCtx;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.MsgId = MsgId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C5B0
	 * 		Name   -> Function LimNative.LimNative.GetAfterMessages
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MsgId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_GetAfterMessages(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType, int32_t MsgId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.GetAfterMessages");
		
		ULimNative_GetAfterMessages_Params params {};
		params.InCtx = InCtx;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.MsgId = MsgId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C590
	 * 		Name   -> Function LimNative.LimNative.DestoryLimNativeInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULimNative::STATIC_DestoryLimNativeInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.DestoryLimNativeInstance");
		
		ULimNative_DestoryLimNativeInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C470
	 * 		Name   -> Function LimNative.LimNative.DestoryGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_DestoryGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.DestoryGroup");
		
		ULimNative_DestoryGroup_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C390
	 * 		Name   -> Function LimNative.LimNative.CreateLIM
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InServerEnvID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeLowLevelWrapper ULimNative::STATIC_CreateLIM(const class FString& InServerEnvID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.CreateLIM");
		
		ULimNative_CreateLIM_Params params {};
		params.InServerEnvID = InServerEnvID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C190
	 * 		Name   -> Function LimNative.LimNative.CreateGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              members                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_CreateGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& Name, TArray<class FString> members, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.CreateGroup");
		
		ULimNative_CreateGroup_Params params {};
		params.InCtx = InCtx;
		params.Name = Name;
		params.members = members;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099C020
	 * 		Name   -> Function LimNative.LimNative.CreateFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_CreateFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.CreateFriendRequest");
		
		ULimNative_CreateFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BEC0
	 * 		Name   -> Function LimNative.LimNative.ConversationsGet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_ConversationsGet(const struct FLimNativeLowLevelWrapper& InCtx, int32_t Size, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.ConversationsGet");
		
		ULimNative_ConversationsGet_Params params {};
		params.InCtx = InCtx;
		params.Size = Size;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BEA0
	 * 		Name   -> Function LimNative.LimNative.ConversationSetSticky
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULimNative::STATIC_ConversationSetSticky()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.ConversationSetSticky");
		
		ULimNative_ConversationSetSticky_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BEA0
	 * 		Name   -> Function LimNative.LimNative.ConversationSetRead
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULimNative::STATIC_ConversationSetRead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.ConversationSetRead");
		
		ULimNative_ConversationSetRead_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BEA0
	 * 		Name   -> Function LimNative.LimNative.ConversationSetMute
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULimNative::STATIC_ConversationSetMute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.ConversationSetMute");
		
		ULimNative_ConversationSetMute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BEA0
	 * 		Name   -> Function LimNative.LimNative.ConversationSetHide
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULimNative::STATIC_ConversationSetHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.ConversationSetHide");
		
		ULimNative_ConversationSetHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BD40
	 * 		Name   -> Function LimNative.LimNative.ConversationDiscard
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_ConversationDiscard(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.ConversationDiscard");
		
		ULimNative_ConversationDiscard_Params params {};
		params.InCtx = InCtx;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BC20
	 * 		Name   -> Function LimNative.LimNative.CheckImage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_CheckImage(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.CheckImage");
		
		ULimNative_CheckImage_Params params {};
		params.InCtx = InCtx;
		params.InUrl = InUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099BA60
	 * 		Name   -> Function LimNative.LimNative.CancelFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRequestID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_CancelFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.CancelFriendRequest");
		
		ULimNative_CancelFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		params.InRequestID = InRequestID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099B940
	 * 		Name   -> Function LimNative.LimNative.AddToBlockee
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_AddToBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.AddToBlockee");
		
		ULimNative_AddToBlockee_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099B7D0
	 * 		Name   -> Function LimNative.LimNative.AddGroupMember
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      groupid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      memberid                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_AddGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& memberid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.AddGroupMember");
		
		ULimNative_AddGroupMember_Params params {};
		params.InCtx = InCtx;
		params.groupid = groupid;
		params.memberid = memberid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099B660
	 * 		Name   -> Function LimNative.LimNative.AcceptFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRequestID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNative::STATIC_AcceptFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNative.AcceptFriendRequest");
		
		ULimNative_AcceptFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InRequestID = InRequestID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimNative.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimNative::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNative.LimNative");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B0C90
	 * 		Name   -> Function LimNative.LimNativeChatMsgReader.GetVoiceMessage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeIMChatMessage                     MsgStructWrapper                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMChatMessageInfo                 MsgInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeIMVoiceMessage ULimNativeChatMsgReader::STATIC_GetVoiceMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeChatMsgReader.GetVoiceMessage");
		
		ULimNativeChatMsgReader_GetVoiceMessage_Params params {};
		params.MsgStructWrapper = MsgStructWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgInfo != nullptr)
			*MsgInfo = params.MsgInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B09E0
	 * 		Name   -> Function LimNative.LimNativeChatMsgReader.GetTextMessage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeIMChatMessage                     MsgStructWrapper                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMChatMessageInfo                 MsgInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeIMTextMessage ULimNativeChatMsgReader::STATIC_GetTextMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeChatMsgReader.GetTextMessage");
		
		ULimNativeChatMsgReader_GetTextMessage_Params params {};
		params.MsgStructWrapper = MsgStructWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgInfo != nullptr)
			*MsgInfo = params.MsgInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B07B0
	 * 		Name   -> Function LimNative.LimNativeChatMsgReader.GetShareMessage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeIMChatMessage                     MsgStructWrapper                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMChatMessageInfo                 MsgInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeIMShareMessage ULimNativeChatMsgReader::STATIC_GetShareMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeChatMsgReader.GetShareMessage");
		
		ULimNativeChatMsgReader_GetShareMessage_Params params {};
		params.MsgStructWrapper = MsgStructWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgInfo != nullptr)
			*MsgInfo = params.MsgInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B0500
	 * 		Name   -> Function LimNative.LimNativeChatMsgReader.GetNotificationMessage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeIMChatMessage                     MsgStructWrapper                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMChatMessageInfo                 MsgInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeIMNotificationMessage ULimNativeChatMsgReader::STATIC_GetNotificationMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeChatMsgReader.GetNotificationMessage");
		
		ULimNativeChatMsgReader_GetNotificationMessage_Params params {};
		params.MsgStructWrapper = MsgStructWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgInfo != nullptr)
			*MsgInfo = params.MsgInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B0170
	 * 		Name   -> Function LimNative.LimNativeChatMsgReader.GetImageMessage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeIMChatMessage                     MsgStructWrapper                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMChatMessageInfo                 MsgInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeIMImageMessage ULimNativeChatMsgReader::STATIC_GetImageMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeChatMsgReader.GetImageMessage");
		
		ULimNativeChatMsgReader_GetImageMessage_Params params {};
		params.MsgStructWrapper = MsgStructWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgInfo != nullptr)
			*MsgInfo = params.MsgInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009AFE10
	 * 		Name   -> Function LimNative.LimNativeChatMsgReader.GetEmotionMessage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeIMChatMessage                     MsgStructWrapper                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeIMChatMessageInfo                 MsgInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeIMEmotionMessage ULimNativeChatMsgReader::STATIC_GetEmotionMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeChatMsgReader.GetEmotionMessage");
		
		ULimNativeChatMsgReader_GetEmotionMessage_Params params {};
		params.MsgStructWrapper = MsgStructWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgInfo != nullptr)
			*MsgInfo = params.MsgInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimNativeChatMsgReader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimNativeChatMsgReader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNative.LimNativeChatMsgReader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6D90
	 * 		Name   -> Function LimNative.LimNativeHelper.NameStringToEnumValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Enum                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EnumName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULimNativeHelper::STATIC_NameStringToEnumValue(const class FString& Enum, const class FString& EnumName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.NameStringToEnumValue");
		
		ULimNativeHelper_NameStringToEnumValue_Params params {};
		params.Enum = Enum;
		params.EnumName = EnumName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B63C0
	 * 		Name   -> Function LimNative.LimNativeHelper.GetUE4LogFilePath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimNativeHelper::STATIC_GetUE4LogFilePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.GetUE4LogFilePath");
		
		ULimNativeHelper_GetUE4LogFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943E60
	 * 		Name   -> Function LimNative.LimNativeHelper.GetSavedPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimNativeHelper::STATIC_GetSavedPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.GetSavedPath");
		
		ULimNativeHelper_GetSavedPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6340
	 * 		Name   -> Function LimNative.LimNativeHelper.GetProjectPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimNativeHelper::STATIC_GetProjectPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.GetProjectPath");
		
		ULimNativeHelper_GetProjectPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B62C0
	 * 		Name   -> Function LimNative.LimNativeHelper.GetProjectContentPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimNativeHelper::STATIC_GetProjectContentPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.GetProjectContentPath");
		
		ULimNativeHelper_GetProjectContentPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B53C0
	 * 		Name   -> Function LimNative.LimNativeHelper.GetGamePersistentDownloadDir
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimNativeHelper::STATIC_GetGamePersistentDownloadDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.GetGamePersistentDownloadDir");
		
		ULimNativeHelper_GetGamePersistentDownloadDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4DE0
	 * 		Name   -> Function LimNative.LimNativeHelper.GetFileText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULimNativeHelper::STATIC_GetFileText(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.GetFileText");
		
		ULimNativeHelper_GetFileText_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4D00
	 * 		Name   -> Function LimNative.LimNativeHelper.GetFileBinary
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULimNativeHelper::STATIC_GetFileBinary(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.GetFileBinary");
		
		ULimNativeHelper_GetFileBinary_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4240
	 * 		Name   -> Function LimNative.LimNativeHelper.EnumToStringArray
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Enum                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExcludeHidden                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULimNativeHelper::STATIC_EnumToStringArray(const class FString& Enum, bool bExcludeHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.EnumToStringArray");
		
		ULimNativeHelper_EnumToStringArray_Params params {};
		params.Enum = Enum;
		params.bExcludeHidden = bExcludeHidden;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4120
	 * 		Name   -> Function LimNative.LimNativeHelper.EnumToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Enum                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULimNativeHelper::STATIC_EnumToString(const class FString& Enum, int32_t EnumValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.EnumToString");
		
		ULimNativeHelper_EnumToString_Params params {};
		params.Enum = Enum;
		params.EnumValue = EnumValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3FF0
	 * 		Name   -> Function LimNative.LimNativeHelper.EnumToNameStringArray
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Enum                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExcludeHidden                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULimNativeHelper::STATIC_EnumToNameStringArray(const class FString& Enum, bool bExcludeHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.EnumToNameStringArray");
		
		ULimNativeHelper_EnumToNameStringArray_Params params {};
		params.Enum = Enum;
		params.bExcludeHidden = bExcludeHidden;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3ED0
	 * 		Name   -> Function LimNative.LimNativeHelper.EnumToNameString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Enum                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULimNativeHelper::STATIC_EnumToNameString(const class FString& Enum, int32_t EnumValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeHelper.EnumToNameString");
		
		ULimNativeHelper_EnumToNameString_Params params {};
		params.Enum = Enum;
		params.EnumValue = EnumValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimNativeHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimNativeHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNative.LimNativeHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B8900
	 * 		Name   -> Function LimNative.LimNativeLowLevel.TranslateText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeSupportedLanguage                        InLang                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraInfo                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_TranslateText(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.TranslateText");
		
		ULimNativeLowLevel_TranslateText_Params params {};
		params.InCtx = InCtx;
		params.InText = InText;
		params.InLang = InLang;
		params.ExtraInfo = ExtraInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B87E0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetMsgState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsgParams                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetMsgState(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsgParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetMsgState");
		
		ULimNativeLowLevel_SetMsgState_Params params {};
		params.InCtx = InCtx;
		params.InMsgParams = InMsgParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B85D0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetMsgRead
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsgID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetMsgRead(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetMsgRead");
		
		ULimNativeLowLevel_SetMsgRead_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InMsgID = InMsgID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B8520
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetLogHandler
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetLogHandler(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetLogHandler");
		
		ULimNativeLowLevel_SetLogHandler_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B8360
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetGroupAttr
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey, const class FString& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetGroupAttr");
		
		ULimNativeLowLevel_SetGroupAttr_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		params.InKey = InKey;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B81A0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InGroupName, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetGroup");
		
		ULimNativeLowLevel_SetGroup_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		params.InGroupName = InGroupName;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B80F0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetEventHandler
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetEventHandler(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetEventHandler");
		
		ULimNativeLowLevel_SetEventHandler_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7F50
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetConvSticky
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSticky                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetConvSticky(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, bool bSticky)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetConvSticky");
		
		ULimNativeLowLevel_SetConvSticky_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.bSticky = bSticky;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7D40
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetConvRead
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsgID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetConvRead(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetConvRead");
		
		ULimNativeLowLevel_SetConvRead_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InMsgID = InMsgID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7BA0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetConvMute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMute                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetConvMute(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, bool bMute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetConvMute");
		
		ULimNativeLowLevel_SetConvMute_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.bMute = bMute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7990
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetConvAttr
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetConvAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InKey, const class FString& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetConvAttr");
		
		ULimNativeLowLevel_SetConvAttr_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InKey = InKey;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7870
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SetAllConfigs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InJsonString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SetAllConfigs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SetAllConfigs");
		
		ULimNativeLowLevel_SetAllConfigs_Params params {};
		params.InCtx = InCtx;
		params.InJsonString = InJsonString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7750
	 * 		Name   -> Function LimNative.LimNativeLowLevel.SendMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsg                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_SendMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.SendMsg");
		
		ULimNativeLowLevel_SendMsg_Params params {};
		params.InCtx = InCtx;
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7630
	 * 		Name   -> Function LimNative.LimNativeLowLevel.RevokeMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsg                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_RevokeMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.RevokeMsg");
		
		ULimNativeLowLevel_RevokeMsg_Params params {};
		params.InCtx = InCtx;
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D990
	 * 		Name   -> Function LimNative.LimNativeLowLevel.Resume
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_Resume(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.Resume");
		
		ULimNativeLowLevel_Resume_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7510
	 * 		Name   -> Function LimNative.LimNativeLowLevel.ReportMsg
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsg                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_ReportMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.ReportMsg");
		
		ULimNativeLowLevel_ReportMsg_Params params {};
		params.InCtx = InCtx;
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B73A0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.RemoveGroupMember
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMemberID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_RemoveGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.RemoveGroupMember");
		
		ULimNativeLowLevel_RemoveGroupMember_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		params.InMemberID = InMemberID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7280
	 * 		Name   -> Function LimNative.LimNativeLowLevel.RemoveFromBlockee
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_RemoveFromBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.RemoveFromBlockee");
		
		ULimNativeLowLevel_RemoveFromBlockee_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B7110
	 * 		Name   -> Function LimNative.LimNativeLowLevel.RemoveFriend
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_RemoveFriend(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.RemoveFriend");
		
		ULimNativeLowLevel_RemoveFriend_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6FA0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.RefuseFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRequestID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_RefuseFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.RefuseFriendRequest");
		
		ULimNativeLowLevel_RefuseFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InRequestID = InRequestID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6E80
	 * 		Name   -> Function LimNative.LimNativeLowLevel.QuitGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_QuitGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.QuitGroup");
		
		ULimNativeLowLevel_QuitGroup_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D990
	 * 		Name   -> Function LimNative.LimNativeLowLevel.Pause
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_Pause(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.Pause");
		
		ULimNativeLowLevel_Pause_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6CE0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.Logout
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_Logout(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.Logout");
		
		ULimNativeLowLevel_Logout_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6B70
	 * 		Name   -> Function LimNative.LimNativeLowLevel.LoginV2
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InEnv                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRoleID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_LoginV2(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnv, const class FString& InRoleID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.LoginV2");
		
		ULimNativeLowLevel_LoginV2_Params params {};
		params.InCtx = InCtx;
		params.InEnv = InEnv;
		params.InRoleID = InRoleID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B68F0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.Login
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppUserID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRoleID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_Login(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.Login");
		
		ULimNativeLowLevel_Login_Params params {};
		params.InCtx = InCtx;
		params.InAppId = InAppId;
		params.InAppUserID = InAppUserID;
		params.InToken = InToken;
		params.InRoleID = InRoleID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNativeLowLevel.LIMResultDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InData                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::LIMResultDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNativeLowLevel.LIMResultDynamicDelegate__DelegateSignature");
		
		ULimNativeLowLevel_LIMResultDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNativeLowLevel.LIMLogDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InData                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::LIMLogDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNativeLowLevel.LIMLogDynamicDelegate__DelegateSignature");
		
		ULimNativeLowLevel_LIMLogDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction LimNative.LimNativeLowLevel.LIMEventDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InData                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::LIMEventDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNative.LimNativeLowLevel.LIMEventDynamicDelegate__DelegateSignature");
		
		ULimNativeLowLevel_LIMEventDynamicDelegate__DelegateSignature_Params params {};
		params.InWrapper = InWrapper;
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B67D0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.JoinGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_JoinGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.JoinGroup");
		
		ULimNativeLowLevel_JoinGroup_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6680
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetUsersState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InUserIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetUsersState(const struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString> InUserIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetUsersState");
		
		ULimNativeLowLevel_GetUsersState_Params params {};
		params.InCtx = InCtx;
		params.InUserIDs = InUserIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6560
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetUsers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserIDs                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetUsers(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetUsers");
		
		ULimNativeLowLevel_GetUsers_Params params {};
		params.InCtx = InCtx;
		params.InUserIDs = InUserIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6440
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetUser
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetUser(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetUser");
		
		ULimNativeLowLevel_GetUser_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6210
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetOssToken
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetOssToken(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetOssToken");
		
		ULimNativeLowLevel_GetOssToken_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B6000
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetMsgsV2
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InFromMsgID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InToMsgID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetMsgsV2(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetMsgsV2");
		
		ULimNativeLowLevel_GetMsgsV2_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InFromMsgID = InFromMsgID;
		params.InToMsgID = InToMsgID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5DC0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetMsgs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeMsgDirType                               InDir                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMsgID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetMsgs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, ELimNativeMsgDirType InDir, const class FString& InMsgID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetMsgs");
		
		ULimNativeLowLevel_GetMsgs_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InDir = InDir;
		params.InMsgID = InMsgID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5D10
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetMiscConfigInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetMiscConfigInfo(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetMiscConfigInfo");
		
		ULimNativeLowLevel_GetMiscConfigInfo_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0099D910
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetLIMVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimNativeLowLevel::STATIC_GetLIMVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetLIMVersion");
		
		ULimNativeLowLevel_GetLIMVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5CE0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULimNativeLowLevel* ULimNativeLowLevel::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetInstance");
		
		ULimNativeLowLevel_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5B40
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetGroups
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetGroups(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetGroups");
		
		ULimNativeLowLevel_GetGroups_Params params {};
		params.InCtx = InCtx;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5960
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetGroupMembers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetGroupMembers(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, int32_t InTag, int32_t InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetGroupMembers");
		
		ULimNativeLowLevel_GetGroupMembers_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B57F0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetGroupMember
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMemberID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetGroupMember");
		
		ULimNativeLowLevel_GetGroupMember_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		params.InMemberID = InMemberID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5680
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetGroupAttr
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetGroupAttr");
		
		ULimNativeLowLevel_GetGroupAttr_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5560
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetGroupAllAttrs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetGroupAllAttrs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetGroupAllAttrs");
		
		ULimNativeLowLevel_GetGroupAllAttrs_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5440
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetGroup");
		
		ULimNativeLowLevel_GetGroup_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5200
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetGMEToken
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRoomId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetGMEToken(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetGMEToken");
		
		ULimNativeLowLevel_GetGMEToken_Params params {};
		params.InCtx = InCtx;
		params.InAppId = InAppId;
		params.InUserId = InUserId;
		params.InRoomId = InRoomId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5060
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetFriends
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetFriends(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetFriends");
		
		ULimNativeLowLevel_GetFriends_Params params {};
		params.InCtx = InCtx;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4EC0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetFriendRequests
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetFriendRequests(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetFriendRequests");
		
		ULimNativeLowLevel_GetFriendRequests_Params params {};
		params.InCtx = InCtx;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4BA0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetConvs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetConvs(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetConvs");
		
		ULimNativeLowLevel_GetConvs_Params params {};
		params.InCtx = InCtx;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4AF0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetConvChatLevelConfig
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetConvChatLevelConfig(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetConvChatLevelConfig");
		
		ULimNativeLowLevel_GetConvChatLevelConfig_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4930
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetConvAttr
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetConvAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetConvAttr");
		
		ULimNativeLowLevel_GetConvAttr_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B47D0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetConvAllAttrs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetConvAllAttrs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetConvAllAttrs");
		
		ULimNativeLowLevel_GetConvAllAttrs_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4670
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetConv
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetConv");
		
		ULimNativeLowLevel_GetConv_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B45C0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetConnState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetConnState(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetConnState");
		
		ULimNativeLowLevel_GetConnState_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4420
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetBlockees
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetBlockees(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetBlockees");
		
		ULimNativeLowLevel_GetBlockees_Params params {};
		params.InCtx = InCtx;
		params.InTag = InTag;
		params.InSize = InSize;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B4370
	 * 		Name   -> Function LimNative.LimNativeLowLevel.GetAllConfigs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_GetAllConfigs(const struct FLimNativeLowLevelWrapper& InCtx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.GetAllConfigs");
		
		ULimNativeLowLevel_GetAllConfigs_Params params {};
		params.InCtx = InCtx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3DB0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.DestroyGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_DestroyGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.DestroyGroup");
		
		ULimNativeLowLevel_DestroyGroup_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3C50
	 * 		Name   -> Function LimNative.LimNativeLowLevel.DestroyConv
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_DestroyConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.DestroyConv");
		
		ULimNativeLowLevel_DestroyConv_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3C30
	 * 		Name   -> Function LimNative.LimNativeLowLevel.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULimNativeLowLevel::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.DestoryInstance");
		
		ULimNativeLowLevel_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3B10
	 * 		Name   -> Function LimNative.LimNativeLowLevel.CreateLIM
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InServerEnvID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLimNativeLowLevelWrapper ULimNativeLowLevel::STATIC_CreateLIM(const class FString& InServerEnvID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.CreateLIM");
		
		ULimNativeLowLevel_CreateLIM_Params params {};
		params.InServerEnvID = InServerEnvID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3870
	 * 		Name   -> Function LimNative.LimNativeLowLevel.CreateGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InMembers                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_CreateGroup(const struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString> InMembers, const class FString& InGroupName, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.CreateGroup");
		
		ULimNativeLowLevel_CreateGroup_Params params {};
		params.InCtx = InCtx;
		params.InMembers = InMembers;
		params.InGroupName = InGroupName;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3700
	 * 		Name   -> Function LimNative.LimNativeLowLevel.CreateFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_CreateFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.CreateFriendRequest");
		
		ULimNativeLowLevel_CreateFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3540
	 * 		Name   -> Function LimNative.LimNativeLowLevel.CreateConv
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_CreateConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.CreateConv");
		
		ULimNativeLowLevel_CreateConv_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B33E0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.ClearConv
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InConvID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 InConvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_ClearConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.ClearConv");
		
		ULimNativeLowLevel_ClearConv_Params params {};
		params.InCtx = InCtx;
		params.InConvID = InConvID;
		params.InConvType = InConvType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B32C0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.CheckImage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_CheckImage(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.CheckImage");
		
		ULimNativeLowLevel_CheckImage_Params params {};
		params.InCtx = InCtx;
		params.InUrl = InUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B3100
	 * 		Name   -> Function LimNative.LimNativeLowLevel.CancelFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRequestID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_CancelFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.CancelFriendRequest");
		
		ULimNativeLowLevel_CancelFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		params.InRequestID = InRequestID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B2FE0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.Call
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InJsonString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_Call(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.Call");
		
		ULimNativeLowLevel_Call_Params params {};
		params.InCtx = InCtx;
		params.InJsonString = InJsonString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B2EC0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.BlockeeExists
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_BlockeeExists(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.BlockeeExists");
		
		ULimNativeLowLevel_BlockeeExists_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B2DA0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.AddToBlockee
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_AddToBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.AddToBlockee");
		
		ULimNativeLowLevel_AddToBlockee_Params params {};
		params.InCtx = InCtx;
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B2C30
	 * 		Name   -> Function LimNative.LimNativeLowLevel.AddGroupMember
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGroupID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMemberID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_AddGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.AddGroupMember");
		
		ULimNativeLowLevel_AddGroupMember_Params params {};
		params.InCtx = InCtx;
		params.InGroupID = InGroupID;
		params.InMemberID = InMemberID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B2AC0
	 * 		Name   -> Function LimNative.LimNativeLowLevel.AcceptFriendRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InCtx                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRequestID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimNativeLowLevel::STATIC_AcceptFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNative.LimNativeLowLevel.AcceptFriendRequest");
		
		ULimNativeLowLevel_AcceptFriendRequest_Params params {};
		params.InCtx = InCtx;
		params.InRequestID = InRequestID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimNativeLowLevel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimNativeLowLevel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNative.LimNativeLowLevel");
		return ptr;
	}

}


