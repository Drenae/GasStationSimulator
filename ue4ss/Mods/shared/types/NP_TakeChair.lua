---@meta

---@class UNP_TakeChair_C : UNPAITaskBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SmartObjectRef UNPSmartObjectComponent
local UNP_TakeChair_C = {}

---@param NotifyName FName
function UNP_TakeChair_C:OnNotifyEnd_96A5AE744F32F02AD12798A179AAE8CD(NotifyName) end
---@param NotifyName FName
function UNP_TakeChair_C:OnNotifyBegin_96A5AE744F32F02AD12798A179AAE8CD(NotifyName) end
---@param NotifyName FName
function UNP_TakeChair_C:OnInterrupted_96A5AE744F32F02AD12798A179AAE8CD(NotifyName) end
---@param NotifyName FName
function UNP_TakeChair_C:OnBlendOut_96A5AE744F32F02AD12798A179AAE8CD(NotifyName) end
---@param NotifyName FName
function UNP_TakeChair_C:OnCompleted_96A5AE744F32F02AD12798A179AAE8CD(NotifyName) end
---@param OwnerCharacter ANPAICharacterBase
---@param InTargetActor AActor
function UNP_TakeChair_C:OnInitializeTask(OwnerCharacter, InTargetActor) end
---@param TaskStopReason FNPTaskFinishReason
function UNP_TakeChair_C:FinishBeginTask(TaskStopReason) end
function UNP_TakeChair_C:StartTask() end
---@param Montage UAnimMontage
---@param bInterrupted boolean
function UNP_TakeChair_C:MontageFinished(Montage, bInterrupted) end
---@param EntryPoint int32
function UNP_TakeChair_C:ExecuteUbergraph_NP_TakeChair(EntryPoint) end


