---@meta

---@class USK_Lever_Skeleton_AnimBlueprint_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_LinkedInputPose FAnimNode_LinkedInputPose
---@field AnimGraphNode_Slot FAnimNode_Slot
local USK_Lever_Skeleton_AnimBlueprint_C = {}

---@param InPose FPoseLink
---@param AnimGraph FPoseLink
function USK_Lever_Skeleton_AnimBlueprint_C:AnimGraph(InPose, AnimGraph) end
---@param EntryPoint int32
function USK_Lever_Skeleton_AnimBlueprint_C:ExecuteUbergraph_SK_Lever_Skeleton_AnimBlueprint(EntryPoint) end


