---@meta

---@class UPlayer_AnimationManager_C : UPlayerAnimationManagerBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TimerEndProlog FTimerHandle
---@field DeltaT float
---@field SpawnedBiker ABiker_ActorBp_C
---@field BCameraBlurTick boolean
---@field BikerRotate boolean
---@field StartingControlRotation FRotator
---@field UncleSequencer ALevelSequenceActor
---@field UncleSequence TSoftObjectPtr<ULevelSequence>
---@field LoadedSequence UObject
---@field OutroSequence TSoftObjectPtr<ULevelSequence>
---@field SetOutrSeq ALevelSequenceActor
---@field InitialMaxVehicleOnMap int32
local UPlayer_AnimationManager_C = {}

---@param CameraNumber int32
function UPlayer_AnimationManager_C:SetNewActiveCamera(CameraNumber) end
---@param Manual_Focus_Distance float
function UPlayer_AnimationManager_C:CameraBlur(Manual_Focus_Distance) end
---@param CurveName FName
---@param EnableTick boolean
---@param Curve float
---@param EnableTick boolean
function UPlayer_AnimationManager_C:GetAnimCurveValue(CurveName, EnableTick, Curve, EnableTick) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnNotifyEnd_6A35EC944342C1C2E8F35980D4156933(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnNotifyBegin_6A35EC944342C1C2E8F35980D4156933(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnInterrupted_6A35EC944342C1C2E8F35980D4156933(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnBlendOut_6A35EC944342C1C2E8F35980D4156933(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnCompleted_6A35EC944342C1C2E8F35980D4156933(NotifyName) end
---@param Loaded UObject
function UPlayer_AnimationManager_C:OnLoaded_B90042234108F1DD4E4359A94AB2290C(Loaded) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnNotifyEnd_AD1FCC6A416C16F84A05CEB9105F5913(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnNotifyBegin_AD1FCC6A416C16F84A05CEB9105F5913(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnInterrupted_AD1FCC6A416C16F84A05CEB9105F5913(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnBlendOut_AD1FCC6A416C16F84A05CEB9105F5913(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnCompleted_AD1FCC6A416C16F84A05CEB9105F5913(NotifyName) end
---@param Loaded UObject
function UPlayer_AnimationManager_C:OnLoaded_EF2A469441073D29176F4EA508EC5D2B(Loaded) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnNotifyEnd_90AA5B324618920A1F4171AA8D3441C0(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnNotifyBegin_90AA5B324618920A1F4171AA8D3441C0(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnInterrupted_90AA5B324618920A1F4171AA8D3441C0(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnBlendOut_90AA5B324618920A1F4171AA8D3441C0(NotifyName) end
---@param NotifyName FName
function UPlayer_AnimationManager_C:OnCompleted_90AA5B324618920A1F4171AA8D3441C0(NotifyName) end
function UPlayer_AnimationManager_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function UPlayer_AnimationManager_C:ReceiveTick(DeltaSeconds) end
function UPlayer_AnimationManager_C:StartUncleSequence() end
---@param DeltaT float
function UPlayer_AnimationManager_C:ChangeControlRoationBiker(DeltaT) end
function UPlayer_AnimationManager_C:SetControlRotation() end
function UPlayer_AnimationManager_C:UncleWakeUpSeq() end
function UPlayer_AnimationManager_C:FinishQuest() end
function UPlayer_AnimationManager_C:Trigger2NdBiker() end
function UPlayer_AnimationManager_C:CustomEvent() end
function UPlayer_AnimationManager_C:SecondBikerTrigger() end
function UPlayer_AnimationManager_C:PrologueEnd() end
---@param EntryPoint int32
function UPlayer_AnimationManager_C:ExecuteUbergraph_Player_AnimationManager(EntryPoint) end


