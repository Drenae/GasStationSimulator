---@meta

---@class UPlayer_AnimBp_C : UPlayerAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_TransitionResult_5 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_4 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_3 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_2 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_4 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_4 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_3 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_3 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_2 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field AnimGraphNode_Slot_1 FAnimNode_Slot
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field Speed float
---@field IsInAir boolean
---@field Stinkbomb boolean
---@field BloodParticle UParticleSystemComponent
---@field CameraAnimAlpha float
---@field SpawnedBeerBottle AActor
local UPlayer_AnimBp_C = {}

---@param AnimGraph FPoseLink
function UPlayer_AnimBp_C:AnimGraph(AnimGraph) end
function UPlayer_AnimBp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBp_AnimGraphNode_LayeredBoneBlend_04D286C54243AEFFE672529A4EC3FBB5() end
function UPlayer_AnimBp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBp_AnimGraphNode_TransitionResult_B623E50441923A364183B8B38438E6C5() end
function UPlayer_AnimBp_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBp_AnimGraphNode_TransitionResult_FC199EB34C3C33AB49CF1C843D9F1ABD() end
---@param DeltaTimeX float
function UPlayer_AnimBp_C:BlueprintUpdateAnimation(DeltaTimeX) end
function UPlayer_AnimBp_C:AnimNotify_BlackOut() end
function UPlayer_AnimBp_C:AnimNotify_BloodSplatter() end
function UPlayer_AnimBp_C:AnimNotify_RemoveBloodSplatter() end
function UPlayer_AnimBp_C:AnimNotify_SlowBlackOut() end
---@param EntryPoint int32
function UPlayer_AnimBp_C:ExecuteUbergraph_Player_AnimBp(EntryPoint) end


