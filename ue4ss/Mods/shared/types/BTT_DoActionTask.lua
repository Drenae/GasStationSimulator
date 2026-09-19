---@meta

---@class UBTT_DoActionTask_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AICharacter AAICharacterBase
---@field AIState FBlackboardKeySelector
local UBTT_DoActionTask_C = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_DoActionTask_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param EntryPoint int32
function UBTT_DoActionTask_C:ExecuteUbergraph_BTT_DoActionTask(EntryPoint) end


