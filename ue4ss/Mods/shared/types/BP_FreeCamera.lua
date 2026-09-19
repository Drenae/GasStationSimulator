---@meta

---@class ABP_FreeCamera_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Camera UCameraComponent
---@field SpringArm USpringArmComponent
---@field Sphere USphereComponent
---@field MovementInterpolationSpeed float
---@field RotationInterpolationSpeed float
---@field MovementSensitivity float
---@field RotationSensitivity float
---@field bUseMaximumDistance boolean
---@field MaximumDistance float
---@field isMovingCamera FBP_FreeCamera_CIsMovingCamera
---@field isNotMovingCamera FBP_FreeCamera_CIsNotMovingCamera
---@field StartingFOV float
---@field StartingRoll float
---@field PhotoModeComponentReference UBPC_PhotoMode_C
local ABP_FreeCamera_C = {}

function ABP_FreeCamera_C:UserConstructionScript() end
---@param DeltaSeconds float
function ABP_FreeCamera_C:ReceiveTick(DeltaSeconds) end
function ABP_FreeCamera_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_FreeCamera_C:ExecuteUbergraph_BP_FreeCamera(EntryPoint) end
function ABP_FreeCamera_C:isNotMovingCamera__DelegateSignature() end
function ABP_FreeCamera_C:isMovingCamera__DelegateSignature() end


