---@meta

---@class UGarageDoor_AnimBP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field IsOpen boolean
---@field OwnerActor AActor
---@field HasCollision boolean
local UGarageDoor_AnimBP_C = {}

---@param AnimGraph FPoseLink
function UGarageDoor_AnimBP_C:AnimGraph(AnimGraph) end
---@param Sound USoundBase
function UGarageDoor_AnimBP_C:PlaySoundAttached(Sound) end
function UGarageDoor_AnimBP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_GarageDoor_AnimBP_AnimGraphNode_TransitionResult_79B8B1714BD28317C978D084EE63F41E() end
---@param DeltaTimeX float
function UGarageDoor_AnimBP_C:BlueprintUpdateAnimation(DeltaTimeX) end
function UGarageDoor_AnimBP_C:AnimNotify_CloseDoors() end
function UGarageDoor_AnimBP_C:AnimNotify_OpenDoors() end
function UGarageDoor_AnimBP_C:BlueprintInitializeAnimation() end
---@param EntryPoint int32
function UGarageDoor_AnimBP_C:ExecuteUbergraph_GarageDoor_AnimBP(EntryPoint) end


