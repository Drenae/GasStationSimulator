---@meta

---@class UWBP_FuelPriceBoardMinigame_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControllsHorizontal UVerticalBox
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field Shift_Interaction2_1 UWBP_KeyBindedAction_C
local UWBP_FuelPriceBoardMinigame_C = {}

function UWBP_FuelPriceBoardMinigame_C:Construct() end
function UWBP_FuelPriceBoardMinigame_C:UpdateKey() end
---@param bNewGamepadMode boolean
function UWBP_FuelPriceBoardMinigame_C:UpdateKey2(bNewGamepadMode) end
---@param EntryPoint int32
function UWBP_FuelPriceBoardMinigame_C:ExecuteUbergraph_WBP_FuelPriceBoardMinigame(EntryPoint) end


