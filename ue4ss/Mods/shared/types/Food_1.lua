---@meta

---@class AFood_1_C : AFoodBase
---@field UberGraphFrame FPointerToUberGraphFrame
local AFood_1_C = {}

function AFood_1_C:ReceiveBeginPlay() end
function AFood_1_C:ReceiveDestroyed() end
---@param EntryPoint int32
function AFood_1_C:ExecuteUbergraph_Food_1(EntryPoint) end


