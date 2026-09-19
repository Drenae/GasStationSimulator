---@meta

---@class UPlatformCarStatsSmall_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckBox UCheckBox
---@field Gear_HorizontalBox UHorizontalBox
---@field GearProgressBar UImage
---@field Image_85 UImage
---@field Image_99 UImage
---@field StatsPercentValue_TXT UTextBlock
---@field StatName FText
---@field Mat_INSTGearProgressBar UMaterialInstanceDynamic
---@field Icon UTexture2D
---@field Progress float
---@field bShowCheckbox boolean
---@field StatType ECarPartStat
local UPlatformCarStatsSmall_C = {}

---@param CarPartType EJunkyardCarPartType
function UPlatformCarStatsSmall_C:UpdateVisibility(CarPartType) end
function UPlatformCarStatsSmall_C:SetChecked() end
---@param InIsChecked boolean
function UPlatformCarStatsSmall_C:CheckCheckbox(InIsChecked) end
---@param IsDesignTime boolean
function UPlatformCarStatsSmall_C:PreConstruct(IsDesignTime) end
---@param ProgressPercent float
function UPlatformCarStatsSmall_C:UpdateStats(ProgressPercent) end
---@param EntryPoint int32
function UPlatformCarStatsSmall_C:ExecuteUbergraph_PlatformCarStatsSmall(EntryPoint) end


