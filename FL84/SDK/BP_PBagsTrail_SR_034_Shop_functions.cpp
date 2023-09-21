#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PBagsTrail_SR_034_Shop.BP_PBagsTrail_SR_034_Shop_C
// (Actor)

class UClass* ABP_PBagsTrail_SR_034_Shop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PBagsTrail_SR_034_Shop_C");

	return Clss;
}


// BP_PBagsTrail_SR_034_Shop_C BP_PBagsTrail_SR_034_Shop.Default__BP_PBagsTrail_SR_034_Shop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PBagsTrail_SR_034_Shop_C* ABP_PBagsTrail_SR_034_Shop_C::GetDefaultObj()
{
	static class ABP_PBagsTrail_SR_034_Shop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PBagsTrail_SR_034_Shop_C*>(ABP_PBagsTrail_SR_034_Shop_C::StaticClass()->DefaultObject);

	return Default;
}

}


