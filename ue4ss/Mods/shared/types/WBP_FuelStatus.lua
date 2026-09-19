---@meta

---@class UWBP_FuelStatus_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ALARM UWidgetAnimation
---@field Fuel_Slider USlider
---@field Fuel_TXT UTextBlock
---@field GasSation UTextBlock
---@field Image UImage
---@field Image_223 UImage
local UWBP_FuelStatus_C = {}

function UWBP_FuelStatus_C:Construct() end
---@param FuelStatusEnum EFuelState
function UWBP_FuelStatus_C:ALARM_ANIMATION(FuelStatusEnum) end
---@param EntryPoint int32
function UWBP_FuelStatus_C:ExecuteUbergraph_WBP_FuelStatus(EntryPoint) end


