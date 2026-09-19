---@meta

---@class UGoToCash_C : UTaskCash
---@field UberGraphFrame FPointerToUberGraphFrame
---@field IsBlockingTaskResetByResetQueue boolean
local UGoToCash_C = {}

function UGoToCash_C:OnTaskFailure() end
function UGoToCash_C:OnTaskSuccess() end
function UGoToCash_C:OnAnimEnd() end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToCash_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToCash_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToCash_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UGoToCash_C:ExecuteUbergraph_GoToCash(EntryPoint) end


