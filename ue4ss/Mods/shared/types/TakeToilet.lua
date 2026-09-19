---@meta

---@class UTakeToilet_C : UTakeTolietTask
---@field UberGraphFrame FPointerToUberGraphFrame
local UTakeToilet_C = {}

function UTakeToilet_C:CustomEvent_0() end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UTakeToilet_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UTakeToilet_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UTakeToilet_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UTakeToilet_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UTakeToilet_C:ExecuteUbergraph_TakeToilet(EntryPoint) end


