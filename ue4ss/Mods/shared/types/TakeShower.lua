---@meta

---@class UTakeShower_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
local UTakeShower_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UTakeShower_C:InitializeTask(Character, NewTasksProgress) end
function UTakeShower_C:CustomEvent_0() end
---@param Character ACharacter
function UTakeShower_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UTakeShower_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UTakeShower_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UTakeShower_C:ExecuteUbergraph_TakeShower(EntryPoint) end


