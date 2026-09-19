---@meta

---@class UPlatformCarStats_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Gear_HorizontalBox UHorizontalBox
---@field GearProgressBar UImage
---@field StatIcon UImage
---@field StatsName_TXT UTextBlock
---@field StatsPercentValue_TXT UTextBlock
---@field StatName FText
---@field Mat_INSTGearProgressBar UMaterialInstanceDynamic
---@field Icon UTexture2D
---@field Progress float
---@field StatType ECarPartStat
local UPlatformCarStats_C = {}

---@param CarPartType EJunkyardCarPartType
function UPlatformCarStats_C:UpdateVisibility(CarPartType) end
---@param ProgressPercent float
---@param MaxProgressValue float
function UPlatformCarStats_C:UpdateStats(ProgressPercent, MaxProgressValue) end
function UPlatformCarStats_C:Construct() end
---@param EntryPoint int32
function UPlatformCarStats_C:ExecuteUbergraph_PlatformCarStats(EntryPoint) end


