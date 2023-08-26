#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DTBPJson.DTBPJsonBPLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDTBPJsonBPLib : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StructToJson(const struct FDTStruct& Struct, class FString* Json, bool PrettyPrint);
		void STATIC_JsonToStruct(struct FDTStruct* Struct, const class FString& Json);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
