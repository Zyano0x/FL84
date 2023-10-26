#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LunarMariaArea.LM_AreaTileData
// (None)

class UClass* ULM_AreaTileData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LM_AreaTileData");

	return Clss;
}


// LM_AreaTileData LunarMariaArea.Default__LM_AreaTileData
// (Public, ClassDefaultObject, ArchetypeObject)

class ULM_AreaTileData* ULM_AreaTileData::GetDefaultObj()
{
	static class ULM_AreaTileData* Default = nullptr;

	if (!Default)
		Default = static_cast<ULM_AreaTileData*>(ULM_AreaTileData::StaticClass()->DefaultObject);

	return Default;
}


// Class LunarMariaArea.LM_AreaData_Base
// (None)

class UClass* ULM_AreaData_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LM_AreaData_Base");

	return Clss;
}


// LM_AreaData_Base LunarMariaArea.Default__LM_AreaData_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class ULM_AreaData_Base* ULM_AreaData_Base::GetDefaultObj()
{
	static class ULM_AreaData_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<ULM_AreaData_Base*>(ULM_AreaData_Base::StaticClass()->DefaultObject);

	return Default;
}


// Class LunarMariaArea.LM_AreaData
// (None)

class UClass* ULM_AreaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LM_AreaData");

	return Clss;
}


// LM_AreaData LunarMariaArea.Default__LM_AreaData
// (Public, ClassDefaultObject, ArchetypeObject)

class ULM_AreaData* ULM_AreaData::GetDefaultObj()
{
	static class ULM_AreaData* Default = nullptr;

	if (!Default)
		Default = static_cast<ULM_AreaData*>(ULM_AreaData::StaticClass()->DefaultObject);

	return Default;
}

}


