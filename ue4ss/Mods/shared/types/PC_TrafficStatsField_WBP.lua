---@meta

---@class UPC_TrafficStatsField_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ImactIconSwitcher UWidgetSwitcher
---@field Label UTextBlock
---@field NegativeIcon UImage
---@field PositiveIcon UImage
---@field Icon UTexture2D
local UPC_TrafficStatsField_WBP_C = {}

---@param ImpactPositive boolean
function UPC_TrafficStatsField_WBP_C:SetImpactImage(ImpactPositive) end
---@param InText FText
function UPC_TrafficStatsField_WBP_C:SetMainLabelText(InText) end
function UPC_TrafficStatsField_WBP_C:Construct() end
---@param EntryPoint int32
function UPC_TrafficStatsField_WBP_C:ExecuteUbergraph_PC_TrafficStatsField_WBP(EntryPoint) end


