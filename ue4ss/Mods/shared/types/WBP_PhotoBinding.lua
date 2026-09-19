---@meta

---@class UWBP_PhotoBinding_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_773 UImage
---@field Tab_Info UOverlay
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
local UWBP_PhotoBinding_C = {}

function UWBP_PhotoBinding_C:AtKeybindingsReset() end
function UWBP_PhotoBinding_C:Construct() end
---@param ActionName FName
function UWBP_PhotoBinding_C:AtChangedKey(ActionName) end
function UWBP_PhotoBinding_C:Destruct() end
---@param EntryPoint int32
function UWBP_PhotoBinding_C:ExecuteUbergraph_WBP_PhotoBinding(EntryPoint) end


