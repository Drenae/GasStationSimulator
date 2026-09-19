---@meta

---@class UJoe_Head_ABP_C : UPilotsAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_CopyPoseFromMesh FAnimNode_CopyPoseFromMesh
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_PoseBlendNode FAnimNode_PoseBlendNode
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field bLookAt boolean
---@field ['Look At Location'] FTransform
---@field ShouldLookAt boolean
local UJoe_Head_ABP_C = {}

---@param AnimGraph FPoseLink
function UJoe_Head_ABP_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UJoe_Head_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UJoe_Head_ABP_C:ExecuteUbergraph_Joe_Head_ABP(EntryPoint) end


