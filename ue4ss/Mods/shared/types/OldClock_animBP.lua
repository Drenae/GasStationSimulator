---@meta

---@class UOldClock_animBP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_ModifyBone_1 FAnimNode_ModifyBone
---@field AnimGraphNode_ModifyBone FAnimNode_ModifyBone
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field MInuty int32
---@field Hours int32
local UOldClock_animBP_C = {}

---@param AnimGraph FPoseLink
function UOldClock_animBP_C:AnimGraph(AnimGraph) end
function UOldClock_animBP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_OldClock_animBP_AnimGraphNode_ModifyBone_9E5253C54AABE268DB6C29A9BE025EA7() end
function UOldClock_animBP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_OldClock_animBP_AnimGraphNode_ModifyBone_509EA8FF4689CB1D62202295EED27E89() end
---@param DeltaTimeX float
function UOldClock_animBP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param UpdatedTime FTimeStruct
function UOldClock_animBP_C:timeANimationCLock(UpdatedTime) end
function UOldClock_animBP_C:BlueprintBeginPlay() end
---@param EntryPoint int32
function UOldClock_animBP_C:ExecuteUbergraph_OldClock_animBP(EntryPoint) end


