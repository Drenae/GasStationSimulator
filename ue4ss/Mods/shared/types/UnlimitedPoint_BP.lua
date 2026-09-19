---@meta

---@class AUnlimitedPoint_BP_C : AUnlimitedPathPoint
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Cube UStaticMeshComponent
---@field Scene USceneComponent
---@field UnblockedParkingSpot boolean
local AUnlimitedPoint_BP_C = {}

function AUnlimitedPoint_BP_C:ReceiveBeginPlay() end
function AUnlimitedPoint_BP_C:ShowStats() end
---@param EntryPoint int32
function AUnlimitedPoint_BP_C:ExecuteUbergraph_UnlimitedPoint_BP(EntryPoint) end


