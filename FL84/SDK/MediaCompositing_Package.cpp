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
	 * 		Name   -> PredefinedFunction UMovieSceneMediaPlayerPropertySection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMediaPlayerPropertySection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MediaCompositing.MovieSceneMediaPlayerPropertySection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMediaPlayerPropertyTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMediaPlayerPropertyTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMediaSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMediaSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MediaCompositing.MovieSceneMediaSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMediaTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMediaTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MediaCompositing.MovieSceneMediaTrack"));
		return ptr;
	}

}


