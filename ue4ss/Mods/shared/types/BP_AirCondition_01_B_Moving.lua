---@meta

---@class ABP_AirCondition_01_B_Moving_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RotatingMovement URotatingMovementComponent
---@field ACsound UAudioComponent
---@field StaticMesh UStaticMeshComponent
---@field SM_RoofTurbine_01_Part_A UStaticMeshComponent
---@field Electrocity boolean
local ABP_AirCondition_01_B_Moving_C = {}

---@return boolean
function ABP_AirCondition_01_B_Moving_C:GetElectrocity() end
function ABP_AirCondition_01_B_Moving_C:ReceiveBeginPlay() end
---@param On boolean
function ABP_AirCondition_01_B_Moving_C:EnableElectrocity(On) end
---@param EndPlayReason EEndPlayReason::Type
function ABP_AirCondition_01_B_Moving_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ABP_AirCondition_01_B_Moving_C:ExecuteUbergraph_BP_AirCondition_01_B_Moving(EntryPoint) end


