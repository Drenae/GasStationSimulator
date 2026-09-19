---@meta

---@class AFood_4_C : AFoodBase
---@field UberGraphFrame FPointerToUberGraphFrame
local AFood_4_C = {}

function AFood_4_C:ReceiveBeginPlay() end
function AFood_4_C:ReceiveDestroyed() end
---@param EntryPoint int32
function AFood_4_C:ExecuteUbergraph_Food_4(EntryPoint) end


