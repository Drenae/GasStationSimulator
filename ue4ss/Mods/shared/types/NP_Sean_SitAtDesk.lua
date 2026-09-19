---@meta

---@class UNP_Sean_SitAtDesk_C : UNPAITaskBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field IsMovingToTarget boolean
---@field Crane ACrane
---@field SmartObject UNPSmartObjectComponent
---@field bPositioned boolean
---@field ['Next Section'] FName
---@field ActionID int32
---@field EndSection FName
---@field LastVersion int32
---@field MoveToLocation FVector
---@field bAction boolean
---@field ['Task Stop Reason'] FNPTaskFinishReason
---@field TimePassed float
---@field bTickTimer boolean
---@field Sean ASeanCharacter
---@field TaskStopReason FNPTaskFinishReason
---@field bStartedMontage boolean
---@field WayPoint TSoftObjectPtr<AActor>
---@field Waypoints TArray<FVector>
---@field AttachedCompoents TArray<UStaticMeshComponent>
---@field FAttachedComponents TArray<FFAttachedComponents>
---@field bEndIntialized boolean
---@field ChairInitialTransform FTransform
local UNP_Sean_SitAtDesk_C = {}

---@param ComponentToAdd UPrimitiveComponent
---@param InitialTransform FTransform
function UNP_Sean_SitAtDesk_C:AddComponentToArray(ComponentToAdd, InitialTransform) end
function UNP_Sean_SitAtDesk_C:EnforceDetach() end
---@param DeltaT float
---@param bTimePassed boolean
function UNP_Sean_SitAtDesk_C:Timer(DeltaT, bTimePassed) end
function UNP_Sean_SitAtDesk_C:SetPhoneAsAttachement() end
function UNP_Sean_SitAtDesk_C:SetLetterAsAttachement() end
function UNP_Sean_SitAtDesk_C:SetColaAsAttachement() end
function UNP_Sean_SitAtDesk_C:EndCurrentMontageVersion() end
---@param EndSection FName
function UNP_Sean_SitAtDesk_C:PickEndMontageSection(EndSection) end
function UNP_Sean_SitAtDesk_C:PickSittingMontageAction() end
function UNP_Sean_SitAtDesk_C:HandlePositioning() end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnNotifyEnd_39EB6173488D12BC2637419C5E7A2375(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnNotifyBegin_39EB6173488D12BC2637419C5E7A2375(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnInterrupted_39EB6173488D12BC2637419C5E7A2375(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnBlendOut_39EB6173488D12BC2637419C5E7A2375(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnCompleted_39EB6173488D12BC2637419C5E7A2375(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnNotifyEnd_5813F05D424A4AC96E6CAA9F4980228B(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnNotifyBegin_5813F05D424A4AC96E6CAA9F4980228B(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnInterrupted_5813F05D424A4AC96E6CAA9F4980228B(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnBlendOut_5813F05D424A4AC96E6CAA9F4980228B(NotifyName) end
---@param NotifyName FName
function UNP_Sean_SitAtDesk_C:OnCompleted_5813F05D424A4AC96E6CAA9F4980228B(NotifyName) end
function UNP_Sean_SitAtDesk_C:StartTask() end
---@param TaskStopReason FNPTaskFinishReason
function UNP_Sean_SitAtDesk_C:FinishBeginTask(TaskStopReason) end
---@param OwnerCharacter ANPAICharacterBase
---@param InTargetActor AActor
function UNP_Sean_SitAtDesk_C:OnInitializeTask(OwnerCharacter, InTargetActor) end
---@param Montage UAnimMontage
---@param bInterrupted boolean
function UNP_Sean_SitAtDesk_C:OnMontageBlendingOut_Event_0(Montage, bInterrupted) end
---@param DeltaTime float
---@param AIActionState ENPAIActionState
function UNP_Sean_SitAtDesk_C:EventTick(DeltaTime, AIActionState) end
function UNP_Sean_SitAtDesk_C:ForceEndTask() end
---@param EntryPoint int32
function UNP_Sean_SitAtDesk_C:ExecuteUbergraph_NP_Sean_SitAtDesk(EntryPoint) end


