---@meta

---@class AFood_5_C : AFoodBase
---@field UberGraphFrame FPointerToUberGraphFrame
local AFood_5_C = {}

function AFood_5_C:ReceiveBeginPlay() end
function AFood_5_C:ReceiveDestroyed() end
---@param EntryPoint int32
function AFood_5_C:ExecuteUbergraph_Food_5(EntryPoint) end


