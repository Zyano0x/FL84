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
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.GetNameCardCharacterPathByCharacterIDAndCardPose
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharacterId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CardPoseID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_OpeningShow_Player_C::GetNameCardCharacterPathByCharacterIDAndCardPose(int32_t CharacterId, int32_t CardPoseID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.GetNameCardCharacterPathByCharacterIDAndCardPose"));
		
		UUI_OpeningShow_Player_C_GetNameCardCharacterPathByCharacterIDAndCardPose_Params params {};
		params.CharacterId = CharacterId;
		params.CardPoseID = CardPoseID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetPlayerBusinessInfo
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           ps                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FExpRankMedalData                           ExpRankMedalData                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_OpeningShow_Player_C::SetPlayerBusinessInfo(class ASolarPlayerState* ps, int32_t PlayerNumber, const struct FExpRankMedalData& ExpRankMedalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetPlayerBusinessInfo"));
		
		UUI_OpeningShow_Player_C_SetPlayerBusinessInfo_Params params {};
		params.ps = ps;
		params.PlayerNumber = PlayerNumber;
		params.ExpRankMedalData = ExpRankMedalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetBusinessCard
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PoseId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BackgroundId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SkinId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScaleBox*                                   ParentPanel                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_OpeningShow_Player_C::SetBusinessCard(int32_t PoseId, int32_t BackgroundId, int32_t SkinId, class UScaleBox* ParentPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetBusinessCard"));
		
		UUI_OpeningShow_Player_C_SetBusinessCard_Params params {};
		params.PoseId = PoseId;
		params.BackgroundId = BackgroundId;
		params.SkinId = SkinId;
		params.ParentPanel = ParentPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_OpeningShow_Player_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.GetModuleName"));
		
		UUI_OpeningShow_Player_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetBGLight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_OpeningShow_Player_C::SetBGLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetBGLight"));
		
		UUI_OpeningShow_Player_C_SetBGLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetTeamPos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TeamPos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OpeningShow_Player_C::SetTeamPos(int32_t TeamPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetTeamPos"));
		
		UUI_OpeningShow_Player_C_SetTeamPos_Params params {};
		params.TeamPos = TeamPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_OpeningShow_Player_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.Construct"));
		
		UUI_OpeningShow_Player_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.ExecuteUbergraph_UI_OpeningShow_Player
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OpeningShow_Player_C::ExecuteUbergraph_UI_OpeningShow_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.ExecuteUbergraph_UI_OpeningShow_Player"));
		
		UUI_OpeningShow_Player_C_ExecuteUbergraph_UI_OpeningShow_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OpeningShow_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OpeningShow_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_OpeningShow_Player.UI_OpeningShow_Player_C"));
		return ptr;
	}

}


