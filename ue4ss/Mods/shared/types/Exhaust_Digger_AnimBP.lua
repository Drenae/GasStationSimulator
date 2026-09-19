---@meta

---@class UExhaust_Digger_AnimBP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field ['DoWeDrive?'] boolean
local UExhaust_Digger_AnimBP_C = {}

---@param AnimGraph FPoseLink
function UExhaust_Digger_AnimBP_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UExhaust_Digger_AnimBP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UExhaust_Digger_AnimBP_C:ExecuteUbergraph_Exhaust_Digger_AnimBP(EntryPoint) end


