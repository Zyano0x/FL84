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
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerForceJumped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           TargetPlayer                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_AirlineCruise_C::GetPlayerForceJumped(class ASolarPlayerState* TargetPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerForceJumped"));
		
		UBPC_AirlineCruise_C_GetPlayerForceJumped_Params params {};
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerLandLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           TargetPlayer                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Succeed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AirlineCruise_C::GetPlayerLandLocation(class ASolarPlayerState* TargetPlayer, struct FVector* Location, bool* Succeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerLandLocation"));
		
		UBPC_AirlineCruise_C_GetPlayerLandLocation_Params params {};
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Succeed != nullptr)
			*Succeed = params.Succeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerEjectLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           TargetPlayer                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Succeed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AirlineCruise_C::GetPlayerEjectLocation(class ASolarPlayerState* TargetPlayer, struct FVector* Location, bool* Succeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerEjectLocation"));
		
		UBPC_AirlineCruise_C_GetPlayerEjectLocation_Params params {};
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Succeed != nullptr)
			*Succeed = params.Succeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetAirlineData_RealWorld
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FAirlineData                                AirlineData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FVector2D                                   LineStart                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   LineEnd                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   JumpStart                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   JumpEnd                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Hight                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AirlineCruise_C::GetAirlineData_RealWorld(const struct FAirlineData& AirlineData, struct FVector2D* LineStart, struct FVector2D* LineEnd, struct FVector2D* JumpStart, struct FVector2D* JumpEnd, float* Speed, float* Hight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetAirlineData_RealWorld"));
		
		UBPC_AirlineCruise_C_GetAirlineData_RealWorld_Params params {};
		params.AirlineData = AirlineData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LineStart != nullptr)
			*LineStart = params.LineStart;
		if (LineEnd != nullptr)
			*LineEnd = params.LineEnd;
		if (JumpStart != nullptr)
			*JumpStart = params.JumpStart;
		if (JumpEnd != nullptr)
			*JumpEnd = params.JumpEnd;
		if (Speed != nullptr)
			*Speed = params.Speed;
		if (Hight != nullptr)
			*Hight = params.Hight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.MiniMap2RealWorld
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   JumpStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   JumpEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   LineStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   LineEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   JumpStartR                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   JumpEndR                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   LineStartR                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   LineEndR                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AirlineCruise_C::MiniMap2RealWorld(const struct FVector2D& JumpStart, const struct FVector2D& JumpEnd, const struct FVector2D& LineStart, const struct FVector2D& LineEnd, struct FVector2D* JumpStartR, struct FVector2D* JumpEndR, struct FVector2D* LineStartR, struct FVector2D* LineEndR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.MiniMap2RealWorld"));
		
		UBPC_AirlineCruise_C_MiniMap2RealWorld_Params params {};
		params.JumpStart = JumpStart;
		params.JumpEnd = JumpEnd;
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JumpStartR != nullptr)
			*JumpStartR = params.JumpStartR;
		if (JumpEndR != nullptr)
			*JumpEndR = params.JumpEndR;
		if (LineStartR != nullptr)
			*LineStartR = params.LineStartR;
		if (LineEndR != nullptr)
			*LineEndR = params.LineEndR;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.StartParachutingWithRandomAirline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ASolarCharacter*>                     TargetCharacters                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            AirLineID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AirlineCruise_C::StartParachutingWithRandomAirline(TArray<class ASolarCharacter*>* TargetCharacters, int32_t* AirLineID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.StartParachutingWithRandomAirline"));
		
		UBPC_AirlineCruise_C_StartParachutingWithRandomAirline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetCharacters != nullptr)
			*TargetCharacters = params.TargetCharacters;
		if (AirLineID != nullptr)
			*AirLineID = params.AirLineID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.StartParachuting
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ASolarCharacter*>                     TargetCharacters                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               ClearAllItems                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AirlineID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAirlineData                                AirlineData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_AirlineCruise_C::StartParachuting(TArray<class ASolarCharacter*> TargetCharacters, bool ClearAllItems, int32_t AirlineID, const struct FAirlineData& AirlineData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.StartParachuting"));
		
		UBPC_AirlineCruise_C_StartParachuting_Params params {};
		params.TargetCharacters = TargetCharacters;
		params.ClearAllItems = ClearAllItems;
		params.AirlineID = AirlineID;
		params.AirlineData = AirlineData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.OnPlayerEjectingStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CharacterEjectState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarCharacter*                             TargetCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AirlineCruise_C::OnPlayerEjectingStateChanged(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.OnPlayerEjectingStateChanged"));
		
		UBPC_AirlineCruise_C_OnPlayerEjectingStateChanged_Params params {};
		params.State = State;
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.SetSpecificAirlineData
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAirlineData                                AirlineData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_AirlineCruise_C::SetSpecificAirlineData(const struct FAirlineData& AirlineData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.SetSpecificAirlineData"));
		
		UBPC_AirlineCruise_C_SetSpecificAirlineData_Params params {};
		params.AirlineData = AirlineData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AirlineCruise.BPC_AirlineCruise_C.ExecuteUbergraph_BPC_AirlineCruise
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AirlineCruise_C::ExecuteUbergraph_BPC_AirlineCruise(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AirlineCruise.BPC_AirlineCruise_C.ExecuteUbergraph_BPC_AirlineCruise"));
		
		UBPC_AirlineCruise_C_ExecuteUbergraph_BPC_AirlineCruise_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AirlineCruise_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AirlineCruise_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_AirlineCruise.BPC_AirlineCruise_C"));
		return ptr;
	}

}


