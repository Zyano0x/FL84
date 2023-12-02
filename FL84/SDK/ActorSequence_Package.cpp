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
	 * 		Name   -> PredefinedFunction UActorSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ActorSequence.ActorSequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorSequenceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequenceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ActorSequence.ActorSequenceComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ActorSequence.ActorSequencePlayer"));
		return ptr;
	}

}


