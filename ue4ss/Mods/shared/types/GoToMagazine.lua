---@meta

---@class UGoToMagazine_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Inventory UInventoryComponent
local UGoToMagazine_C = {}

function UGoToMagazine_C:CloseVehicleDoors() end
function UGoToMagazine_C:CustomEvent_0() end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToMagazine_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToMagazine_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToMagazine_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UGoToMagazine_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UGoToMagazine_C:ExecuteUbergraph_GoToMagazine(EntryPoint) end


