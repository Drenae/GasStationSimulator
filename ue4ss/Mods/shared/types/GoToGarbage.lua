---@meta

---@class UGoToGarbage_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
local UGoToGarbage_C = {}

---@param NotifyName FName
function UGoToGarbage_C:OnNotifyEnd_35D09157423ADD2E2484F9A1C7BD77E6(NotifyName) end
---@param NotifyName FName
function UGoToGarbage_C:OnNotifyBegin_35D09157423ADD2E2484F9A1C7BD77E6(NotifyName) end
---@param NotifyName FName
function UGoToGarbage_C:OnInterrupted_35D09157423ADD2E2484F9A1C7BD77E6(NotifyName) end
---@param NotifyName FName
function UGoToGarbage_C:OnBlendOut_35D09157423ADD2E2484F9A1C7BD77E6(NotifyName) end
---@param NotifyName FName
function UGoToGarbage_C:OnCompleted_35D09157423ADD2E2484F9A1C7BD77E6(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToGarbage_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToGarbage_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToGarbage_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UGoToGarbage_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UGoToGarbage_C:ExecuteUbergraph_GoToGarbage(EntryPoint) end


