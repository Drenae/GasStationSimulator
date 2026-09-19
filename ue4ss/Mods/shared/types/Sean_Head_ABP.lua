---@meta

---@class USean_Head_ABP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_CopyPoseFromMesh FAnimNode_CopyPoseFromMesh
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_PoseBlendNode FAnimNode_PoseBlendNode
---@field AnimGraphNode_Slot FAnimNode_Slot
local USean_Head_ABP_C = {}

---@param AnimGraph FPoseLink
function USean_Head_ABP_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function USean_Head_ABP_C:ExecuteUbergraph_Sean_Head_ABP(EntryPoint) end


