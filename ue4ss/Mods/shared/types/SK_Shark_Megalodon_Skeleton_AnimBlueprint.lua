---@meta

---@class USK_Shark_Megalodon_Skeleton_AnimBlueprint_C : UPilotsAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_RotationOffsetBlendSpace FAnimNode_RotationOffsetBlendSpace
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_Slot_2 FAnimNode_Slot
---@field AnimGraphNode_Slot_1 FAnimNode_Slot
---@field AnimGraphNode_LayeredBoneBlend_1 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_SaveCachedPose FAnimNode_SaveCachedPose
---@field AnimGraphNode_UseCachedPose_2 FAnimNode_UseCachedPose
---@field AnimGraphNode_UseCachedPose_1 FAnimNode_UseCachedPose
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_UseCachedPose FAnimNode_UseCachedPose
---@field CachedRotation FRotator
---@field DeltaRotation FRotator
---@field Direction float
---@field ['Blend Weights 0'] float
local USK_Shark_Megalodon_Skeleton_AnimBlueprint_C = {}

---@param AnimGraph FPoseLink
function USK_Shark_Megalodon_Skeleton_AnimBlueprint_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function USK_Shark_Megalodon_Skeleton_AnimBlueprint_C:BlueprintUpdateAnimation(DeltaTimeX) end
function USK_Shark_Megalodon_Skeleton_AnimBlueprint_C:BlueprintInitializeAnimation() end
---@param EntryPoint int32
function USK_Shark_Megalodon_Skeleton_AnimBlueprint_C:ExecuteUbergraph_SK_Shark_Megalodon_Skeleton_AnimBlueprint(EntryPoint) end


