﻿/**
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
	 * 		Name   -> PredefinedFunction AProjectile_VH_Hover_Soroll03_TurretA1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_VH_Hover_Soroll03_TurretA1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_VH_Hover_Soroll03_TurretA1.Projectile_VH_Hover_Soroll03_TurretA1_C");
		return ptr;
	}

}


