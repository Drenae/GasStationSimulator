---@meta

---@class UWBP_AirplaneHighlightAreaWidget_C : UAirplaneHighlightAreaWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field SHIFT_INTERACTION UWBP_KeyBindedAction_C
---@field ShowTutorialWidget boolean
local UWBP_AirplaneHighlightAreaWidget_C = {}

function UWBP_AirplaneHighlightAreaWidget_C:Construct() end
function UWBP_AirplaneHighlightAreaWidget_C:Destruct() end
---@param ActionName FName
function UWBP_AirplaneHighlightAreaWidget_C:KeyBindChanged(ActionName) end
function UWBP_AirplaneHighlightAreaWidget_C:KeyBindReset() end
function UWBP_AirplaneHighlightAreaWidget_C:ForceShowTutorial() end
---@param EntryPoint int32
function UWBP_AirplaneHighlightAreaWidget_C:ExecuteUbergraph_WBP_AirplaneHighlightAreaWidget(EntryPoint) end


