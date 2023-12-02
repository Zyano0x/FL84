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
	 * 		Name   -> Function CFG_Framework.CFG_Framework_C.GetSkillStateByNameEnum
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ESkillStateNameEnum                                Enum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_SkillState                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCFG_Framework_C::GetSkillStateByNameEnum(ESkillStateNameEnum Enum, struct FS_SkillState* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CFG_Framework.CFG_Framework_C.GetSkillStateByNameEnum"));
		
		UCFG_Framework_C_GetSkillStateByNameEnum_Params params {};
		params.Enum = Enum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CFG_Framework.CFG_Framework_C.GetCustomRoomData
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FCustomRoomData UCFG_Framework_C::GetCustomRoomData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CFG_Framework.CFG_Framework_C.GetCustomRoomData"));
		
		UCFG_Framework_C_GetCustomRoomData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CFG_Framework.CFG_Framework_C.IsCustomRoomMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UCFG_Framework_C::IsCustomRoomMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CFG_Framework.CFG_Framework_C.IsCustomRoomMode"));
		
		UCFG_Framework_C_IsCustomRoomMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CFG_Framework.CFG_Framework_C.GetSavedConfig
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_ConfigSave_C*                            AsBPConfigSave                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCFG_Framework_C::GetSavedConfig(class UBP_ConfigSave_C** AsBPConfigSave, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CFG_Framework.CFG_Framework_C.GetSavedConfig"));
		
		UCFG_Framework_C_GetSavedConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPConfigSave != nullptr)
			*AsBPConfigSave = params.AsBPConfigSave;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFG_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFG_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass CFG_Framework.CFG_Framework_C"));
		return ptr;
	}

}


