---@meta

---@class UWBP_CraneMinigame_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControllsMagnetMode UVerticalBox
---@field CraneChangeCamera UWBP_KeyBindedAction_C
---@field CraneResetWrecks UWBP_KeyBindedAction_C
---@field Interaction_F UWBP_KeyBindedAction_C
---@field ShowHideHighlights UWBP_KeyBindedAction_C
---@field ShowHideTooltips UWBP_KeyBindedAction_C
local UWBP_CraneMinigame_C = {}

function UWBP_CraneMinigame_C:Construct() end
---@param ActionName FName
function UWBP_CraneMinigame_C:KeyBindChanged(ActionName) end
function UWBP_CraneMinigame_C:KeyBindReset() end
function UWBP_CraneMinigame_C:Destruct() end
---@param EntryPoint int32
function UWBP_CraneMinigame_C:ExecuteUbergraph_WBP_CraneMinigame(EntryPoint) end


