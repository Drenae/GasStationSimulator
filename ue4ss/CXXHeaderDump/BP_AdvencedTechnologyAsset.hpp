#ifndef UE4SS_SDK_BP_AdvencedTechnologyAsset_HPP
#define UE4SS_SDK_BP_AdvencedTechnologyAsset_HPP

class UBP_AdvencedTechnologyAsset_C : public UTechnologyAsset
{
    FText PrimaryText;                                                                // 0x00B8 (size: 0x18)
    FText SecondaryText;                                                              // 0x00D0 (size: 0x18)
    uint8 Rank;                                                                       // 0x00E8 (size: 0x1)
    TMap<uint8, uint8> TechnologyCost;                                                // 0x00F0 (size: 0x50)
    int32 BuildingLevel;                                                              // 0x0140 (size: 0x4)
    TSoftObjectPtr<class AInteractableActor> Building;                                // 0x0148 (size: 0x28)
    EBuildingType BuildingType;                                                       // 0x0170 (size: 0x1)
    float Cost;                                                                       // 0x0174 (size: 0x4)
    int32 BuildingLevelNeeded;                                                        // 0x0178 (size: 0x4)
    TArray<FRequiredItems> RequiredItems;                                             // 0x0180 (size: 0x10)
    EDLCName DLCType;                                                                 // 0x0190 (size: 0x1)
    FSlateBrush BuildingPhoto;                                                        // 0x0198 (size: 0x88)
    FGameplayTag UnlockTag;                                                           // 0x0220 (size: 0x8)
    FGameplayTag RedDotTag;                                                           // 0x0228 (size: 0x8)
    bool IsUsingAlternativeUnlockCondition;                                           // 0x0230 (size: 0x1)
    EBuildingType AlternativeUnlockBuildingType;                                      // 0x0231 (size: 0x1)
    int32 AlternativeUnlockBuildingLevel;                                             // 0x0234 (size: 0x4)
    FName AchievementToUnlock;                                                        // 0x0238 (size: 0x8)
    bool HiddenByDefault;                                                             // 0x0240 (size: 0x1)
    float CostCP;                                                                     // 0x0244 (size: 0x4)
    bool UseInvertedTag;                                                              // 0x0248 (size: 0x1)

}; // Size: 0x249

#endif
