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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ReplicationGraph.ReplicationGraph
	 * Size -> 0x04D0 (FullSize[0x04F8] - InheritedSize[0x0028])
	 */
	class UReplicationGraph : public UReplicationDriver
	{
	public:
		class UClass*                                              ReplicationConnectionManagerClass;                       // 0x0028(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetDriver*                                          NetDriver;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              Connections;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              PendingConnections;                                      // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAG8[0x40];                                  // 0x0058(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       GlobalGraphNodes;                                        // 0x0098(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UReplicationGraphNode*>                       PrepareForReplicationNodes;                              // 0x00A8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UReplicationGraphNode*>                       PostReplicateNodes;                                      // 0x00B8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IX94[0x3C0];                                 // 0x00C8(0x03C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UNetConnection*, struct FClassExtraReplicatedInfo> ConnectionInfos;                                         // 0x0488(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WARF[0x20];                                  // 0x04D8(0x0020) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.BasicReplicationGraph
	 * Size -> 0x0038 (FullSize[0x0530] - InheritedSize[0x04F8])
	 */
	class UBasicReplicationGraph : public UReplicationGraph
	{
	public:
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x0500(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConnectionAlwaysRelevantNodePair>           AlwaysRelevantForConnectionList;                         // 0x0508(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsWithoutNetConnection;                              // 0x0518(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U84Y[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UReplicationGraphNode : public UObject
	{
	public:
		TArray<class UReplicationGraphNode*>                       AllChildNodes;                                           // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VTLI[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorList
	 * Size -> 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorList : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_QYJE[0x80];                                  // 0x0050(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
	 * Size -> 0x00B8 (FullSize[0x0108] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_4989[0xB8];                                  // 0x0050(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_AGLY[0x30];                                  // 0x00D0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
	 * Size -> 0x0078 (FullSize[0x0148] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_GLH1[0x78];                                  // 0x00D0(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DormancyNode
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_PZDD[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridCell
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_KW03[0x40];                                  // 0x00D0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReplicationGraphNode*                               DynamicNode;                                             // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_DormancyNode*                  DormancyNode;                                            // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
	 * Size -> 0x01D8 (FullSize[0x0228] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_48XO[0x1D8];                                 // 0x0050(0x01D8) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
	{
	public:
		class UReplicationGraphNode*                               ChildNode;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I0XY[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_NFO4[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
	{
	public:
		TArray<struct FTearOffActorInfo>                           TearOffActors;                                           // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z2O[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.NetReplicationGraphConnection
	 * Size -> 0x02B0 (FullSize[0x02D8] - InheritedSize[0x0028])
	 */
	class UNetReplicationGraphConnection : public UReplicationConnectionDriver
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHWH[0x1E0];                                 // 0x0030(0x01E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReplicationGraphDebugActor*                         DebugActor;                                              // 0x0210(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6XG[0x10];                                  // 0x0218(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLastLocationGatherInfo>                     LastGatherLocations;                                     // 0x0228(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJO9[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       ConnectionGraphNodes;                                    // 0x0240(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_TearOff_ForConnection*         TearOffNode;                                             // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UAAE[0x80];                                  // 0x0258(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphDebugActor
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class AReplicationGraphDebugActor : public AActor
	{
	public:
		class UReplicationGraph*                                   ReplicationGraph;                                        // 0x0228(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetReplicationGraphConnection*                      ConnectionManager;                                       // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ServerStopDebugging();
		void ServerStartDebugging();
		void ServerSetPeriodFrameForClass(class UClass* Class, int32_t PeriodFrame);
		void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
		void ServerSetConditionalActorBreakpoint(class AActor* Actor);
		void ServerPrintCullDistances();
		void ServerPrintAllActorInfo(const class FString& str);
		void ServerCellInfo();
		void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
