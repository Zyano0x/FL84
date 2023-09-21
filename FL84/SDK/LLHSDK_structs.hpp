#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELLHSDKNetworkType : uint8
{
	Unknown                        = 0,
	NotConnected                   = 1,
	Type_WiFi                      = 2,
	Type_Unknown_Cell              = 3,
	Type_2G                        = 4,
	Type_3G                        = 5,
	Type_4G                        = 6,
	Type_5G                        = 7,
	ELLHSDKNetworkType_MAX         = 8,
};

enum class ELLHSDKLoginType : uint8
{
	TYPE_NONE                      = 0,
	TYPE_QUICK_LOGIN               = 1,
	TYPE_LILITH_LOGIN              = 2,
	TYPE_MOBILE_LOGIN              = 2,
	TYPE_FACEBOOK_LOGIN            = 3,
	TYPE_GAME_CENTER_LOGIN         = 4,
	TYPE_GOOGLE_PLUS_OR_GAMES_LOGIN = 5,
	TYPE_WECHAT_LOGIN              = 6,
	TYPE_QQ_LOGIN                  = 7,
	TYPE_AUTO_LOGIN                = 8,
	TYPE_VK_LOGIN                  = 9,
	TYPE_GOOGLE_LOGIN              = 10,
	TYPE_LINE_LOGIN                = 11,
	TYPE_TWITTER_LOGIN             = 12,
	TYPE_APPLE_LOGIN               = 13,
	TYPE_WEIBO_LOGIN               = 14,
	TYPE_PGS_LOGIN                 = 15,
	TYPE_TIKTOK_LOGIN              = 16,
	TYPE_STEAM_LOGIN               = 17,
	TYPE_MAX                       = 18,
};

enum class ELLHSDKScreenOrientation : uint8
{
	Portrait                       = 0,
	ReversePortrait                = 1,
	SensorPortrait                 = 2,
	Landscape                      = 3,
	ReverseLandscape               = 4,
	SensorLandscape                = 5,
	Sensor                         = 6,
	FullSensor                     = 7,
	ELLHSDKScreenOrientation_MAX   = 8,
};

enum class ELLHSDKPayType : uint8
{
	None                           = 0,
	Apple                          = 1,
	Google                         = 2,
	Ali                            = 3,
	Wechat                         = 4,
	Union                          = 5,
	PlayPhone                      = 6,
	MyCard                         = 7,
	Payssion                       = 8,
	HuaweiAbroad                   = 9,
	Paypal                         = 10,
	Voucher                        = 11,
	Samsung                        = 12,
	ELLHSDKPayType_MAX             = 13,
};

enum class ELLHSDKPayGenericSkuItemType : uint8
{
	Normal                         = 0,
	Subscription                   = 1,
	ELLHSDKPayGenericSkuItemType_MAX = 2,
};

enum class ELLHSDKCustomerServiceRateAction : uint8
{
	Success                        = 0,
	FeedBack                       = 1,
	Close                          = 2,
	Fail                           = 3,
	ELLHSDKCustomerServiceRateAction_MAX = 4,
};

enum class ELLHSDKSupportedLanguage : uint8
{
	DefaultLanguage                = 0,
	Arabic                         = 1,
	English                        = 2,
	French                         = 3,
	German                         = 4,
	Indonesian                     = 5,
	Italian                        = 6,
	Japanese                       = 7,
	Korean                         = 8,
	Malay                          = 9,
	Polish                         = 10,
	Portuguese                     = 11,
	Russian                        = 12,
	Spanish                        = 13,
	Thai                           = 14,
	Turkish                        = 15,
	Vietnamese                     = 16,
	Hindi                          = 17,
	SimplifiedChinese              = 18,
	TraditionalChinese             = 19,
	ELLHSDKSupportedLanguage_MAX   = 20,
};

enum class ELLHSDKReportCurrencyType : uint8
{
	USA_Dollar                     = 0,
	China_Yuan                     = 1,
	Taiwan_Dollar                  = 2,
	ELLHSDKReportCurrencyType_MAX  = 3,
};

enum class ELLHSDKOpenAlbumErrorCode : uint8
{
	None                           = 0,
	Cancel                         = 1,
	NoPermission                   = 2,
	ELLHSDKOpenAlbumErrorCode_MAX  = 3,
};

enum class ELLHSDKLoginUIStyle : uint8
{
	NormalStyle                    = 0,
	SoulHunterStyle                = 1,
	GameCenterStyle                = 2,
	DomesticStyle                  = 3,
	GameCenterDomesticStyle        = 4,
	ELLHSDKLoginUIStyle_MAX        = 5,
};

enum class ELLHSDKGravity : uint8
{
	NO_GRAVITY                     = 0,
	LeftTop                        = 1,
	LeftCenter                     = 2,
	LeftBottom                     = 3,
	MidTop                         = 4,
	MidBottom                      = 5,
	RightTop                       = 6,
	RightCenter                    = 7,
	RightBottom                    = 8,
	ELLHSDKGravity_MAX             = 9,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct LLHSDK.LLHSDKLoginUser
struct FLLHSDKLoginUser
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_934[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AppUid;                                            // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_935[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGuest;                                          // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSafe;                                           // 0x41(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_938[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LimitDeviceCount;                                  // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LLHSDK.LLHSDKLoginUserInfoMap
struct FLLHSDKLoginUserInfoMap
{
public:
	TMap<class FString, class FString>           Info;                                              // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct LLHSDK.LLHSDKLoginUserInfo
struct FLLHSDKLoginUserInfo
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Phone;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserRegion;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestPoint;                                         // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDomesticHasBindAnyOne;                            // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNewReg;                                         // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsIdentified;                                     // 0x4E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAbusePrevented;                                 // 0x4F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<enum class ELLHSDKLoginType>            BoundLoginTypes;                                   // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TMap<enum class ELLHSDKLoginType, struct FLLHSDKLoginUserInfoMap> BoundInfoMap;                                      // 0xA0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FLLHSDKLoginUserInfoMap               UserExtra;                                         // 0xF0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LLHSDK.SDKSocialUserInfo
struct FSDKSocialUserInfo
{
public:
	class FString                                Avatar;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BindType;                                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LLHSDK.LLHSDKGoogleSkuItemDetail
struct FLLHSDKGoogleSkuItemDetail
{
public:
	enum class ELLHSDKPayGenericSkuItemType      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Price;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sku;                                               // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Currency;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PriceAmountMicros;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_942[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SdkConvertSymbol;                                  // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LLHSDK.LLHSDKGenericSkuItemsDetailList
struct FLLHSDKGenericSkuItemsDetailList
{
public:
	TArray<struct FLLHSDKGoogleSkuItemDetail>    Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LLHSDK.LLHSDKCustomerServiceExtra
struct FLLHSDKCustomerServiceExtra
{
public:
	TArray<class FString>                        Tags;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomParams;                                      // 0x10(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LLHSDK.LLHSDKLocaleInfo
struct FLLHSDKLocaleInfo
{
public:
	class FString                                Language;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LLHSDK.LLHSDKGoogleSubCombineItem
struct FLLHSDKGoogleSubCombineItem
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProductID;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CombineItemName1;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CombineItemName2;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Price;                                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Currency;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PriceAmountMicros;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SdkConvertSymbol;                                  // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LLHSDK.LLHSDKGoogleSkuSubGood
struct FLLHSDKGoogleSkuSubGood
{
public:
	class FString                                OfferToken;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CombineSize;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLLHSDKGoogleSubCombineItem>   CombineItems;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OfferTags;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LLHSDK.LLHSDKGoogleSkuSubItemDetail
struct FLLHSDKGoogleSkuSubItemDetail
{
public:
	enum class ELLHSDKPayGenericSkuItemType      ItemType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sku;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubGoodsSize;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_951[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLLHSDKGoogleSkuSubGood>       SubGoods;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LLHSDK.LLHSDKGenericSkuSubItemsDetailList
struct FLLHSDKGenericSkuSubItemsDetailList
{
public:
	TArray<struct FLLHSDKGoogleSkuSubItemDetail> Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


