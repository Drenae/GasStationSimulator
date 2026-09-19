---@meta

---@class UWait_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
local UWait_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UWait_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UWait_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UWait_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UWait_C:ExecuteUbergraph_Wait(EntryPoint) end


