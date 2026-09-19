---@meta

---@class UWBP_PressForTutorial_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_1358 UImage
---@field Image_1534 UImage
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
local UWBP_PressForTutorial_C = {}

function UWBP_PressForTutorial_C:Construct() end
function UWBP_PressForTutorial_C:Destruct() end
---@param ActionName FName
function UWBP_PressForTutorial_C:KeyBindChanged(ActionName) end
function UWBP_PressForTutorial_C:KeyBindReset() end
---@param EntryPoint int32
function UWBP_PressForTutorial_C:ExecuteUbergraph_WBP_PressForTutorial(EntryPoint) end


