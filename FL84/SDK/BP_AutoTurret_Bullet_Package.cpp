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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AutoTurret_Bullet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AutoTurret_Bullet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AutoTurret_Bullet.BP_AutoTurret_Bullet_C");
		return ptr;
	}

}


