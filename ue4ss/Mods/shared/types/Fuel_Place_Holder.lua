---@meta

---@class UFuel_Place_Holder_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NewScore UWidgetAnimation
---@field GOAL_VELUE UTextBlock
---@field PLAYER_FUEL_VALUE UTextBlock
---@field STRIKE_SCORE_TXT UTextBlock
---@field WBP_FuelStatus UWBP_FuelStatus_C
---@field PreviousFuelStrike int32
local UFuel_Place_Holder_C = {}

---@param CurrentVuel float
---@param Goal float
function UFuel_Place_Holder_C:UpdateFuelMinigame(CurrentVuel, Goal) end
function UFuel_Place_Holder_C:Construct() end
---@param CurrentFuelAmount float
function UFuel_Place_Holder_C:OnFuelChanged(CurrentFuelAmount) end
---@param EntryPoint int32
function UFuel_Place_Holder_C:ExecuteUbergraph_Fuel_Place_Holder(EntryPoint) end


