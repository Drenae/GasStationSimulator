---@meta

---@class UDennis_Animbp_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_UseCachedPose_2 FAnimNode_UseCachedPose
---@field AnimGraphNode_UseCachedPose_1 FAnimNode_UseCachedPose
---@field AnimGraphNode_SaveCachedPose_1 FAnimNode_SaveCachedPose
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_UseCachedPose FAnimNode_UseCachedPose
---@field AnimGraphNode_TransitionResult_6 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_5 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_4 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_3 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_2 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_3 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_3 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_2 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SaveCachedPose FAnimNode_SaveCachedPose
---@field isPeaking boolean
---@field UpperBAlpha float
---@field PlayerTransform FTransform
---@field Stinkbomb boolean
---@field LeftArmAlpha float
---@field SprayParticleRef UParticleSystemComponent
---@field Speed float
---@field CanPlayStop boolean
---@field AiMovementState EPathFollowingStatus::Type
---@field ['Can Set Next Sound'] boolean
local UDennis_Animbp_C = {}

---@param AnimGraph FPoseLink
function UDennis_Animbp_C:AnimGraph(AnimGraph) end
function UDennis_Animbp_C:AllowNextSound() end
---@param NewSound USoundBase
---@param CanInterrupt_ boolean
function UDennis_Animbp_C:PlaySound(NewSound, CanInterrupt_) end
---@param Mesh USkeletalMeshComponent
function UDennis_Animbp_C:getOwnerSkeletalMesh(Mesh) end
function UDennis_Animbp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_4A9B95624637191B2C874B91ECC778AE() end
function UDennis_Animbp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_8E02D2374D8F6C1C9629888D55930E8E() end
function UDennis_Animbp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_1C5A710148C3FA904FACA2A9525D0B11() end
function UDennis_Animbp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_21276A00469E6036DCD6679C04943B46() end
function UDennis_Animbp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Dennis_Animbp_AnimGraphNode_TransitionResult_F68C31614307E57F91B02599634A9D48() end
---@param DeltaTimeX float
function UDennis_Animbp_C:BlueprintUpdateAnimation(DeltaTimeX) end
function UDennis_Animbp_C:AnimNotify_SprayCanOn() end
function UDennis_Animbp_C:AnimNotify_SprayCanOff() end
function UDennis_Animbp_C:AnimNotify_bombThrow() end
function UDennis_Animbp_C:AnimNotify_BombSpawn() end
function UDennis_Animbp_C:RemovefakeBomb() end
function UDennis_Animbp_C:AnimNotify_SpawnSpray() end
function UDennis_Animbp_C:AnimNotify_DespawnSpray() end
function UDennis_Animbp_C:AnimNotify_Laughter() end
function UDennis_Animbp_C:AnimNotify_Laughter_02() end
function UDennis_Animbp_C:AnimNotify_Laughter_03() end
function UDennis_Animbp_C:AnimNotify_CanPlayStop() end
UDennis_Animbp_C['AnimNotify_Can\'t PlayStop'] = function(self, ) end
function UDennis_Animbp_C:StopSprayingMontage() end
function UDennis_Animbp_C:DespawnSprayParticle() end
---@param EntryPoint int32
function UDennis_Animbp_C:ExecuteUbergraph_Dennis_Animbp(EntryPoint) end


