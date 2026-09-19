---@meta

---@class UNP_FixEngine_C : UNPAITaskBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SmartObjectRef UNPSmartObjectComponent
---@field Tick boolean
---@field FinishBeginTick boolean
local UNP_FixEngine_C = {}

---@param JoeAnimInstance UPilotsAnimInstance
function UNP_FixEngine_C:SetJoePositionToPropeller(JoeAnimInstance) end
---@param Joe ACharacter
function UNP_FixEngine_C:CancelJoeMontage(Joe) end
---@param InputObject UObject
function UNP_FixEngine_C:SetTargetActor(InputObject) end
---@param Return_Value_World_Position_Transform FTransform
---@param Return_Value_World_Montage_Transform FTransform
---@param Propeller_Mesh USkeletalMeshComponent
function UNP_FixEngine_C:GetChildActorSmartObject(Return_Value_World_Position_Transform, Return_Value_World_Montage_Transform, Propeller_Mesh) end
---@param NotifyName FName
function UNP_FixEngine_C:OnNotifyEnd_F25E45404A4E753D3BFC289870868EB6(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnNotifyBegin_F25E45404A4E753D3BFC289870868EB6(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnInterrupted_F25E45404A4E753D3BFC289870868EB6(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnBlendOut_F25E45404A4E753D3BFC289870868EB6(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnCompleted_F25E45404A4E753D3BFC289870868EB6(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnNotifyEnd_901535A44869E7EC7D10CC8DE3B34485(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnNotifyBegin_901535A44869E7EC7D10CC8DE3B34485(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnInterrupted_901535A44869E7EC7D10CC8DE3B34485(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnBlendOut_901535A44869E7EC7D10CC8DE3B34485(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnCompleted_901535A44869E7EC7D10CC8DE3B34485(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnNotifyEnd_CE706E1E4B088ECBBB03379020898C5D(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnNotifyBegin_CE706E1E4B088ECBBB03379020898C5D(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnInterrupted_CE706E1E4B088ECBBB03379020898C5D(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnBlendOut_CE706E1E4B088ECBBB03379020898C5D(NotifyName) end
---@param NotifyName FName
function UNP_FixEngine_C:OnCompleted_CE706E1E4B088ECBBB03379020898C5D(NotifyName) end
---@param Montage UAnimMontage
---@param bInterrupted boolean
function UNP_FixEngine_C:MontageFinished(Montage, bInterrupted) end
function UNP_FixEngine_C:SetPropellerTargetPoint() end
function UNP_FixEngine_C:PropellerSKHide() end
---@param StartingPosition float
function UNP_FixEngine_C:PropellerSKShow(StartingPosition) end
function UNP_FixEngine_C:StartTask() end
---@param TaskStopReason FNPTaskFinishReason
function UNP_FixEngine_C:FinishBeginTask(TaskStopReason) end
---@param OwnerCharacter ANPAICharacterBase
---@param InTargetActor AActor
function UNP_FixEngine_C:OnInitializeTask(OwnerCharacter, InTargetActor) end
---@param EntryPoint int32
function UNP_FixEngine_C:ExecuteUbergraph_NP_FixEngine(EntryPoint) end


