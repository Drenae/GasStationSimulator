---@meta

---@class USparkPlug_AnimBP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field AnimGraphNode_Slot FAnimNode_Slot
local USparkPlug_AnimBP_C = {}

---@param AnimGraph FPoseLink
function USparkPlug_AnimBP_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function USparkPlug_AnimBP_C:ExecuteUbergraph_SparkPlug_AnimBP(EntryPoint) end


