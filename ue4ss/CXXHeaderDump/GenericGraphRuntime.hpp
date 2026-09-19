#ifndef UE4SS_SDK_GenericGraphRuntime_HPP
#define UE4SS_SDK_GenericGraphRuntime_HPP

class APostapoMainMenuGameMode : public AGameModeBase
{
}; // Size: 0x2C0

class UGenericGraph : public UObject
{
    int32 UniqueNodeCounter;                                                          // 0x0028 (size: 0x4)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    TSubclassOf<class UGenericGraphNode> NodeType;                                    // 0x0040 (size: 0x8)
    TSubclassOf<class UGenericGraphEdge> EdgeType;                                    // 0x0048 (size: 0x8)
    FGameplayTagContainer GraphTags;                                                  // 0x0050 (size: 0x20)
    TArray<UGenericGraphNode*> RootNodes;                                             // 0x0070 (size: 0x10)
    TArray<UGenericGraphNode*> AllNodes;                                              // 0x0080 (size: 0x10)
    bool bEdgeEnabled;                                                                // 0x0090 (size: 0x1)

    void Print(bool ToConsole, bool ToScreen);
    int32 GetUniqueNodeID();
    void GetNodesByLevel(int32 Level, TArray<UGenericGraphNode*>& Nodes);
    int32 GetLevelNum();
}; // Size: 0x98

class UGenericGraphEdge : public UObject
{
    class UGenericGraph* Graph;                                                       // 0x0028 (size: 0x8)
    class UGenericGraphNode* StartNode;                                               // 0x0030 (size: 0x8)
    class UGenericGraphNode* EndNode;                                                 // 0x0038 (size: 0x8)

    class UGenericGraph* GetGraph();
}; // Size: 0x40

class UGenericGraphNode : public UObject
{
    int32 UniqueNodeID;                                                               // 0x0028 (size: 0x4)
    class UGenericGraph* Graph;                                                       // 0x0030 (size: 0x8)
    TArray<UGenericGraphNode*> ParentNodes;                                           // 0x0038 (size: 0x10)
    TArray<UGenericGraphNode*> ChildrenNodes;                                         // 0x0048 (size: 0x10)
    TMap<UGenericGraphNode*, UGenericGraphEdge*> Edges;                               // 0x0058 (size: 0x50)

    bool IsLeafNode();
    class UGenericGraph* GetGraph();
    class UGenericGraphEdge* GetEdge(class UGenericGraphNode* ChildNode);
    FText GetDescription();
}; // Size: 0xA8

#endif
