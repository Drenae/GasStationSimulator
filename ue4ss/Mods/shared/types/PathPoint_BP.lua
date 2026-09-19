---@meta

---@class APathPoint_BP_C : APathPoint
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Cube UStaticMeshComponent
---@field Scene USceneComponent
local APathPoint_BP_C = {}

function APathPoint_BP_C:ShowStats() end
function APathPoint_BP_C:ReceiveBeginPlay() end
function APathPoint_BP_C:CustomEvent_0() end
---@param EntryPoint int32
function APathPoint_BP_C:ExecuteUbergraph_PathPoint_BP(EntryPoint) end


