---@meta

---@class UEconomyDebug_UI_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelVertical UVerticalBox
---@field ProductVertical UVerticalBox
---@field UpdateTime float
---@field curTime float
local UEconomyDebug_UI_WBP_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UEconomyDebug_UI_WBP_C:Tick(MyGeometry, InDeltaTime) end
function UEconomyDebug_UI_WBP_C:UpdateList() end
function UEconomyDebug_UI_WBP_C:Construct() end
---@param EntryPoint int32
function UEconomyDebug_UI_WBP_C:ExecuteUbergraph_EconomyDebug_UI_WBP(EntryPoint) end


