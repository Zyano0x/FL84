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
	 * 		Name   -> Function BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C.OnClientRoomDataReadyLuaCall
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_CustomRoomManager_BattleRoyale_C::OnClientRoomDataReadyLuaCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C.OnClientRoomDataReadyLuaCall"));
		
		ABP_CustomRoomManager_BattleRoyale_C_OnClientRoomDataReadyLuaCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C.OnPlayerRemovedFromRoom
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERemovedReasonType                                 reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_CustomRoomManager_BattleRoyale_C::OnPlayerRemovedFromRoom(const class FString& SolarPlayerID, ERemovedReasonType reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C.OnPlayerRemovedFromRoom"));
		
		ABP_CustomRoomManager_BattleRoyale_C_OnPlayerRemovedFromRoom_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CustomRoomManager_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CustomRoomManager_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C"));
		return ptr;
	}

}


