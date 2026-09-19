---@meta

---@class UGoToHome_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AIChar AAICharacterBase
local UGoToHome_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToHome_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToHome_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToHome_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UGoToHome_C:ExecuteUbergraph_GoToHome(EntryPoint) end


