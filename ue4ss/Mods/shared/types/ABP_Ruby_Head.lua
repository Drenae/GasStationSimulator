---@meta

---@class UABP_Ruby_Head_C : UHumanAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_CopyPoseFromMesh FAnimNode_CopyPoseFromMesh
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
local UABP_Ruby_Head_C = {}

---@param AnimGraph FPoseLink
function UABP_Ruby_Head_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UABP_Ruby_Head_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UABP_Ruby_Head_C:ExecuteUbergraph_ABP_Ruby_Head(EntryPoint) end


