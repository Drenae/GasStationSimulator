---@meta

---@class UCarBattery_AnimBP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
local UCarBattery_AnimBP_C = {}

---@param AnimGraph FPoseLink
function UCarBattery_AnimBP_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UCarBattery_AnimBP_C:ExecuteUbergraph_CarBattery_AnimBP(EntryPoint) end


