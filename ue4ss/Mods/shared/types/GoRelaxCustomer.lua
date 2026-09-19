---@meta

---@class UGoRelaxCustomer_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
local UGoRelaxCustomer_C = {}

---@param IsNeedToGo boolean
function UGoRelaxCustomer_C:CheckShelvesAvailability(IsNeedToGo) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoRelaxCustomer_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoRelaxCustomer_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoRelaxCustomer_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UGoRelaxCustomer_C:ExecuteUbergraph_GoRelaxCustomer(EntryPoint) end


