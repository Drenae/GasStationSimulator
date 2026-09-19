---@meta

---@class AWindmill_withBody_metal_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RotatingMovement URotatingMovementComponent
---@field windmil_fix_SM_windmill_01_a UStaticMeshComponent
---@field WindmillSound UAudioComponent
---@field windmil_fix_SM_windmill_01_c UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field RotateSpeed float
local AWindmill_withBody_metal_C = {}

function AWindmill_withBody_metal_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AWindmill_withBody_metal_C:ExecuteUbergraph_Windmill_withBody_metal(EntryPoint) end


