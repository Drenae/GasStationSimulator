---@meta

---@class UBTT_DriverToNextTarget_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarRotation FTransform
---@field StartRotation boolean
---@field AICharacterBase AAICharacterBase
---@field PathPoint APathPoint
---@field NewVar_0 float
local UBTT_DriverToNextTarget_C = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_DriverToNextTarget_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param EntryPoint int32
function UBTT_DriverToNextTarget_C:ExecuteUbergraph_BTT_DriverToNextTarget(EntryPoint) end


