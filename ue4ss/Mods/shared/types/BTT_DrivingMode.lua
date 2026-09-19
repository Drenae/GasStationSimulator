---@meta

---@class UBTT_DrivingMode_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
local UBTT_DrivingMode_C = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_DrivingMode_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param EntryPoint int32
function UBTT_DrivingMode_C:ExecuteUbergraph_BTT_DrivingMode(EntryPoint) end


