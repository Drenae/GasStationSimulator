---@meta

---@class UWBP_TimerParent_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
local UWBP_TimerParent_C = {}

function UWBP_TimerParent_C:Construct() end
function UWBP_TimerParent_C:onchanged() end
---@param EntryPoint int32
function UWBP_TimerParent_C:ExecuteUbergraph_WBP_TimerParent(EntryPoint) end


