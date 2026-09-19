---@meta

---@class UBTS_CheckDriverState_C : UBTService_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DriverState FBlackboardKeySelector
---@field AICharacterBase AAICharacterBase
---@field bIsCharAttachedToVehicle boolean
local UBTS_CheckDriverState_C = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTS_CheckDriverState_C:ReceiveSearchStartAI(OwnerController, ControlledPawn) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds float
function UBTS_CheckDriverState_C:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end
---@param EntryPoint int32
function UBTS_CheckDriverState_C:ExecuteUbergraph_BTS_CheckDriverState(EntryPoint) end


