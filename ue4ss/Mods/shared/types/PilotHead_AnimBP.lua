---@meta

---@class UPilotHead_AnimBP_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_PoseBlendNode FAnimNode_PoseBlendNode
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_CopyPoseFromMesh FAnimNode_CopyPoseFromMesh
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field ['Pose Asset'] UPoseAsset
local UPilotHead_AnimBP_C = {}

---@param AnimGraph FPoseLink
function UPilotHead_AnimBP_C:AnimGraph(AnimGraph) end
---@param Loaded UObject
function UPilotHead_AnimBP_C:OnLoaded_D502EBEE41FCB7881F241E905E7C11E7(Loaded) end
function UPilotHead_AnimBP_C:BlueprintInitializeAnimation() end
---@param EntryPoint int32
function UPilotHead_AnimBP_C:ExecuteUbergraph_PilotHead_AnimBP(EntryPoint) end


