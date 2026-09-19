---@meta

---@class UGoToCarWash_C : UCustomerRepairCar
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TotalMoney float
local UGoToCarWash_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToCarWash_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToCarWash_C:StartTask(Character) end
function UGoToCarWash_C:OnAnimEnd() end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToCarWash_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UGoToCarWash_C:ExecuteUbergraph_GoToCarWash(EntryPoint) end


