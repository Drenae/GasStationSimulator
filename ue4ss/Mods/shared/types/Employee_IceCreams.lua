---@meta

---@class UEmployee_IceCreams_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimFinishTime float
---@field RandomTimeKamil float
---@field Customer AAICharacterBase
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
---@field InteractableBuilding AInteractableBuilding
local UEmployee_IceCreams_C = {}

---@param NotifyName FName
function UEmployee_IceCreams_C:OnNotifyEnd_A4CB364A4838A6A936235A9491B3E488(NotifyName) end
---@param NotifyName FName
function UEmployee_IceCreams_C:OnNotifyBegin_A4CB364A4838A6A936235A9491B3E488(NotifyName) end
---@param NotifyName FName
function UEmployee_IceCreams_C:OnInterrupted_A4CB364A4838A6A936235A9491B3E488(NotifyName) end
---@param NotifyName FName
function UEmployee_IceCreams_C:OnBlendOut_A4CB364A4838A6A936235A9491B3E488(NotifyName) end
---@param NotifyName FName
function UEmployee_IceCreams_C:OnCompleted_A4CB364A4838A6A936235A9491B3E488(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UEmployee_IceCreams_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UEmployee_IceCreams_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UEmployee_IceCreams_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UEmployee_IceCreams_C:TickObject(DeltaTime) end
function UEmployee_IceCreams_C:ResetCleanAnimation() end
---@param EntryPoint int32
function UEmployee_IceCreams_C:ExecuteUbergraph_Employee_IceCreams(EntryPoint) end


