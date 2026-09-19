---@meta

---@class UJoe_AnimBP_C : UPilotsAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_UseCachedPose_2 FAnimNode_UseCachedPose
---@field AnimGraphNode_UseCachedPose_1 FAnimNode_UseCachedPose
---@field AnimGraphNode_UseCachedPose FAnimNode_UseCachedPose
---@field AnimGraphNode_SaveCachedPose_2 FAnimNode_SaveCachedPose
---@field AnimGraphNode_TransitionResult_23 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_22 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_21 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_20 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_19 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_18 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_17 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_16 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_15 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_14 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_13 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_12 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_11 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_10 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_9 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_8 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_7 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_6 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_5 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_4 FAnimNode_TransitionResult
---@field AnimGraphNode_BlendSpacePlayer_3 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_StateResult_12 FAnimNode_StateResult
---@field AnimGraphNode_TransitionResult_3 FAnimNode_TransitionResult
---@field AnimGraphNode_BlendSpacePlayer_2 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_StateResult_11 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_8 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_10 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_7 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_9 FAnimNode_StateResult
---@field AnimGraphNode_TransitionResult_2 FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_6 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_8 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_5 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_7 FAnimNode_StateResult
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_4 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_6 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_3 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_5 FAnimNode_StateResult
---@field AnimGraphNode_BlendSpacePlayer_1 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_StateResult_4 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_3 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_2 FAnimNode_StateResult
---@field AnimGraphNode_StateMachine_1 FAnimNode_StateMachine
---@field AnimGraphNode_SaveCachedPose_1 FAnimNode_SaveCachedPose
---@field AnimGraphNode_Slot_1 FAnimNode_Slot
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_DragonAimSolver FAnimNode_DragonAimSolver
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field AnimGraphNode_SaveCachedPose FAnimNode_SaveCachedPose
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_Root FAnimNode_Root
---@field bWalk boolean
---@field Speed float
---@field BLU boolean
---@field StopLeft boolean
---@field bStop boolean
---@field Direction float
---@field NewVar_0 uint8
---@field SpawnedObject_BP AActor
---@field UsedMesh USkeletalMeshComponent
---@field SittingState ESittingActions::Type
---@field NewVar_1 int32
---@field ChosenNumber int32
---@field StateChance TArray<FFJoe_Sitting>
---@field ChosenAnimState EJoeSittingState
---@field RepeateAmount int32
---@field bMontageCancle boolean
---@field SpawnedZippo_0 AActor
---@field CurrentAnimState EJoeSittingState
---@field ['Is Rotating'] boolean
---@field ['As GSSNPAICharacter Base'] AGSSNPAICharacterBase
---@field LHandIkAlpha float
---@field ['Effector LocationR'] FVector
---@field ['Effector LocationL'] FVector
---@field RHandIkAlpha float
---@field LhandRotation FRotator
---@field RHandRotation FRotator
---@field ShouldLookAt boolean
---@field bLookAt boolean
---@field ['Look At Location'] FTransform
---@field bDialog boolean
---@field DialogEndTimer FTimerHandle
---@field LeftSide boolean
---@field bStandingUp boolean
---@field BaseDistanceForward float
---@field ['Play Rate'] float
---@field BaseDistanceSide float
---@field BaseDistancePIvotBack float
---@field bMoving boolean
---@field bJog boolean
---@field bRun boolean
---@field bSprint boolean
---@field bWalkBack boolean
---@field UpperBodyAlpha float
local UJoe_AnimBP_C = {}

---@param AnimGraph FPoseLink
function UJoe_AnimBP_C:AnimGraph(AnimGraph) end
function UJoe_AnimBP_C:CheckDialogLookAt() end
---@param RotationTarget AActor
---@return boolean
function UJoe_AnimBP_C:RotateToTarget(RotationTarget) end
---@param RotationTarget AActor
---@return boolean
UJoe_AnimBP_C['Rotate To Target BP'] = function(self, RotationTarget) end
---@param RotationTarget AActor
---@param bRotate boolean
---@param RotationMontage UAnimMontage
function UJoe_AnimBP_C:HandleRotationMontage(RotationTarget, bRotate, RotationMontage) end
function UJoe_AnimBP_C:NewFunction_0() end
---@param PointingTarget AActor
function UJoe_AnimBP_C:HandlePoitingValues(PointingTarget) end
---@param RotationTarget AActor
---@param bRotate boolean
---@param RotationMontage UAnimMontage
function UJoe_AnimBP_C:HandleRotationMontageForPointing(RotationTarget, bRotate, RotationMontage) end
---@param Direction ERotationDirection::Type
function UJoe_AnimBP_C:FindDirection(Direction) end
---@param DesiredLocation FVector
---@param DesiredRotation FRotator
function UJoe_AnimBP_C:SetPositioningValues(DesiredLocation, DesiredRotation) end
function UJoe_AnimBP_C:HandleMovementStates() end
---@param WarpingTarget AActor
---@param WarpTransform FTransform
---@param MontagePlayRate float
---@param HasTarget boolean
function UJoe_AnimBP_C:CalculatePositioningValues(WarpingTarget, WarpTransform, MontagePlayRate, HasTarget) end
---@param Left boolean
UJoe_AnimBP_C['Plane Dialog Check Side'] = function(self, Left) end
---@param Actor AActor
function UJoe_AnimBP_C:DestroySpawnedObject(Actor) end
---@param bDialog boolean
function UJoe_AnimBP_C:DialogPlaying(bDialog) end
function UJoe_AnimBP_C:ResetAnimationCanceling() end
function UJoe_AnimBP_C:HandleSittingMontages() end
function UJoe_AnimBP_C:HandleStops() end
---@param NotifyName FName
function UJoe_AnimBP_C:OnCompleted_40BCB367496C2DD64CD5E8AFEB33E776(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyEnd_6A25CF4A494B3741E7909CA320E0C8A1(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyBegin_6A25CF4A494B3741E7909CA320E0C8A1(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnInterrupted_6A25CF4A494B3741E7909CA320E0C8A1(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnBlendOut_6A25CF4A494B3741E7909CA320E0C8A1(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnCompleted_6A25CF4A494B3741E7909CA320E0C8A1(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyEnd_962DE39046A21663C097F6A29BA84613(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyBegin_962DE39046A21663C097F6A29BA84613(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnInterrupted_962DE39046A21663C097F6A29BA84613(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnBlendOut_962DE39046A21663C097F6A29BA84613(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnCompleted_962DE39046A21663C097F6A29BA84613(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyEnd_625438F84591CF29881240B77DDDDD7A(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyBegin_625438F84591CF29881240B77DDDDD7A(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnInterrupted_625438F84591CF29881240B77DDDDD7A(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnBlendOut_625438F84591CF29881240B77DDDDD7A(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnCompleted_625438F84591CF29881240B77DDDDD7A(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnBlendOut_40BCB367496C2DD64CD5E8AFEB33E776(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnInterrupted_40BCB367496C2DD64CD5E8AFEB33E776(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyBegin_40BCB367496C2DD64CD5E8AFEB33E776(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyEnd_40BCB367496C2DD64CD5E8AFEB33E776(NotifyName) end
---@param DeltaTimeX float
function UJoe_AnimBP_C:BlueprintUpdateAnimation(DeltaTimeX) end
function UJoe_AnimBP_C:AnimNotify_RU_Stop() end
function UJoe_AnimBP_C:AnimNotify_LU_Stop() end
---@param NotifyName FName
function UJoe_AnimBP_C:OnCompleted_073C841A431DCD7A87E19AB41B26288F(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnBlendOut_073C841A431DCD7A87E19AB41B26288F(NotifyName) end
function UJoe_AnimBP_C:BlueprintInitializeAnimation() end
function UJoe_AnimBP_C:SittingMontage() end
function UJoe_AnimBP_C:AnimNotify_SittingStart() end
function UJoe_AnimBP_C:AnimNotify_Repeate() end
---@param NotifyName FName
function UJoe_AnimBP_C:OnInterrupted_073C841A431DCD7A87E19AB41B26288F(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyBegin_073C841A431DCD7A87E19AB41B26288F(NotifyName) end
---@param CancelReason EMontageCancelReason
function UJoe_AnimBP_C:OnMontageCancelled(CancelReason) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyEnd_073C841A431DCD7A87E19AB41B26288F(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnCompleted_718B9F2747A06D7E82425D88AFD06135(NotifyName) end
function UJoe_AnimBP_C:AnimNotify_SectionEnd() end
function UJoe_AnimBP_C:AnimNotify_UnMountingRetriveCollision() end
---@param NotifyName FName
function UJoe_AnimBP_C:OnBlendOut_718B9F2747A06D7E82425D88AFD06135(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnInterrupted_718B9F2747A06D7E82425D88AFD06135(NotifyName) end
function UJoe_AnimBP_C:CustomEvent_0() end
---@param GameplayGraph UDialogueGraph
---@param DialogueNode UDialogueNode
function UJoe_AnimBP_C:DialogStart(GameplayGraph, DialogueNode) end
---@param GameplayGraph UDialogueGraph
function UJoe_AnimBP_C:DialogEnd(GameplayGraph) end
function UJoe_AnimBP_C:BlueprintBeginPlay() end
function UJoe_AnimBP_C:ResetDialog() end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyBegin_718B9F2747A06D7E82425D88AFD06135(NotifyName) end
---@param NotifyName FName
function UJoe_AnimBP_C:OnNotifyEnd_718B9F2747A06D7E82425D88AFD06135(NotifyName) end
---@param Montage UAnimMontage
---@param bInterrupted boolean
function UJoe_AnimBP_C:OnMontageEnded_Event_0(Montage, bInterrupted) end
---@param WarpTarget AActor
---@param WarpTransform FTransform
function UJoe_AnimBP_C:PlayPositioningMontage(WarpTarget, WarpTransform) end
---@param NewDesiredLocation FVector
---@param NewDesiredRotation FRotator
function UJoe_AnimBP_C:HandlePositioning(NewDesiredLocation, NewDesiredRotation) end
---@param PointingTarget AActor
function UJoe_AnimBP_C:StartPointingAtTarget(PointingTarget) end
function UJoe_AnimBP_C:StopPointingAtTarget() end
function UJoe_AnimBP_C:PlayRotationMontage() end
---@param EntryPoint int32
function UJoe_AnimBP_C:ExecuteUbergraph_Joe_AnimBP(EntryPoint) end


