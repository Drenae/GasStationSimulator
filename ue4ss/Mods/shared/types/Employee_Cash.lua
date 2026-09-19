---@meta

---@class UEmployee_Cash_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimFinishTime float
---@field RandomTimeKamil float
---@field Customer AAICharacterBase
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
local UEmployee_Cash_C = {}

---@param NotifyName FName
function UEmployee_Cash_C:OnNotifyEnd_8B1641B74D05F7E4F4C013B2CECA4AE9(NotifyName) end
---@param NotifyName FName
function UEmployee_Cash_C:OnNotifyBegin_8B1641B74D05F7E4F4C013B2CECA4AE9(NotifyName) end
---@param NotifyName FName
function UEmployee_Cash_C:OnInterrupted_8B1641B74D05F7E4F4C013B2CECA4AE9(NotifyName) end
---@param NotifyName FName
function UEmployee_Cash_C:OnBlendOut_8B1641B74D05F7E4F4C013B2CECA4AE9(NotifyName) end
---@param NotifyName FName
function UEmployee_Cash_C:OnCompleted_8B1641B74D05F7E4F4C013B2CECA4AE9(NotifyName) end
---@param Loaded UClass
function UEmployee_Cash_C:OnLoaded_9B5F05CF42191432B86C34B6C392F358(Loaded) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UEmployee_Cash_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UEmployee_Cash_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UEmployee_Cash_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UEmployee_Cash_C:TickObject(DeltaTime) end
function UEmployee_Cash_C:ResetCleanAnimation() end
---@param EntryPoint int32
function UEmployee_Cash_C:ExecuteUbergraph_Employee_Cash(EntryPoint) end


