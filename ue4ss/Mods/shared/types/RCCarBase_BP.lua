---@meta

---@class ARCCarBase_BP_C : ADesertCar
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StartTransform FTransform
local ARCCarBase_BP_C = {}

function ARCCarBase_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ARCCarBase_BP_C:ExecuteUbergraph_RCCarBase_BP(EntryPoint) end


