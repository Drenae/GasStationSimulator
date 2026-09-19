---@meta

---@class UGoToFuelMagazine_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Inventory UInventoryComponent
---@field AmountOfFuelPerTick float
---@field FuelPourSound UAudioComponent
---@field MarkerFuel AObjectiveMarker
---@field IsPlayerInteractionNeeded boolean
---@field TargetActorLocation FVector
local UGoToFuelMagazine_C = {}

function UGoToFuelMagazine_C:CustomEvent_0() end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToFuelMagazine_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToFuelMagazine_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToFuelMagazine_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UGoToFuelMagazine_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UGoToFuelMagazine_C:ExecuteUbergraph_GoToFuelMagazine(EntryPoint) end


