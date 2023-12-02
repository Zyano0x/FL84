﻿/**
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
	 * 		Name   -> PredefinedFunction USoundfieldEncodingSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEncodingSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.SoundfieldEncodingSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.AudioEndpointSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatializationPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatializationPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.SpatializationPluginSourceSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOcclusionPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.OcclusionPluginSourceSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulationPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulationPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.SoundModulationPluginSourceSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReverbPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReverbPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.ReverbPluginSourceSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.SoundfieldEndpointSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEffectSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.SoundfieldEffectSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEffectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AudioExtensions.SoundfieldEffectBase"));
		return ptr;
	}

}


