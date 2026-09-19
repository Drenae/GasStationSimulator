---@meta

---@class ULow_Pressure_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field Image_arrow UImage
---@field Image_bar UImage
local ULow_Pressure_C = {}

function ULow_Pressure_C:Construct() end
---@param EntryPoint int32
function ULow_Pressure_C:ExecuteUbergraph_Low_Pressure(EntryPoint) end


