#ifndef UE4SS_SDK_TechTree_HPP
#define UE4SS_SDK_TechTree_HPP

#include "TechTree_enums.hpp"

struct FTechNodeLink
{
    class UTechnologyAsset* ParentTechnology;                                         // 0x0000 (size: 0x8)
    class UTechnologyAsset* ChildTechnology;                                          // 0x0008 (size: 0x8)
    FVector2D LinkFromPostion;                                                        // 0x0010 (size: 0x8)
    FVector2D LinkToPostion;                                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FUnlockedTechnologiesData
{
    TArray<UTechnologyAsset*> UnlockedTechnologies;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

class UTTBaseNode : public UObject
{
    int32 NodePosX;                                                                   // 0x0028 (size: 0x4)
    int32 NodePosY;                                                                   // 0x002C (size: 0x4)
    TArray<UTTBaseNode*> ParentNodes;                                                 // 0x0030 (size: 0x10)
    TArray<UTTBaseNode*> ChildNodes;                                                  // 0x0040 (size: 0x10)
    uint32 UniqueID;                                                                  // 0x0050 (size: 0x4)

}; // Size: 0x60

class UTTTechNode : public UTTBaseNode
{
    class UTechnologyAsset* TechnologyAsset;                                          // 0x0060 (size: 0x8)
    bool IsUnlockedByDefault;                                                         // 0x0068 (size: 0x1)
    bool bFlipPinsOrientation;                                                        // 0x0069 (size: 0x1)
    TSoftObjectPtr<class UTechnologyAsset> NavigationMoveLeft;                        // 0x0070 (size: 0x28)
    TSoftObjectPtr<class UTechnologyAsset> NavigationMoveRight;                       // 0x0098 (size: 0x28)
    TSoftObjectPtr<class UTechnologyAsset> NavigationMoveUp;                          // 0x00C0 (size: 0x28)
    TSoftObjectPtr<class UTechnologyAsset> NavigationMoveDown;                        // 0x00E8 (size: 0x28)

}; // Size: 0x120

class UTechNodeArrowWidget : public UUserWidget
{
    ETechNodePinType PinType;                                                         // 0x0260 (size: 0x1)
    float ConnectionAngle;                                                            // 0x0264 (size: 0x4)
    class UTechnologyAsset* ParentTechnology;                                         // 0x0268 (size: 0x8)
    class UTechnologyAsset* ChildTechnology;                                          // 0x0270 (size: 0x8)

    void OnNodeArrowInitialized();
}; // Size: 0x278

class UTechNodeWidget : public UUserWidget
{
    class UTechnologyAsset* TechnologyAsset;                                          // 0x0260 (size: 0x8)

    void OnTechNodeInitialized();
}; // Size: 0x268

class UTechTreeManager : public UActorComponent
{
    FTechTreeManagerOnTechTreeSelected OnTechTreeSelected;                            // 0x00B0 (size: 0x10)
    void OnTechTreeSelected(class UTechnologyTree* SelectedTechTree);
    TMap<UTechnologyTree*, UTechnologyTree*> AssignedTechTrees;                       // 0x00C0 (size: 0x50)
    FTechTreeManagerOnTechnologyUnlockStateChanged OnTechnologyUnlockStateChanged;    // 0x0110 (size: 0x10)
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnLocked);
    FTechTreeManagerOnTechTreeAssigned OnTechTreeAssigned;                            // 0x0120 (size: 0x10)
    void OnTechTreeAssigned(class UTechnologyTree* TechTree);
    TSubclassOf<class UTechnologySaveGame> SaveGameTemplate;                          // 0x0130 (size: 0x8)
    FTechTreeManagerOnTechTreeRecovered OnTechTreeRecovered;                          // 0x0138 (size: 0x10)
    void OnTechTreeRecovered(const class UTechnologyTree* TechTree);
    class UTechnologyTree* TechnologyTree;                                            // 0x0148 (size: 0x8)
    class UTechTreeWidget* TechTreeWidget;                                            // 0x0150 (size: 0x8)

    void UnlockTechnology(class UTechnologyAsset* Technology);
    void TryToUnlockTechnology(class UTechnologyAsset* Technology);
    void SelectTechTree(class UTechnologyTree* TechTree);
    void SaveTechToObject(class USaveGame* SaveGameObject);
    void SaveTechStateFromSlot(FString SlotName, const int32 UserIndex);
    void Reset();
    void OnTechTreeRecovered__DelegateSignature(const class UTechnologyTree* TechTree);
    void OnTechTreeAssigned__DelegateSignature(class UTechnologyTree* TechTree);
    void OnTechnologyUnlockStateChanged__DelegateSignature(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnLocked);
    void LockTechnology(class UTechnologyAsset* Technology);
    void LoadTechStateFromSlot(FString SlotName, const int32 UserIndex);
    void LoadTechFromObject(class USaveGame* SaveGameObject);
    bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);
    bool IsChildTechnology(class UTTTechNode* ParentNode, class UTechnologyAsset* ChildNodeTechnology);
    bool HasUnlockedParents(class UTechnologyAsset* Technology);
    void HandleTechnologyStateChanged(class UTTTechNode* TechNode, bool IsUnLocked);
    class UTechTreeWidget* GetTechTreeWidget();
    class USaveGame* GetSavegameTechObject();
    int32 GetNumberTreesAssigned();
    class UTTTechNode* GetNodeFromTechAsset(class UTechnologyAsset* Technology);
    class UTechnologyTree* GetAssignedTechTree();
    bool CheckIsTechnologyInTreeUnlock(class UTechnologyAsset* TechnologyAssetToCheck, class UTechnologyTree* TechTreeToCheck);
    void AssignTechTree(class UTechnologyTree* TechTree, class UTechTreeWidget* TechTreeWidget);
}; // Size: 0x160

class UTechTreeWidget : public UWidget
{
    class UTechnologyTree* TechTree;                                                  // 0x0108 (size: 0x8)
    TArray<TWeakObjectPtr<class UTechNodeWidget>> SlotWidgetsCached;                  // 0x0150 (size: 0x10)
    TArray<TWeakObjectPtr<class UTechNodeArrowWidget>> ArrowWidgetsCached;            // 0x0160 (size: 0x10)

    TArray<UTechNodeWidget*> GetTechNodeWidgets();
    class UTechNodeWidget* GetTechNode(class UTechnologyAsset* TechnologyAsset);
    TArray<UTechNodeArrowWidget*> GetArrowWidgets();
    void CustomRebuildWidget();
}; // Size: 0x170

class UTechnologyAsset : public UPrimaryDataAsset
{
    FSlateBrush TechIcon;                                                             // 0x0030 (size: 0x88)

}; // Size: 0xB8

class UTechnologySaveGame : public USaveGame
{
    TArray<UTechnologyAsset*> UnlockedTechnologies;                                   // 0x0028 (size: 0x10)
    TMap<UTechnologyTree*, FUnlockedTechnologiesData> MultipleTreesUnlockedTechnologies; // 0x0038 (size: 0x50)

}; // Size: 0x88

class UTechnologyTree : public UObject
{
    FVector2D TreeSize;                                                               // 0x0028 (size: 0x8)
    ETechTreeOrientation Orientation;                                                 // 0x0030 (size: 0x1)
    FSlateBrush BackgroundImage;                                                      // 0x0038 (size: 0x88)
    float ConnectionLineThickness;                                                    // 0x00C0 (size: 0x4)
    FLinearColor ConnectionLineColor;                                                 // 0x00C4 (size: 0x10)
    TSubclassOf<class UTechNodeWidget> SlotTemplate;                                  // 0x00D8 (size: 0x8)
    FVector2D SlotSize;                                                               // 0x00E0 (size: 0x8)
    TSubclassOf<class UTechNodeArrowWidget> ArrowTemplate;                            // 0x00E8 (size: 0x8)
    FVector2D ArrowSize;                                                              // 0x00F0 (size: 0x8)
    int32 GridSnapSize;                                                               // 0x00F8 (size: 0x4)
    bool ShowBoundaries;                                                              // 0x00FC (size: 0x1)
    FLinearColor BoundariesColor;                                                     // 0x0100 (size: 0x10)
    float BoundariesThickness;                                                        // 0x0110 (size: 0x4)
    bool ShowPinArrows;                                                               // 0x0114 (size: 0x1)
    bool ShowAlignmentGrid;                                                           // 0x0115 (size: 0x1)
    FVector2D AlignmentGridSize;                                                      // 0x0118 (size: 0x8)
    FVector2D AlignmentGridOffset;                                                    // 0x0120 (size: 0x8)
    FLinearColor AlignmentGridColor;                                                  // 0x0128 (size: 0x10)
    float AlignmentGridThickness;                                                     // 0x0138 (size: 0x4)
    TArray<UTTTechNode*> TechNodes;                                                   // 0x0140 (size: 0x10)
    TMap<UTechnologyAsset*, UTTTechNode*> TechnologiesMap;                            // 0x0150 (size: 0x50)
    class UEdGraph* UpdateGraph;                                                      // 0x01A0 (size: 0x8)
    int32 UniqueID;                                                                   // 0x01A8 (size: 0x4)
    FTechnologyTreeOnTechnologyUnlockStateChanged OnTechnologyUnlockStateChanged;     // 0x01B0 (size: 0x10)
    void OnTechnologyUnlockStateChanged(class UTTTechNode* TechNode, bool IsUnLocked);
    TMap<UTechnologyAsset*, UTTTechNode*> UnlockedTechnologies;                       // 0x01C0 (size: 0x50)
    TArray<UTTTechNode*> CurrentlyActiveNodes;                                        // 0x0210 (size: 0x10)
    class UTechnologyTree* TechTreeTemplate;                                          // 0x0220 (size: 0x8)
    class UTechnologyAsset* PreviousTechnologyToUnlock;                               // 0x0228 (size: 0x8)
    class UTechnologyTree* PreviousTechnologyTree;                                    // 0x0230 (size: 0x8)
    class UTechnologyAsset* EmptyTechToUnlock;                                        // 0x0238 (size: 0x8)

    void OnTechnologyUnlockStateChanged__DelegateSignature(class UTTTechNode* TechNode, bool IsUnLocked);
    bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);
    bool HasUnlockedParents(class UTechnologyAsset* Technology);
    FString GetTechAssetName();
    TArray<FTechNodeLink> GetConnections();
    TArray<FTechNodeLink> FilterConnections(const TArray<FTechNodeLink>& ConnectionsIn, const TArray<UTechnologyAsset*>& IgnoredParentTechnologies, const TArray<UTechnologyAsset*>& IgnoredChildTechnologies);
}; // Size: 0x248

#endif
