#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LimNative.LimNative
// (None)

class UClass* ULimNative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimNative");

	return Clss;
}


// LimNative LimNative.Default__LimNative
// (Public, ClassDefaultObject, ArchetypeObject)

class ULimNative* ULimNative::GetDefaultObj()
{
	static class ULimNative* Default = nullptr;

	if (!Default)
		Default = static_cast<ULimNative*>(ULimNative::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNative.LimNative.TranslateText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InText                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeSupportedLanguageInLang                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::TranslateText(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, enum class ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "TranslateText");

	Params::ULimNative_TranslateText_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InText = InText;
	Parms.InLang = InLang;
	Parms.ExtraInfo = ExtraInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetResDir
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InResDir                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SetResDir(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InResDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetResDir");

	Params::ULimNative_SetResDir_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InResDir = InResDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetMsgState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeSetMsgState       SetMsgParams                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::SetMsgState(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeSetMsgState& SetMsgParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetMsgState");

	Params::ULimNative_SetMsgState_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.SetMsgParams = SetMsgParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetLogHandler
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::SetLogHandler(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetLogHandler");

	Params::ULimNative_SetLogHandler_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetLanguage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ELimNativeSupportedLanguageInLanguage                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SetLanguage(struct FLimNativeLowLevelWrapper& InCtx, enum class ELimNativeSupportedLanguage InLanguage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetLanguage");

	Params::ULimNative_SetLanguage_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InLanguage = InLanguage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetGroupAttr
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetGroupAttr");

	Params::ULimNative_SetGroupAttr_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetEventHandler
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::SetEventHandler(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetEventHandler");

	Params::ULimNative_SetEventHandler_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetConvRead
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMsgID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SetConvRead(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& InMsgID, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetConvRead");

	Params::ULimNative_SetConvRead_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.InMsgID = InMsgID;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SetAllConfig
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeInitConfig        InConfig                                                         (Parm, NativeAccessSpecifierPublic)

void ULimNative::SetAllConfig(struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeInitConfig& InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SetAllConfig");

	Params::ULimNative_SetAllConfig_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConfig = InConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SendVoiceMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMVoiceMessage    VoiceMsg                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SendVoiceMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SendVoiceMsg");

	Params::ULimNative_SendVoiceMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.VoiceMsg = VoiceMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SendTextWithAtMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMTextWithAtMessageTextWithAtMsg                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SendTextWithAtMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SendTextWithAtMsg");

	Params::ULimNative_SendTextWithAtMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.TextWithAtMsg = TextWithAtMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SendTextMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMTextMessage     TextMsg                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SendTextMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SendTextMsg");

	Params::ULimNative_SendTextMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.TextMsg = TextMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SendShareMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMShareMessage    ShareMsg                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SendShareMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SendShareMsg");

	Params::ULimNative_SendShareMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ShareMsg = ShareMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SendImageMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMImageMessage    ImageMsg                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SendImageMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SendImageMsg");

	Params::ULimNative_SendImageMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ImageMsg = ImageMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.SendEmotionMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMEmotionMessage  EmotionMsg                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::SendEmotionMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "SendEmotionMsg");

	Params::ULimNative_SendEmotionMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.EmotionMsg = EmotionMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RevokeVoiceMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMVoiceMessage    VoiceMsg                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RevokeVoiceMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RevokeVoiceMsg");

	Params::ULimNative_RevokeVoiceMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.VoiceMsg = VoiceMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RevokeTextWithAtMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMTextWithAtMessageTextWithAtMsg                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RevokeTextWithAtMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RevokeTextWithAtMsg");

	Params::ULimNative_RevokeTextWithAtMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.TextWithAtMsg = TextWithAtMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RevokeTextMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMTextMessage     TextMsg                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RevokeTextMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RevokeTextMsg");

	Params::ULimNative_RevokeTextMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.TextMsg = TextMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RevokeShareMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMShareMessage    ShareMsg                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RevokeShareMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RevokeShareMsg");

	Params::ULimNative_RevokeShareMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ShareMsg = ShareMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RevokeImageMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMImageMessage    ImageMsg                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RevokeImageMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RevokeImageMsg");

	Params::ULimNative_RevokeImageMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ImageMsg = ImageMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RevokeEmotionMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMEmotionMessage  EmotionMsg                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Nonce                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Timestamp                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RevokeEmotionMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RevokeEmotionMsg");

	Params::ULimNative_RevokeEmotionMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.EmotionMsg = EmotionMsg;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Nonce = Nonce;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.ReportMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InType                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMsg                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::ReportMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InType, const class FString& InMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "ReportMsg");

	Params::ULimNative_ReportMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InType = InType;
	Parms.InMsg = InMsg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RemoveGroupMember
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Memberid                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RemoveGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Memberid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RemoveGroupMember");

	Params::ULimNative_RemoveGroupMember_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;
	Parms.Memberid = Memberid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RemoveFromBlockee
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RemoveFromBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RemoveFromBlockee");

	Params::ULimNative_RemoveFromBlockee_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RemoveFriend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RemoveFriend(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RemoveFriend");

	Params::ULimNative_RemoveFriend_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.RefuseFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InRequestID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::RefuseFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "RefuseFriendRequest");

	Params::ULimNative_RefuseFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InRequestID = InRequestID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.QuitGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::QuitGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "QuitGroup");

	Params::ULimNative_QuitGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.PostInitLIM
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeReportConfig      ReportConfig                                                     (Parm, NativeAccessSpecifierPublic)
// struct FLimNativeParkConfig        ParkConfig                                                       (Parm, NativeAccessSpecifierPublic)

void ULimNative::PostInitLIM(struct FLimNativeLowLevelWrapper& Ctx, const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "PostInitLIM");

	Params::ULimNative_PostInitLIM_Params Parms{};

	Parms.Ctx = Ctx;
	Parms.ReportConfig = ReportConfig;
	Parms.ParkConfig = ParkConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.MsgsGetCommon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::MsgsGetCommon(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "MsgsGetCommon");

	Params::ULimNative_MsgsGetCommon_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.Logout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::Logout(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "Logout");

	Params::ULimNative_Logout_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.LoginV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InEnvId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRoleID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::LoginV2(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnvId, const class FString& InRoleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LoginV2");

	Params::ULimNative_LoginV2_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InEnvId = InEnvId;
	Parms.InRoleID = InRoleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.Login
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InAppId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAppUserID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InToken                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRoleID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::Login(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "Login");

	Params::ULimNative_Login_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InAppId = InAppId;
	Parms.InAppUserID = InAppUserID;
	Parms.InToken = InToken;
	Parms.InRoleID = InRoleID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNative.LimNative.LIMOnTranslateTextDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeTextTranslateCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnTranslateTextDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeTextTranslateCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnTranslateTextDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnTranslateTextDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetResDirDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeResDirConfig      RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetResDirDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeResDirConfig& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetResDirDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetResDirDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetReportConfigDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeReportConfig      RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetReportConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeReportConfig& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetReportConfigDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetReportConfigDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetParkConfigDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeParkConfig        RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetParkConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeParkConfig& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetParkConfigDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetParkConfigDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetMsgStateDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnSetMsgStateCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetMsgStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetMsgStateCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetMsgStateDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetMsgStateDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetLanguageDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeLanguageConfig    RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetLanguageDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeLanguageConfig& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetLanguageDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetLanguageDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetGroupAttrDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupAttrSetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrSetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetGroupAttrDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetGroupAttrDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetConvReadDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnSetConvReadCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetConvReadDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetConvReadCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetConvReadDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetConvReadDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSetAllConfigDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeInitConfig        RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSetAllConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeInitConfig& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSetAllConfigDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSetAllConfigDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnSendMsgDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnSendMsgCallBack RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnSendMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSendMsgCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnSendMsgDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnSendMsgDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnRevokeMsgDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnRevokeMsgCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnRevokeMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnRevokeMsgCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnRevokeMsgDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnRevokeMsgDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnReportMsgDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeDataCallBackBase  RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnReportMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeDataCallBackBase& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnReportMsgDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnReportMsgDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupMemberRemoveCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberRemoveCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeFriendCommonCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnRemoveFriendDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeFriendCommonCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnRemoveFriendDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnRemoveFriendDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnRemoveFriendDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeFriendCommonCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnQuitGroupDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupQuitCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnQuitGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupQuitCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnQuitGroupDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnQuitGroupDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnNetConnectStateDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              EventCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::LIMOnNetConnectStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, int32 EventCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnNetConnectStateDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnNetConnectStateDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.EventCode = EventCode;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnMsgRevokedDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnMsgRevokedEventCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnMsgRevokedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgRevokedEventCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnMsgRevokedDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnMsgRevokedDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnMsgReceivedDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnMsgReceivedEventCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnMsgReceivedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgReceivedEventCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnMsgReceivedDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnMsgReceivedDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnMsgLogicReceivedEventCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnLogoutDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnLogoutCallBack  RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnLogoutDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLogoutCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnLogoutDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnLogoutDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnLoginDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnLoginCallBack   RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnLoginDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLoginCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnLoginDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnLoginDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnJoinGroupDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupJoinCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnJoinGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupJoinCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnJoinGroupDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnJoinGroupDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetUsersStateDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetUsersStateCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetUsersStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersStateCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetUsersStateDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetUsersStateDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetUsersDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetUsersCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetUsersDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetUsersDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetUsersDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetUserDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetUserCallBack RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetUserDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUserCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetUserDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetUserDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetOssTokenDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeGetOssTokenCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetOssTokenDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetOssTokenCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetOssTokenDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetOssTokenDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetMsgsDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetMsgsCallBack RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetMsgsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetMsgsCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetMsgsDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetMsgsDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeGetMiscConfigInfoCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetMiscConfigInfoCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetGroupsDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupsGetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetGroupsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupsGetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetGroupsDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetGroupsDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetGroupMembersDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupMembersGetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetGroupMembersDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMembersGetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetGroupMembersDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetGroupMembersDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetGroupMemberDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupMemberGetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberGetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetGroupMemberDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetGroupMemberDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetGroupDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupGetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupGetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetGroupDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetGroupDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetGroupAttrDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupAttrGetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrGetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetGroupAttrDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetGroupAttrDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetGMETokenDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeGetGMETokenCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetGMETokenDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetGMETokenCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetGMETokenDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetGMETokenDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetFriendsDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetFriendCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetFriendsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetFriendsDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetFriendsDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetFriendRequestCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendRequestCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetConvChatLevelConfigCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetConnStateDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeGetConnStateCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetConnStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetConnStateCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetConnStateDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetConnStateDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetConfigDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetConfigCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConfigCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetConfigDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetConfigDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetCommonMsgsCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetCommonMsgsCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetBlockeesDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetBlockeesCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetBlockeesDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetBlockeesCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetBlockeesDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetBlockeesDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupAttrGetAllCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrGetAllCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnDestoryGroupDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupDestoryCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnDestoryGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupDestoryCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnDestoryGroupDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnDestoryGroupDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnCreateGroupDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnCreateGroupCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnCreateGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnCreateGroupCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnCreateGroupDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnCreateGroupDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnCreateFriendRequestCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnCreateFriendRequestCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnConvsGetDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnConvsGetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnConvsGetDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvsGetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnConvsGetDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnConvsGetDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnConvHandleynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnConvHandleCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnConvHandleynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvHandleCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnConvHandleynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnConvHandleynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnCheckImageDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeDataCallBackBase  RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnCheckImageDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeDataCallBackBase& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnCheckImageDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnCheckImageDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeFriendCommonCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnAddToBlockeeDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeFriendCommonCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnAddToBlockeeDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnAddToBlockeeDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnAddToBlockeeDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnAddGroupMemberDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGroupMemberAddCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnAddGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberAddCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnAddGroupMemberDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnAddGroupMemberDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeFriendCommonCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMLogDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::LIMLogDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMLogDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMLogDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNative.LIMEventDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::LIMEventDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "LIMEventDynamicDelegate__DelegateSignature");

	Params::ULimNative_LIMEventDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNative.LimNative.JoinGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::JoinGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "JoinGroup");

	Params::ULimNative_JoinGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.InitLIM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InServerEnvID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLimNativeInitConfig        InConfig                                                         (Parm, NativeAccessSpecifierPublic)
// struct FLimNativeLowLevelWrapper   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeLowLevelWrapper ULimNative::InitLIM(const class FString& InServerEnvID, const struct FLimNativeInitConfig& InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "InitLIM");

	Params::ULimNative_InitLIM_Params Parms{};

	Parms.InServerEnvID = InServerEnvID;
	Parms.InConfig = InConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNative.GetUsersState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InUserIDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetUsersState(struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString>& InUserIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetUsersState");

	Params::ULimNative_GetUsersState_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserIDs = InUserIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetUsers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUidList                    InUserIDs                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::GetUsers(struct FLimNativeLowLevelWrapper& InCtx, struct FUidList& InUserIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetUsers");

	Params::ULimNative_GetUsers_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserIDs = InUserIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetUser
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetUser(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetUser");

	Params::ULimNative_GetUser_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetResDir
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::GetResDir(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetResDir");

	Params::ULimNative_GetResDir_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetOssToken
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::GetOssToken(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetOssToken");

	Params::ULimNative_GetOssToken_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetMiscConfigInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::GetMiscConfigInfo(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetMiscConfigInfo");

	Params::ULimNative_GetMiscConfigInfo_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetMessagesByID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InFromMsgID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InToMsgID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetMessagesByID(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetMessagesByID");

	Params::ULimNative_GetMessagesByID_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InFromMsgID = InFromMsgID;
	Parms.InToMsgID = InToMsgID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetLIMVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNative::GetLIMVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetLIMVersion");

	Params::ULimNative_GetLIMVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNative.GetLimNativeInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULimNative*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULimNative* ULimNative::GetLimNativeInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetLimNativeInstance");

	Params::ULimNative_GetLimNativeInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNative.GetLanguage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::GetLanguage(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetLanguage");

	Params::ULimNative_GetLanguage_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetGroups
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Tag                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Size                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetGroups(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Tag, const class FString& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetGroups");

	Params::ULimNative_GetGroups_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Tag = Tag;
	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetGroupMembers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Tag                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Size                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetGroupMembers(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Tag, const class FString& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetGroupMembers");

	Params::ULimNative_GetGroupMembers_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;
	Parms.Tag = Tag;
	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetGroupAttr
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetGroupAttr");

	Params::ULimNative_GetGroupAttr_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetGroupAllAttr
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetGroupAllAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetGroupAllAttr");

	Params::ULimNative_GetGroupAllAttr_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetGroup");

	Params::ULimNative_GetGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetGMEToken
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InAppId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRoomId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetGMEToken(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetGMEToken");

	Params::ULimNative_GetGMEToken_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InAppId = InAppId;
	Parms.InUserId = InUserId;
	Parms.InRoomId = InRoomId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetFriendsV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               InNeedPresence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetFriendsV2(struct FLimNativeLowLevelWrapper& InCtx, bool InNeedPresence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetFriendsV2");

	Params::ULimNative_GetFriendsV2_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InNeedPresence = InNeedPresence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetFriends
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InSize                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetFriends(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, const class FString& InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetFriends");

	Params::ULimNative_GetFriends_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetFriendRequests
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InSize                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetFriendRequests(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, const class FString& InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetFriendRequests");

	Params::ULimNative_GetFriendRequests_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetConvChatLevelConfig
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::GetConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetConvChatLevelConfig");

	Params::ULimNative_GetConvChatLevelConfig_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetConnState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNative::GetConnState(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetConnState");

	Params::ULimNative_GetConnState_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetBlockees
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InSize                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetBlockees(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, const class FString& InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetBlockees");

	Params::ULimNative_GetBlockees_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetBeforeMessages
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MsgId                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetBeforeMessages(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType, int32 MsgId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetBeforeMessages");

	Params::ULimNative_GetBeforeMessages_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.MsgId = MsgId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.GetAfterMessages
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MsgId                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::GetAfterMessages(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType, int32 MsgId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "GetAfterMessages");

	Params::ULimNative_GetAfterMessages_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.MsgId = MsgId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.DestoryLimNativeInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULimNative::DestoryLimNativeInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "DestoryLimNativeInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.DestoryGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::DestoryGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "DestoryGroup");

	Params::ULimNative_DestoryGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.CreateLIM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InServerEnvID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLimNativeLowLevelWrapper   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeLowLevelWrapper ULimNative::CreateLIM(const class FString& InServerEnvID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "CreateLIM");

	Params::ULimNative_CreateLIM_Params Parms{};

	Parms.InServerEnvID = InServerEnvID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNative.CreateGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Members                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::CreateGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Name, TArray<class FString>& Members, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "CreateGroup");

	Params::ULimNative_CreateGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Name = Name;
	Parms.Members = Members;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.CreateFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::CreateFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "CreateFriendRequest");

	Params::ULimNative_CreateFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.ConversationsGet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Size                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::ConversationsGet(struct FLimNativeLowLevelWrapper& InCtx, int32 Size, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "ConversationsGet");

	Params::ULimNative_ConversationsGet_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Size = Size;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.ConversationSetSticky
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULimNative::ConversationSetSticky()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "ConversationSetSticky");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.ConversationSetRead
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULimNative::ConversationSetRead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "ConversationSetRead");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.ConversationSetMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULimNative::ConversationSetMute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "ConversationSetMute");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.ConversationSetHide
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULimNative::ConversationSetHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "ConversationSetHide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.ConversationDiscard
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::ConversationDiscard(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "ConversationDiscard");

	Params::ULimNative_ConversationDiscard_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.CheckImage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUrl                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::CheckImage(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "CheckImage");

	Params::ULimNative_CheckImage_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUrl = InUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.CancelFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRequestID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::CancelFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "CancelFriendRequest");

	Params::ULimNative_CancelFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;
	Parms.InRequestID = InRequestID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.AddToBlockee
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::AddToBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "AddToBlockee");

	Params::ULimNative_AddToBlockee_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.AddGroupMember
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Groupid                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Memberid                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::AddGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Memberid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "AddGroupMember");

	Params::ULimNative_AddGroupMember_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.Groupid = Groupid;
	Parms.Memberid = Memberid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNative.AcceptFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InRequestID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNative::AcceptFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNative", "AcceptFriendRequest");

	Params::ULimNative_AcceptFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InRequestID = InRequestID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LimNative.LimNativeChatMsgReader
// (None)

class UClass* ULimNativeChatMsgReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimNativeChatMsgReader");

	return Clss;
}


// LimNativeChatMsgReader LimNative.Default__LimNativeChatMsgReader
// (Public, ClassDefaultObject, ArchetypeObject)

class ULimNativeChatMsgReader* ULimNativeChatMsgReader::GetDefaultObj()
{
	static class ULimNativeChatMsgReader* Default = nullptr;

	if (!Default)
		Default = static_cast<ULimNativeChatMsgReader*>(ULimNativeChatMsgReader::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNative.LimNativeChatMsgReader.GetVoiceMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeIMChatMessage     MsgStructWrapper                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMChatMessageInfo MsgInfo                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMVoiceMessage    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeIMVoiceMessage ULimNativeChatMsgReader::GetVoiceMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeChatMsgReader", "GetVoiceMessage");

	Params::ULimNativeChatMsgReader_GetVoiceMessage_Params Parms{};

	Parms.MsgStructWrapper = MsgStructWrapper;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MsgInfo != nullptr)
		*MsgInfo = std::move(Parms.MsgInfo);

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeChatMsgReader.GetTextMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeIMChatMessage     MsgStructWrapper                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMChatMessageInfo MsgInfo                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMTextMessage     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeIMTextMessage ULimNativeChatMsgReader::GetTextMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeChatMsgReader", "GetTextMessage");

	Params::ULimNativeChatMsgReader_GetTextMessage_Params Parms{};

	Parms.MsgStructWrapper = MsgStructWrapper;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MsgInfo != nullptr)
		*MsgInfo = std::move(Parms.MsgInfo);

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeChatMsgReader.GetShareMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeIMChatMessage     MsgStructWrapper                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMChatMessageInfo MsgInfo                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMShareMessage    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeIMShareMessage ULimNativeChatMsgReader::GetShareMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeChatMsgReader", "GetShareMessage");

	Params::ULimNativeChatMsgReader_GetShareMessage_Params Parms{};

	Parms.MsgStructWrapper = MsgStructWrapper;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MsgInfo != nullptr)
		*MsgInfo = std::move(Parms.MsgInfo);

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeChatMsgReader.GetNotificationMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeIMChatMessage     MsgStructWrapper                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMChatMessageInfo MsgInfo                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMNotificationMessageReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeIMNotificationMessage ULimNativeChatMsgReader::GetNotificationMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeChatMsgReader", "GetNotificationMessage");

	Params::ULimNativeChatMsgReader_GetNotificationMessage_Params Parms{};

	Parms.MsgStructWrapper = MsgStructWrapper;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MsgInfo != nullptr)
		*MsgInfo = std::move(Parms.MsgInfo);

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeChatMsgReader.GetImageMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeIMChatMessage     MsgStructWrapper                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMChatMessageInfo MsgInfo                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMImageMessage    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeIMImageMessage ULimNativeChatMsgReader::GetImageMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeChatMsgReader", "GetImageMessage");

	Params::ULimNativeChatMsgReader_GetImageMessage_Params Parms{};

	Parms.MsgStructWrapper = MsgStructWrapper;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MsgInfo != nullptr)
		*MsgInfo = std::move(Parms.MsgInfo);

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeChatMsgReader.GetEmotionMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeIMChatMessage     MsgStructWrapper                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMChatMessageInfo MsgInfo                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FLimNativeIMEmotionMessage  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeIMEmotionMessage ULimNativeChatMsgReader::GetEmotionMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeChatMsgReader", "GetEmotionMessage");

	Params::ULimNativeChatMsgReader_GetEmotionMessage_Params Parms{};

	Parms.MsgStructWrapper = MsgStructWrapper;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MsgInfo != nullptr)
		*MsgInfo = std::move(Parms.MsgInfo);

	return Parms.ReturnValue;

}


// Class LimNative.LimNativeHelper
// (None)

class UClass* ULimNativeHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimNativeHelper");

	return Clss;
}


// LimNativeHelper LimNative.Default__LimNativeHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class ULimNativeHelper* ULimNativeHelper::GetDefaultObj()
{
	static class ULimNativeHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<ULimNativeHelper*>(ULimNativeHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNative.LimNativeHelper.NameStringToEnumValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Enum                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EnumName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULimNativeHelper::NameStringToEnumValue(const class FString& Enum, const class FString& EnumName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "NameStringToEnumValue");

	Params::ULimNativeHelper_NameStringToEnumValue_Params Parms{};

	Parms.Enum = Enum;
	Parms.EnumName = EnumName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.GetUE4LogFilePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::GetUE4LogFilePath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "GetUE4LogFilePath");

	Params::ULimNativeHelper_GetUE4LogFilePath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.GetSavedPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::GetSavedPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "GetSavedPath");

	Params::ULimNativeHelper_GetSavedPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.GetProjectPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::GetProjectPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "GetProjectPath");

	Params::ULimNativeHelper_GetProjectPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.GetProjectContentPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::GetProjectContentPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "GetProjectContentPath");

	Params::ULimNativeHelper_GetProjectContentPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.GetGamePersistentDownloadDir
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::GetGamePersistentDownloadDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "GetGamePersistentDownloadDir");

	Params::ULimNativeHelper_GetGamePersistentDownloadDir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.GetFileText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::GetFileText(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "GetFileText");

	Params::ULimNativeHelper_GetFileText_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.GetFileBinary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<uint8> ULimNativeHelper::GetFileBinary(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "GetFileBinary");

	Params::ULimNativeHelper_GetFileBinary_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.EnumToStringArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Enum                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExcludeHidden                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> ULimNativeHelper::EnumToStringArray(const class FString& Enum, bool bExcludeHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "EnumToStringArray");

	Params::ULimNativeHelper_EnumToStringArray_Params Parms{};

	Parms.Enum = Enum;
	Parms.bExcludeHidden = bExcludeHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.EnumToString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Enum                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EnumValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::EnumToString(const class FString& Enum, int32 EnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "EnumToString");

	Params::ULimNativeHelper_EnumToString_Params Parms{};

	Parms.Enum = Enum;
	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.EnumToNameStringArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Enum                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExcludeHidden                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> ULimNativeHelper::EnumToNameStringArray(const class FString& Enum, bool bExcludeHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "EnumToNameStringArray");

	Params::ULimNativeHelper_EnumToNameStringArray_Params Parms{};

	Parms.Enum = Enum;
	Parms.bExcludeHidden = bExcludeHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeHelper.EnumToNameString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Enum                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EnumValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeHelper::EnumToNameString(const class FString& Enum, int32 EnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeHelper", "EnumToNameString");

	Params::ULimNativeHelper_EnumToNameString_Params Parms{};

	Parms.Enum = Enum;
	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LimNative.LimNativeLowLevel
// (None)

class UClass* ULimNativeLowLevel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimNativeLowLevel");

	return Clss;
}


// LimNativeLowLevel LimNative.Default__LimNativeLowLevel
// (Public, ClassDefaultObject, ArchetypeObject)

class ULimNativeLowLevel* ULimNativeLowLevel::GetDefaultObj()
{
	static class ULimNativeLowLevel* Default = nullptr;

	if (!Default)
		Default = static_cast<ULimNativeLowLevel*>(ULimNativeLowLevel::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNative.LimNativeLowLevel.TranslateText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InText                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeSupportedLanguageInLang                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::TranslateText(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, enum class ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "TranslateText");

	Params::ULimNativeLowLevel_TranslateText_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InText = InText;
	Parms.InLang = InLang;
	Parms.ExtraInfo = ExtraInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetMsgState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InMsgParams                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetMsgState(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsgParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetMsgState");

	Params::ULimNativeLowLevel_SetMsgState_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InMsgParams = InMsgParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetMsgRead
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMsgID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetMsgRead(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetMsgRead");

	Params::ULimNativeLowLevel_SetMsgRead_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InMsgID = InMsgID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetLogHandler
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetLogHandler(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetLogHandler");

	Params::ULimNativeLowLevel_SetLogHandler_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetGroupAttr
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetGroupAttr");

	Params::ULimNativeLowLevel_SetGroupAttr_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;
	Parms.InKey = InKey;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InGroupName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InGroupName, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetGroup");

	Params::ULimNativeLowLevel_SetGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;
	Parms.InGroupName = InGroupName;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetEventHandler
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetEventHandler(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetEventHandler");

	Params::ULimNativeLowLevel_SetEventHandler_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetConvSticky
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSticky                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetConvSticky(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, bool bSticky)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetConvSticky");

	Params::ULimNativeLowLevel_SetConvSticky_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.bSticky = bSticky;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetConvRead
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMsgID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetConvRead(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetConvRead");

	Params::ULimNativeLowLevel_SetConvRead_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InMsgID = InMsgID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetConvMute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMute                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetConvMute(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, bool bMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetConvMute");

	Params::ULimNativeLowLevel_SetConvMute_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.bMute = bMute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetConvAttr
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetConvAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InKey, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetConvAttr");

	Params::ULimNativeLowLevel_SetConvAttr_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InKey = InKey;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SetAllConfigs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InJsonString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SetAllConfigs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SetAllConfigs");

	Params::ULimNativeLowLevel_SetAllConfigs_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InJsonString = InJsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.SendMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InMsg                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::SendMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "SendMsg");

	Params::ULimNativeLowLevel_SendMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InMsg = InMsg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.RevokeMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InMsg                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::RevokeMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "RevokeMsg");

	Params::ULimNativeLowLevel_RevokeMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InMsg = InMsg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.Resume
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::Resume(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "Resume");

	Params::ULimNativeLowLevel_Resume_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.ReportMsg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InMsg                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::ReportMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "ReportMsg");

	Params::ULimNativeLowLevel_ReportMsg_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InMsg = InMsg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.RemoveGroupMember
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMemberID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::RemoveGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "RemoveGroupMember");

	Params::ULimNativeLowLevel_RemoveGroupMember_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;
	Parms.InMemberID = InMemberID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.RemoveFromBlockee
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::RemoveFromBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "RemoveFromBlockee");

	Params::ULimNativeLowLevel_RemoveFromBlockee_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.RemoveFriend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::RemoveFriend(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "RemoveFriend");

	Params::ULimNativeLowLevel_RemoveFriend_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.RefuseFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InRequestID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::RefuseFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "RefuseFriendRequest");

	Params::ULimNativeLowLevel_RefuseFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InRequestID = InRequestID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.QuitGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::QuitGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "QuitGroup");

	Params::ULimNativeLowLevel_QuitGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.Pause
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::Pause(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "Pause");

	Params::ULimNativeLowLevel_Pause_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.Logout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::Logout(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "Logout");

	Params::ULimNativeLowLevel_Logout_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.LoginV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InEnv                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRoleID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::LoginV2(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnv, const class FString& InRoleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "LoginV2");

	Params::ULimNativeLowLevel_LoginV2_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InEnv = InEnv;
	Parms.InRoleID = InRoleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.Login
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InAppId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAppUserID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InToken                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRoleID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::Login(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "Login");

	Params::ULimNativeLowLevel_Login_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InAppId = InAppId;
	Parms.InAppUserID = InAppUserID;
	Parms.InToken = InToken;
	Parms.InRoleID = InRoleID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNative.LimNativeLowLevel.LIMResultDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::LIMResultDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "LIMResultDynamicDelegate__DelegateSignature");

	Params::ULimNativeLowLevel_LIMResultDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNativeLowLevel.LIMLogDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::LIMLogDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "LIMLogDynamicDelegate__DelegateSignature");

	Params::ULimNativeLowLevel_LIMLogDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNative.LimNativeLowLevel.LIMEventDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::LIMEventDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "LIMEventDynamicDelegate__DelegateSignature");

	Params::ULimNativeLowLevel_LIMEventDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNative.LimNativeLowLevel.JoinGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::JoinGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "JoinGroup");

	Params::ULimNativeLowLevel_JoinGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetUsersState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InUserIDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetUsersState(struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString>& InUserIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetUsersState");

	Params::ULimNativeLowLevel_GetUsersState_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserIDs = InUserIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetUsers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserIDs                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetUsers(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetUsers");

	Params::ULimNativeLowLevel_GetUsers_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserIDs = InUserIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetUser
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetUser(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetUser");

	Params::ULimNativeLowLevel_GetUser_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetOssToken
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetOssToken(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetOssToken");

	Params::ULimNativeLowLevel_GetOssToken_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetMsgsV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InFromMsgID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InToMsgID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetMsgsV2(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetMsgsV2");

	Params::ULimNativeLowLevel_GetMsgsV2_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InFromMsgID = InFromMsgID;
	Parms.InToMsgID = InToMsgID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetMsgs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeMsgDirType    InDir                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMsgID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetMsgs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, enum class ELimNativeMsgDirType InDir, const class FString& InMsgID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetMsgs");

	Params::ULimNativeLowLevel_GetMsgs_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InDir = InDir;
	Parms.InMsgID = InMsgID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetMiscConfigInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetMiscConfigInfo(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetMiscConfigInfo");

	Params::ULimNativeLowLevel_GetMiscConfigInfo_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetLIMVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimNativeLowLevel::GetLIMVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetLIMVersion");

	Params::ULimNativeLowLevel_GetLIMVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeLowLevel.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULimNativeLowLevel*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULimNativeLowLevel* ULimNativeLowLevel::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetInstance");

	Params::ULimNativeLowLevel_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeLowLevel.GetGroups
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetGroups(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetGroups");

	Params::ULimNativeLowLevel_GetGroups_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetGroupMembers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetGroupMembers(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, int32 InTag, int32 InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetGroupMembers");

	Params::ULimNativeLowLevel_GetGroupMembers_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetGroupMember
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMemberID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetGroupMember");

	Params::ULimNativeLowLevel_GetGroupMember_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;
	Parms.InMemberID = InMemberID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetGroupAttr
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetGroupAttr");

	Params::ULimNativeLowLevel_GetGroupAttr_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;
	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetGroupAllAttrs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetGroupAllAttrs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetGroupAllAttrs");

	Params::ULimNativeLowLevel_GetGroupAllAttrs_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetGroup");

	Params::ULimNativeLowLevel_GetGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetGMEToken
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InAppId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRoomId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetGMEToken(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetGMEToken");

	Params::ULimNativeLowLevel_GetGMEToken_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InAppId = InAppId;
	Parms.InUserId = InUserId;
	Parms.InRoomId = InRoomId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetFriends
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetFriends(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetFriends");

	Params::ULimNativeLowLevel_GetFriends_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetFriendRequests
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetFriendRequests(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetFriendRequests");

	Params::ULimNativeLowLevel_GetFriendRequests_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetConvs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetConvs(struct FLimNativeLowLevelWrapper& InCtx, int32 InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetConvs");

	Params::ULimNativeLowLevel_GetConvs_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetConvChatLevelConfig
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetConvChatLevelConfig");

	Params::ULimNativeLowLevel_GetConvChatLevelConfig_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetConvAttr
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetConvAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetConvAttr");

	Params::ULimNativeLowLevel_GetConvAttr_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetConvAllAttrs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetConvAllAttrs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetConvAllAttrs");

	Params::ULimNativeLowLevel_GetConvAllAttrs_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetConv
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetConv");

	Params::ULimNativeLowLevel_GetConv_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetConnState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetConnState(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetConnState");

	Params::ULimNativeLowLevel_GetConnState_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetBlockees
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetBlockees(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetBlockees");

	Params::ULimNativeLowLevel_GetBlockees_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InTag = InTag;
	Parms.InSize = InSize;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.GetAllConfigs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::GetAllConfigs(struct FLimNativeLowLevelWrapper& InCtx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "GetAllConfigs");

	Params::ULimNativeLowLevel_GetAllConfigs_Params Parms{};

	Parms.InCtx = InCtx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.DestroyGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::DestroyGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "DestroyGroup");

	Params::ULimNativeLowLevel_DestroyGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.DestroyConv
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::DestroyConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "DestroyConv");

	Params::ULimNativeLowLevel_DestroyConv_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULimNativeLowLevel::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.CreateLIM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InServerEnvID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLimNativeLowLevelWrapper   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLimNativeLowLevelWrapper ULimNativeLowLevel::CreateLIM(const class FString& InServerEnvID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "CreateLIM");

	Params::ULimNativeLowLevel_CreateLIM_Params Parms{};

	Parms.InServerEnvID = InServerEnvID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNative.LimNativeLowLevel.CreateGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InMembers                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InGroupName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::CreateGroup(struct FLimNativeLowLevelWrapper& InCtx, const TArray<class FString>& InMembers, const class FString& InGroupName, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "CreateGroup");

	Params::ULimNativeLowLevel_CreateGroup_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InMembers = InMembers;
	Parms.InGroupName = InGroupName;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.CreateFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::CreateFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "CreateFriendRequest");

	Params::ULimNativeLowLevel_CreateFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.CreateConv
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::CreateConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "CreateConv");

	Params::ULimNativeLowLevel_CreateConv_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.ClearConv
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InConvID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      InConvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::ClearConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "ClearConv");

	Params::ULimNativeLowLevel_ClearConv_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InConvID = InConvID;
	Parms.InConvType = InConvType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.CheckImage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUrl                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::CheckImage(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "CheckImage");

	Params::ULimNativeLowLevel_CheckImage_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUrl = InUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.CancelFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRequestID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::CancelFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "CancelFriendRequest");

	Params::ULimNativeLowLevel_CancelFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;
	Parms.InRequestID = InRequestID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.Call
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InJsonString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::Call(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "Call");

	Params::ULimNativeLowLevel_Call_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InJsonString = InJsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.BlockeeExists
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::BlockeeExists(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "BlockeeExists");

	Params::ULimNativeLowLevel_BlockeeExists_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.AddToBlockee
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::AddToBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "AddToBlockee");

	Params::ULimNativeLowLevel_AddToBlockee_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.AddGroupMember
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InGroupID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMemberID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::AddGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "AddGroupMember");

	Params::ULimNativeLowLevel_AddGroupMember_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InGroupID = InGroupID;
	Parms.InMemberID = InMemberID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNative.LimNativeLowLevel.AcceptFriendRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLimNativeLowLevelWrapper   InCtx                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InRequestID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimNativeLowLevel::AcceptFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeLowLevel", "AcceptFriendRequest");

	Params::ULimNativeLowLevel_AcceptFriendRequest_Params Parms{};

	Parms.InCtx = InCtx;
	Parms.InRequestID = InRequestID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


