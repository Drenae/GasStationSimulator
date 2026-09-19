---@meta

---@class UGoToIceCreamRelax_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
local UGoToIceCreamRelax_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToIceCreamRelax_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToIceCreamRelax_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToIceCreamRelax_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UGoToIceCreamRelax_C:ExecuteUbergraph_GoToIceCreamRelax(EntryPoint) end


