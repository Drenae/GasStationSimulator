---@meta

---@class UTT_Platform_ABP_C : UTowyAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_BlendSpacePlayer_2 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LayeredBoneBlend_2 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_WheelHandler FAnimNode_WheelHandler
---@field AnimGraphNode_LinkedInputPose FAnimNode_LinkedInputPose
---@field AnimGraphNode_LocalToComponentSpace_1 FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_LayeredBoneBlend_1 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer_1 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_ComponentToLocalSpace_1 FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_RigidBody FAnimNode_RigidBody
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field alpha float
---@field NewVar_0 boolean
---@field Montage boolean
---@field MagnetModeAlpha float
local UTT_Platform_ABP_C = {}

---@param InPose FPoseLink
---@param AnimGraph FPoseLink
function UTT_Platform_ABP_C:AnimGraph(InPose, AnimGraph) end
function UTT_Platform_ABP_C:HandleMontageAlpha() end
---@param DeltaTimeX float
function UTT_Platform_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UTT_Platform_ABP_C:ExecuteUbergraph_TT_Platform_ABP(EntryPoint) end


