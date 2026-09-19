---@meta

---@class UGoToDance_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DanceFloorREF ADanceFloor
---@field SpotREF UArrowComponent
---@field DancingTimeLeft FTimeStruct
---@field AvailableDances TArray<UAnimMontage>
---@field Finished boolean
---@field ChoosenTag FGameplayTag
local UGoToDance_C = {}

---@param ChoosenTag FGameplayTag
function UGoToDance_C:RollForDance(ChoosenTag) end
---@param Result EPathFollowingResult::Type
---@param AIController AAIController
function UGoToDance_C:OnMoveFinished_7F916E14414FC62417FD4A99E5D2848A(Result, AIController) end
function UGoToDance_C:OnRequestFailed_7F916E14414FC62417FD4A99E5D2848A() end
---@param NotifyName FName
function UGoToDance_C:OnNotifyEnd_F64B397849ECF964FF0F82B40B1F5AA6(NotifyName) end
---@param NotifyName FName
function UGoToDance_C:OnNotifyBegin_F64B397849ECF964FF0F82B40B1F5AA6(NotifyName) end
---@param NotifyName FName
function UGoToDance_C:OnInterrupted_F64B397849ECF964FF0F82B40B1F5AA6(NotifyName) end
---@param NotifyName FName
function UGoToDance_C:OnBlendOut_F64B397849ECF964FF0F82B40B1F5AA6(NotifyName) end
---@param NotifyName FName
function UGoToDance_C:OnCompleted_F64B397849ECF964FF0F82B40B1F5AA6(NotifyName) end
function UGoToDance_C:StartDancing() end
function UGoToDance_C:OnAllNPCsStoppedDancing_Event_0() end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToDance_C:FinishBeginTask(TaskState, FinishReason) end
---@param Character ACharacter
function UGoToDance_C:StartTask(Character) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToDance_C:InitializeTask(Character, NewTasksProgress) end
---@param EntryPoint int32
function UGoToDance_C:ExecuteUbergraph_GoToDance(EntryPoint) end


