---@meta

---@class UGoToCarRepair_C : UCustomerRepairCar
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TotalMoney float
local UGoToCarRepair_C = {}

---@param FnishReason FString
function UGoToCarRepair_C:ShowTaskNotification(FnishReason) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToCarRepair_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToCarRepair_C:StartTask(Character) end
function UGoToCarRepair_C:FinishTask() end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToCarRepair_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UGoToCarRepair_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UGoToCarRepair_C:ExecuteUbergraph_GoToCarRepair(EntryPoint) end


