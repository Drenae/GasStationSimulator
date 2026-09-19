---@meta

---@class AWindmill_withBody_wooden_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RotatingMovement URotatingMovementComponent
---@field windmil_fix_SM_windmill_01_a UStaticMeshComponent
---@field windmil_fix_SM_windmill_01_b UStaticMeshComponent
---@field WindmillSound UAudioComponent
---@field windmil_fix_SM_windmill_01_c UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field RotateSpeed float
local AWindmill_withBody_wooden_C = {}

function AWindmill_withBody_wooden_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AWindmill_withBody_wooden_C:ExecuteUbergraph_Windmill_withBody_wooden(EntryPoint) end


