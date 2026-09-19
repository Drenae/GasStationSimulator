---@meta

---@class UDLC_RV_GoToConcert_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConcertBuildingREF ABP_ConcertBuilding_C
---@field SpotREF UArrowComponent
---@field DancingTimeLeft FTimeStruct
---@field AvailableDances TArray<UAnimMontage>
---@field ChoosenTag FGameplayTag
local UDLC_RV_GoToConcert_C = {}

---@param ChoosenTag FGameplayTag
function UDLC_RV_GoToConcert_C:RollForDance(ChoosenTag) end
---@param NotifyName FName
function UDLC_RV_GoToConcert_C:OnNotifyEnd_A016C45345DD01A95B118198A51E7618(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToConcert_C:OnNotifyBegin_A016C45345DD01A95B118198A51E7618(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToConcert_C:OnInterrupted_A016C45345DD01A95B118198A51E7618(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToConcert_C:OnBlendOut_A016C45345DD01A95B118198A51E7618(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToConcert_C:OnCompleted_A016C45345DD01A95B118198A51E7618(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UDLC_RV_GoToConcert_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UDLC_RV_GoToConcert_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UDLC_RV_GoToConcert_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UDLC_RV_GoToConcert_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UDLC_RV_GoToConcert_C:ExecuteUbergraph_DLC_RV_GoToConcert(EntryPoint) end


