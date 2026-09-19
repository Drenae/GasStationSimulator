---@meta

---@class UGoPanic_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AIChar AAICharacterBase
---@field LastPanicPoint ABP_PanicPoint_C
---@field NumbersOfPointsToPanic int32
local UGoPanic_C = {}

function UGoPanic_C:SelectRandomPanicPoint() end
---@param PointExcluded ABP_PanicPoint_C
function UGoPanic_C:FindPanicPoint(PointExcluded) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoPanic_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoPanic_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoPanic_C:FinishBeginTask(TaskState, FinishReason) end
function UGoPanic_C:PickAnotherPanicPoint() end
---@param EntryPoint int32
function UGoPanic_C:ExecuteUbergraph_GoPanic(EntryPoint) end


