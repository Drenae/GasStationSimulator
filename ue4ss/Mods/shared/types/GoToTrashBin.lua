---@meta

---@class UGoToTrashBin_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
local UGoToTrashBin_C = {}

---@param NotifyName FName
function UGoToTrashBin_C:OnNotifyEnd_F366B5D5405936779C10809EEAA69E80(NotifyName) end
---@param NotifyName FName
function UGoToTrashBin_C:OnNotifyBegin_F366B5D5405936779C10809EEAA69E80(NotifyName) end
---@param NotifyName FName
function UGoToTrashBin_C:OnInterrupted_F366B5D5405936779C10809EEAA69E80(NotifyName) end
---@param NotifyName FName
function UGoToTrashBin_C:OnBlendOut_F366B5D5405936779C10809EEAA69E80(NotifyName) end
---@param NotifyName FName
function UGoToTrashBin_C:OnCompleted_F366B5D5405936779C10809EEAA69E80(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToTrashBin_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UGoToTrashBin_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToTrashBin_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UGoToTrashBin_C:TickObject(DeltaTime) end
function UGoToTrashBin_C:OnUFO() end
---@param EntryPoint int32
function UGoToTrashBin_C:ExecuteUbergraph_GoToTrashBin(EntryPoint) end


