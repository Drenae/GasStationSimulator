---@meta

---@class ABP_TapeTool_C : ATapeTool
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_TapeTool_C = {}

function ABP_TapeTool_C:ReceiveBeginPlay() end
function ABP_TapeTool_C:OnAllTapeUsedEvent() end
---@param EntryPoint int32
function ABP_TapeTool_C:ExecuteUbergraph_BP_TapeTool(EntryPoint) end


