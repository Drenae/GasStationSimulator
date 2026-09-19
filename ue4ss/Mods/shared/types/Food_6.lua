---@meta

---@class AFood_6_C : AFoodBase
---@field UberGraphFrame FPointerToUberGraphFrame
local AFood_6_C = {}

function AFood_6_C:ReceiveBeginPlay() end
function AFood_6_C:ReceiveDestroyed() end
---@param EntryPoint int32
function AFood_6_C:ExecuteUbergraph_Food_6(EntryPoint) end


