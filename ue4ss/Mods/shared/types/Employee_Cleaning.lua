---@meta

---@class UEmployee_Cleaning_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimTimeToWait float
---@field IgnoredActors TArray<AActor>
---@field HeadScratchMontage UAnimMontage
---@field bNewTask boolean
---@field bCanActivateNewTask boolean
---@field NewTaskIndex int32
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
---@field TaskToCheck UClass
---@field DEBUG_TracedDirt AActor
---@field CheckTaskTimer FTimerHandle
local UEmployee_Cleaning_C = {}

function UEmployee_Cleaning_C:FinishIdle() end
function UEmployee_Cleaning_C:UnlockItemToClean() end
function UEmployee_Cleaning_C:SetItemToClean() end
function UEmployee_Cleaning_C:ResetCleaningTask() end
function UEmployee_Cleaning_C:StopAllMontages() end
function UEmployee_Cleaning_C:SetAnimTime() end
---@return AActor
function UEmployee_Cleaning_C:SearchTrash() end
---@param TargetActor AActor
function UEmployee_Cleaning_C:SearchDecal(TargetActor) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyEnd_AD726CAC4F5CD87E7F3B60BB56D7C22B(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyBegin_AD726CAC4F5CD87E7F3B60BB56D7C22B(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnInterrupted_AD726CAC4F5CD87E7F3B60BB56D7C22B(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnBlendOut_AD726CAC4F5CD87E7F3B60BB56D7C22B(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnCompleted_AD726CAC4F5CD87E7F3B60BB56D7C22B(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyEnd_553A08B342EFD72EAEDD62BD02538593(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyBegin_553A08B342EFD72EAEDD62BD02538593(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnInterrupted_553A08B342EFD72EAEDD62BD02538593(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnBlendOut_553A08B342EFD72EAEDD62BD02538593(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnCompleted_553A08B342EFD72EAEDD62BD02538593(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyEnd_2315B604411DEBF9EAB248BB84C5BB83(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyBegin_2315B604411DEBF9EAB248BB84C5BB83(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnInterrupted_2315B604411DEBF9EAB248BB84C5BB83(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnBlendOut_2315B604411DEBF9EAB248BB84C5BB83(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnCompleted_2315B604411DEBF9EAB248BB84C5BB83(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyEnd_3D5FC7264F8BE4B5F91A4C85A709CAB3(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnNotifyBegin_3D5FC7264F8BE4B5F91A4C85A709CAB3(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnInterrupted_3D5FC7264F8BE4B5F91A4C85A709CAB3(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnBlendOut_3D5FC7264F8BE4B5F91A4C85A709CAB3(NotifyName) end
---@param NotifyName FName
function UEmployee_Cleaning_C:OnCompleted_3D5FC7264F8BE4B5F91A4C85A709CAB3(NotifyName) end
---@param Loaded UClass
function UEmployee_Cleaning_C:OnLoaded_713FE33A4800B099039066B32661CD85(Loaded) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UEmployee_Cleaning_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UEmployee_Cleaning_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UEmployee_Cleaning_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UEmployee_Cleaning_C:TickObject(DeltaTime) end
function UEmployee_Cleaning_C:Reset() end
function UEmployee_Cleaning_C:FindTrashAndTake() end
function UEmployee_Cleaning_C:NoTrashReachableEvent() end
function UEmployee_Cleaning_C:WaitForTrash() end
function UEmployee_Cleaning_C:NoTargetMontage() end
---@param NewTaskIndex int32
function UEmployee_Cleaning_C:ActivateTask(NewTaskIndex) end
function UEmployee_Cleaning_C:FindAndPlayAnimation() end
function UEmployee_Cleaning_C:CheckTasks() end
---@param EntryPoint int32
function UEmployee_Cleaning_C:ExecuteUbergraph_Employee_Cleaning(EntryPoint) end


