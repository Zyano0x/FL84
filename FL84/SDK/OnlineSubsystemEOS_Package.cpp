/**
 * Name: FL84
 * Version: 15.1
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
	 * 		Name   -> PredefinedFunction UEOSArtifactSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSArtifactSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class OnlineSubsystemEOS.EOSArtifactSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class OnlineSubsystemEOS.EOSSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetConnectionEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetConnectionEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class OnlineSubsystemEOS.NetConnectionEOS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetDriverEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetDriverEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class OnlineSubsystemEOS.NetDriverEOS"));
		return ptr;
	}

}


