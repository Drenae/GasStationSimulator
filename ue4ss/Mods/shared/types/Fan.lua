---@meta

---@class AFan_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RotatingMovement URotatingMovementComponent
---@field Fan UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field RotateSpeed float
local AFan_C = {}

function AFan_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AFan_C:ExecuteUbergraph_Fan(EntryPoint) end


