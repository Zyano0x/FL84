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
	 * 		Name   -> Function CFG_BattleRoyale.CFG_BattleRoyale_C.GetSkillStateByNameEnum
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ESkillStateNameEnum                                Enum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_SkillState                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCFG_BattleRoyale_C::GetSkillStateByNameEnum(ESkillStateNameEnum Enum, struct FS_SkillState* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CFG_BattleRoyale.CFG_BattleRoyale_C.GetSkillStateByNameEnum"));
		
		UCFG_BattleRoyale_C_GetSkillStateByNameEnum_Params params {};
		params.Enum = Enum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFG_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFG_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass CFG_BattleRoyale.CFG_BattleRoyale_C"));
		return ptr;
	}

}


