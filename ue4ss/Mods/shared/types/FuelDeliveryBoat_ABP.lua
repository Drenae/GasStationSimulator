---@meta

---@class UFuelDeliveryBoat_ABP_C : UPilotsAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_SaveCachedPose FAnimNode_SaveCachedPose
---@field AnimGraphNode_UseCachedPose_1 FAnimNode_UseCachedPose
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_Slot_1 FAnimNode_Slot
---@field AnimGraphNode_UseCachedPose FAnimNode_UseCachedPose
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field CachedRotation FRotator
---@field Move boolean
---@field DeltaRotation FRotator
---@field Direction float
local UFuelDeliveryBoat_ABP_C = {}

---@param AnimGraph FPoseLink
function UFuelDeliveryBoat_ABP_C:AnimGraph(AnimGraph) end
function UFuelDeliveryBoat_ABP_C:BlueprintInitializeAnimation() end
---@param DeltaTimeX float
function UFuelDeliveryBoat_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UFuelDeliveryBoat_ABP_C:ExecuteUbergraph_FuelDeliveryBoat_ABP(EntryPoint) end


