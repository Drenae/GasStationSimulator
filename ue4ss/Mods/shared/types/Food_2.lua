---@meta

---@class AFood_2_C : AFoodBase
---@field UberGraphFrame FPointerToUberGraphFrame
local AFood_2_C = {}

function AFood_2_C:ReceiveBeginPlay() end
function AFood_2_C:ReceiveDestroyed() end
---@param EntryPoint int32
function AFood_2_C:ExecuteUbergraph_Food_2(EntryPoint) end


