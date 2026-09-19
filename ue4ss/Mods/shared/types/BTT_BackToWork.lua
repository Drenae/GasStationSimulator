---@meta

---@class UBTT_BackToWork_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AICharacter AAICharacterBase
local UBTT_BackToWork_C = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_BackToWork_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param EntryPoint int32
function UBTT_BackToWork_C:ExecuteUbergraph_BTT_BackToWork(EntryPoint) end


