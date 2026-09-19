---@meta

---@class AFood_3_C : AFoodBase
---@field UberGraphFrame FPointerToUberGraphFrame
local AFood_3_C = {}

function AFood_3_C:ReceiveBeginPlay() end
function AFood_3_C:ReceiveDestroyed() end
---@param EntryPoint int32
function AFood_3_C:ExecuteUbergraph_Food_3(EntryPoint) end


