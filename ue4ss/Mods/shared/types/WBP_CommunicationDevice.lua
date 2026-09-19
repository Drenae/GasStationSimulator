---@meta

---@class UWBP_CommunicationDevice_C : UAirplaneHighlightAreaWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LMB UWBP_KeyBindedAction_C
local UWBP_CommunicationDevice_C = {}

function UWBP_CommunicationDevice_C:Destruct() end
---@param ActionName FName
function UWBP_CommunicationDevice_C:KeyBindChanged(ActionName) end
function UWBP_CommunicationDevice_C:KeyBindReset() end
function UWBP_CommunicationDevice_C:Construct() end
---@param EntryPoint int32
function UWBP_CommunicationDevice_C:ExecuteUbergraph_WBP_CommunicationDevice(EntryPoint) end


