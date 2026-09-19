---@meta

---@class UGoToLotteryRelax_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
local UGoToLotteryRelax_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToLotteryRelax_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToLotteryRelax_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToLotteryRelax_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UGoToLotteryRelax_C:ExecuteUbergraph_GoToLotteryRelax(EntryPoint) end


