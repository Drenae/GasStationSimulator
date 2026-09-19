---@meta

---@class USean_AnimBP_C : UPilotsAnimInstance
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
---@field SpawnedObjectBP AActor
---@field UsedMesh USkeletalMeshComponent
---@field SittingState ESittingActions::Type
---@field NewVar_1 int32
---@field ChosenNumber int32
---@field StateChance TArray<FFJoe_Sitting>
---@field ChosenAnimState EJoeSittingState
---@field RepeateAmount int32
---@field bMontageCancle boolean
---@field SpawnedZippoBP AActor
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
local USean_AnimBP_C = {}

---@param AnimGraph FPoseLink
function USean_AnimBP_C:AnimGraph(AnimGraph) end
function USean_AnimBP_C:CheckDialogLookAt() end
---@param RotationTarget AActor
---@return boolean
function USean_AnimBP_C:RotateToTarget(RotationTarget) end
---@param RotationTarget AActor
---@return boolean
USean_AnimBP_C['Rotate To Target BP'] = function(self, RotationTarget) end
---@param RotationTarget AActor
---@param bRotate boolean
---@param RotationMontage UAnimMontage
function USean_AnimBP_C:HandleRotationMontage(RotationTarget, bRotate, RotationMontage) end
---@param PointingTarget AActor
function USean_AnimBP_C:HandlePoitingValues(PointingTarget) end
---@param RotationTarget AActor
---@param bRotate boolean
---@param RotationMontage UAnimMontage
function USean_AnimBP_C:HandleRotationMontageForPointing(RotationTarget, bRotate, RotationMontage) end
---@param Direction ERotationDirection::Type
function USean_AnimBP_C:FindDirection(Direction) end
---@param DesiredLocation FVector
---@param DesiredRotation FRotator
function USean_AnimBP_C:SetPositioningValues(DesiredLocation, DesiredRotation) end
function USean_AnimBP_C:HandleMovementStates() end
---@param WarpingTarget AActor
---@param WarpTransform FTransform
---@param MontagePlayRate float
---@param HasTarget boolean
function USean_AnimBP_C:CalculatePositioningValues(WarpingTarget, WarpTransform, MontagePlayRate, HasTarget) end
---@param Left boolean
USean_AnimBP_C['Plane Dialog Check Side'] = function(self, Left) end
---@param Actor AActor
function USean_AnimBP_C:DestroySpawnedObject(Actor) end
function USean_AnimBP_C:HandleStops() end
---@param NotifyName FName
function USean_AnimBP_C:OnCompleted_46BC471740812064F23A5097BAE0A371(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnBlendOut_46BC471740812064F23A5097BAE0A371(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnInterrupted_46BC471740812064F23A5097BAE0A371(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnNotifyBegin_46BC471740812064F23A5097BAE0A371(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnNotifyEnd_46BC471740812064F23A5097BAE0A371(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnCompleted_57CC19CE402C313EE700A99B3D290D46(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnBlendOut_57CC19CE402C313EE700A99B3D290D46(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnInterrupted_57CC19CE402C313EE700A99B3D290D46(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnNotifyBegin_57CC19CE402C313EE700A99B3D290D46(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnNotifyEnd_57CC19CE402C313EE700A99B3D290D46(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnCompleted_DD1BAC3448071F76549B649C338D9EA0(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnBlendOut_DD1BAC3448071F76549B649C338D9EA0(NotifyName) end
---@param DeltaTimeX float
function USean_AnimBP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param NotifyName FName
function USean_AnimBP_C:OnInterrupted_DD1BAC3448071F76549B649C338D9EA0(NotifyName) end
function USean_AnimBP_C:AnimNotify_RU_Stop() end
function USean_AnimBP_C:AnimNotify_LU_Stop() end
function USean_AnimBP_C:BlueprintInitializeAnimation() end
---@param NotifyName FName
function USean_AnimBP_C:OnNotifyBegin_DD1BAC3448071F76549B649C338D9EA0(NotifyName) end
---@param NotifyName FName
function USean_AnimBP_C:OnNotifyEnd_DD1BAC3448071F76549B649C338D9EA0(NotifyName) end
function USean_AnimBP_C:BlueprintBeginPlay() end
---@param WarpTarget AActor
---@param WarpTransform FTransform
function USean_AnimBP_C:PlayPositioningMontage(WarpTarget, WarpTransform) end
---@param NewDesiredLocation FVector
---@param NewDesiredRotation FRotator
function USean_AnimBP_C:HandlePositioning(NewDesiredLocation, NewDesiredRotation) end
---@param PointingTarget AActor
function USean_AnimBP_C:StartPointingAtTarget(PointingTarget) end
function USean_AnimBP_C:StopPointingAtTarget() end
function USean_AnimBP_C:PlayRotationMontage() end
---@param EntryPoint int32
function USean_AnimBP_C:ExecuteUbergraph_Sean_AnimBP(EntryPoint) end


