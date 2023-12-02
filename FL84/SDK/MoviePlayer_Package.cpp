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
	 * 		Name   -> PredefinedFunction UMoviePlayerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePlayerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MoviePlayer.MoviePlayerSettings"));
		return ptr;
	}

}


