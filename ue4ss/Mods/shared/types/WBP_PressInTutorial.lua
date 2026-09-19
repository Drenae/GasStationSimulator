---@meta

---@class UWBP_PressInTutorial_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
local UWBP_PressInTutorial_C = {}

function UWBP_PressInTutorial_C:Construct() end
function UWBP_PressInTutorial_C:Destruct() end
---@param ActionName FName
function UWBP_PressInTutorial_C:KeyBindChanged(ActionName) end
function UWBP_PressInTutorial_C:KeyBindReset() end
---@param EntryPoint int32
function UWBP_PressInTutorial_C:ExecuteUbergraph_WBP_PressInTutorial(EntryPoint) end


