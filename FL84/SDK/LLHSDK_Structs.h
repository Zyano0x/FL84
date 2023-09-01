#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LLHSDK.ELLHSDKNetworkType
	 */
	enum class ELLHSDKNetworkType : uint8_t
	{
		Unknown           = 0,
		NotConnected      = 1,
		Type_WiFi         = 2,
		Type_Unknown_Cell = 3,
		Type_2G           = 4,
		Type_3G           = 5,
		Type_4G           = 6,
		Type_5G           = 7,
		MAX               = 8
	};

	/**
	 * Enum LLHSDK.ELLHSDKLoginType
	 */
	enum class ELLHSDKLoginType : uint8_t
	{
		TYPE_NONE                       = 0,
		TYPE_QUICK_LOGIN                = 1,
		TYPE_LILITH_LOGIN               = 2,
		TYPE_MOBILE_LOGIN               = 3,
		TYPE_FACEBOOK_LOGIN             = 4,
		TYPE_GAME_CENTER_LOGIN          = 5,
		TYPE_GOOGLE_PLUS_OR_GAMES_LOGIN = 6,
		TYPE_WECHAT_LOGIN               = 7,
		TYPE_QQ_LOGIN                   = 8,
		TYPE_AUTO_LOGIN                 = 9,
		TYPE_VK_LOGIN                   = 10,
		TYPE_GOOGLE_LOGIN               = 11,
		TYPE_LINE_LOGIN                 = 12,
		TYPE_TWITTER_LOGIN              = 13,
		TYPE_APPLE_LOGIN                = 14,
		TYPE_WEIBO_LOGIN                = 15,
		TYPE_PGS_LOGIN                  = 16,
		TYPE_TIKTOK_LOGIN               = 17,
		TYPE_STEAM_LOGIN                = 18,
		TYPE_MAX                        = 19
	};

	/**
	 * Enum LLHSDK.ELLHSDKScreenOrientation
	 */
	enum class ELLHSDKScreenOrientation : uint8_t
	{
		Portrait         = 0,
		ReversePortrait  = 1,
		SensorPortrait   = 2,
		Landscape        = 3,
		ReverseLandscape = 4,
		SensorLandscape  = 5,
		Sensor           = 6,
		FullSensor       = 7,
		MAX              = 8
	};

	/**
	 * Enum LLHSDK.ELLHSDKPayType
	 */
	enum class ELLHSDKPayType : uint8_t
	{
		None         = 0,
		Apple        = 1,
		Google       = 2,
		Ali          = 3,
		Wechat       = 4,
		Union        = 5,
		PlayPhone    = 6,
		MyCard       = 7,
		Payssion     = 8,
		HuaweiAbroad = 9,
		Paypal       = 10,
		Voucher      = 11,
		Samsung      = 12,
		MAX          = 13
	};

	/**
	 * Enum LLHSDK.ELLHSDKPayGenericSkuItemType
	 */
	enum class ELLHSDKPayGenericSkuItemType : uint8_t
	{
		Normal       = 0,
		Subscription = 1,
		MAX          = 2
	};

	/**
	 * Enum LLHSDK.ELLHSDKCustomerServiceRateAction
	 */
	enum class ELLHSDKCustomerServiceRateAction : uint8_t
	{
		Success  = 0,
		FeedBack = 1,
		Close    = 2,
		Fail     = 3,
		MAX      = 4
	};

	/**
	 * Enum LLHSDK.ELLHSDKSupportedLanguage
	 */
	enum class ELLHSDKSupportedLanguage : uint8_t
	{
		DefaultLanguage    = 0,
		Arabic             = 1,
		English            = 2,
		French             = 3,
		German             = 4,
		Indonesian         = 5,
		Italian            = 6,
		Japanese           = 7,
		Korean             = 8,
		Malay              = 9,
		Polish             = 10,
		Portuguese         = 11,
		Russian            = 12,
		Spanish            = 13,
		Thai               = 14,
		Turkish            = 15,
		Vietnamese         = 16,
		Hindi              = 17,
		SimplifiedChinese  = 18,
		TraditionalChinese = 19,
		MAX                = 20
	};

	/**
	 * Enum LLHSDK.ELLHSDKReportCurrencyType
	 */
	enum class ELLHSDKReportCurrencyType : uint8_t
	{
		USA_Dollar    = 0,
		China_Yuan    = 1,
		Taiwan_Dollar = 2,
		MAX           = 3
	};

	/**
	 * Enum LLHSDK.ELLHSDKLoginUIStyle
	 */
	enum class ELLHSDKLoginUIStyle : uint8_t
	{
		NormalStyle             = 0,
		SoulHunterStyle         = 1,
		GameCenterStyle         = 2,
		DomesticStyle           = 3,
		GameCenterDomesticStyle = 4,
		MAX                     = 5
	};

	/**
	 * Enum LLHSDK.ELLHSDKGravity
	 */
	enum class ELLHSDKGravity : uint8_t
	{
		NO_GRAVITY  = 0,
		LeftTop     = 1,
		LeftCenter  = 2,
		LeftBottom  = 3,
		MidTop      = 4,
		MidBottom   = 5,
		RightTop    = 6,
		RightCenter = 7,
		RightBottom = 8,
		MAX         = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LLHSDK.LLHSDKLoginUser
	 * Size -> 0x0048
	 */
	struct FLLHSDKLoginUser
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJFF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AppUid;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppToken;                                                // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELLHSDKLoginType                                           LoginType;                                               // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENN8[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGuest;                                                // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSafe;                                                 // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4CB[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LimitDeviceCount;                                        // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKLoginUserInfoMap
	 * Size -> 0x0050
	 */
	struct FLLHSDKLoginUserInfoMap
	{
	public:
		TMap<class FString, class FString>                         Info;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKLoginUserInfo
	 * Size -> 0x0140
	 */
	struct FLLHSDKLoginUserInfo
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7A0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Phone;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserRegion;                                              // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IP;                                                      // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RestPoint;                                               // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDomesticHasBindAnyOne;                                  // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNewReg;                                               // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsIdentified;                                           // 0x004E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAbusePrevented;                                       // 0x004F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoundLoginTypes[0x50];                                   // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<ELLHSDKLoginType, struct FLLHSDKLoginUserInfoMap>     BoundInfoMap;                                            // 0x00A0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FLLHSDKLoginUserInfoMap                             UserExtra;                                               // 0x00F0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.SDKSocialUserInfo
	 * Size -> 0x0038
	 */
	struct FSDKSocialUserInfo
	{
	public:
		class FString                                              Avatar;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BindType;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WV5N[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKGoogleSkuItemDetail
	 * Size -> 0x0070
	 */
	struct FLLHSDKGoogleSkuItemDetail
	{
	public:
		ELLHSDKPayGenericSkuItemType                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Y1N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Price;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Sku;                                                     // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Currency;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PriceAmountMicros;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAK5[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SdkConvertSymbol;                                        // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKGenericSkuItemsDetailList
	 * Size -> 0x0010
	 */
	struct FLLHSDKGenericSkuItemsDetailList
	{
	public:
		TArray<struct FLLHSDKGoogleSkuItemDetail>                  Items;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKCustomerServiceExtra
	 * Size -> 0x0060
	 */
	struct FLLHSDKCustomerServiceExtra
	{
	public:
		TArray<class FString>                                      Tags;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         CustomParams;                                            // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKLocaleInfo
	 * Size -> 0x0020
	 */
	struct FLLHSDKLocaleInfo
	{
	public:
		class FString                                              Language;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKGoogleSubCombineItem
	 * Size -> 0x0070
	 */
	struct FLLHSDKGoogleSubCombineItem
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HX2S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProductID;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CombineItemName1;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CombineItemName2;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Price;                                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Currency;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PriceAmountMicros;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HNB[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SdkConvertSymbol;                                        // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKGoogleSkuSubGood
	 * Size -> 0x0038
	 */
	struct FLLHSDKGoogleSkuSubGood
	{
	public:
		class FString                                              OfferToken;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CombineSize;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCA3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLLHSDKGoogleSubCombineItem>                 CombineItems;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      OfferTags;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKGoogleSkuSubItemDetail
	 * Size -> 0x0050
	 */
	struct FLLHSDKGoogleSkuSubItemDetail
	{
	public:
		ELLHSDKPayGenericSkuItemType                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIAW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Sku;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubGoodsSize;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3W1C[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLLHSDKGoogleSkuSubGood>                     SubGoods;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LLHSDK.LLHSDKGenericSkuSubItemsDetailList
	 * Size -> 0x0010
	 */
	struct FLLHSDKGenericSkuSubItemsDetailList
	{
	public:
		TArray<struct FLLHSDKGoogleSkuSubItemDetail>               Items;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
