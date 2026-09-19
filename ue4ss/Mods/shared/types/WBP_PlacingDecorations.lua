---@meta

---@class UWBP_PlacingDecorations_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControllsHorizontal UVerticalBox
---@field E_ROTATE UWBP_KeyBindedAction_C
---@field LPM_INTERACTION UWBP_KeyBindedAction_C
---@field Q_ROTATE UWBP_KeyBindedAction_C
---@field RMB_INTERACTION UWBP_KeyBindedAction_C
---@field SHIFT_INTERACTION_1 UWBP_KeyBindedAction_C
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
local UWBP_PlacingDecorations_C = {}

function UWBP_PlacingDecorations_C:Construct() end
function UWBP_PlacingDecorations_C:Destruct() end
---@param ActionName FName
function UWBP_PlacingDecorations_C:KeybindingChanged(ActionName) end
function UWBP_PlacingDecorations_C:KeybindingReset() end
---@param EntryPoint int32
function UWBP_PlacingDecorations_C:ExecuteUbergraph_WBP_PlacingDecorations(EntryPoint) end


