---@meta

---@class UBP_AdvencedTechnologyAsset_C : UTechnologyAsset
---@field PrimaryText FText
---@field SecondaryText FText
---@field Rank uint8
---@field TechnologyCost TMap<uint8, uint8>
---@field BuildingLevel int32
---@field Building TSoftObjectPtr<AInteractableActor>
---@field BuildingType EBuildingType
---@field Cost float
---@field BuildingLevelNeeded int32
---@field RequiredItems TArray<FRequiredItems>
---@field DLCType EDLCName
---@field BuildingPhoto FSlateBrush
---@field UnlockTag FGameplayTag
---@field RedDotTag FGameplayTag
---@field IsUsingAlternativeUnlockCondition boolean
---@field AlternativeUnlockBuildingType EBuildingType
---@field AlternativeUnlockBuildingLevel int32
---@field AchievementToUnlock FName
---@field HiddenByDefault boolean
---@field CostCP float
---@field UseInvertedTag boolean
local UBP_AdvencedTechnologyAsset_C = {}



