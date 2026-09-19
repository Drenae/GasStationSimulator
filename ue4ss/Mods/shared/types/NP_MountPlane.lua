---@meta

---@class UNP_MountPlane_C : UNPAITaskBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SmartObjectRef UNPSmartObjectComponent
local UNP_MountPlane_C = {}

---@param NotifyName FName
function UNP_MountPlane_C:OnNotifyEnd_092F229C44907FCF9CAE7C8CF85268EB(NotifyName) end
---@param NotifyName FName
function UNP_MountPlane_C:OnNotifyBegin_092F229C44907FCF9CAE7C8CF85268EB(NotifyName) end
---@param NotifyName FName
function UNP_MountPlane_C:OnInterrupted_092F229C44907FCF9CAE7C8CF85268EB(NotifyName) end
---@param NotifyName FName
function UNP_MountPlane_C:OnBlendOut_092F229C44907FCF9CAE7C8CF85268EB(NotifyName) end
---@param NotifyName FName
function UNP_MountPlane_C:OnCompleted_092F229C44907FCF9CAE7C8CF85268EB(NotifyName) end
---@param OwnerCharacter ANPAICharacterBase
---@param InTargetActor AActor
function UNP_MountPlane_C:OnInitializeTask(OwnerCharacter, InTargetActor) end
---@param TaskStopReason FNPTaskFinishReason
function UNP_MountPlane_C:FinishBeginTask(TaskStopReason) end
---@param DeltaTime float
---@param AIActionState ENPAIActionState
function UNP_MountPlane_C:TickObject(DeltaTime, AIActionState) end
function UNP_MountPlane_C:StartTask() end
---@param Montage UAnimMontage
---@param bInterrupted boolean
function UNP_MountPlane_C:MontageFinished(Montage, bInterrupted) end
function UNP_MountPlane_C:ForceAttach() end
---@param EntryPoint int32
function UNP_MountPlane_C:ExecuteUbergraph_NP_MountPlane(EntryPoint) end


