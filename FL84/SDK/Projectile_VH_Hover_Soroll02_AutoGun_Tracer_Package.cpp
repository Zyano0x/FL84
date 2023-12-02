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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Projectile_VH_Hover_Soroll02_AutoGun_Tracer.Projectile_VH_Hover_Soroll02_AutoGun_Tracer_C"));
		return ptr;
	}

}


