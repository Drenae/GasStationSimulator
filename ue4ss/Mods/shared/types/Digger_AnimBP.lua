---@meta

---@class UDigger_AnimBP_C : UVehicleAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_WheelHandler FAnimNode_WheelHandler
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_BlendSpacePlayer_2 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field AnimGraphNode_LinkedInputPose FAnimNode_LinkedInputPose
---@field AnimGraphNode_LayeredBoneBlend_1 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_BlendSpacePlayer_1 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field Distance float
---@field NewVar_0 UCurveFloat
---@field FWD float
---@field Direction float
local UDigger_AnimBP_C = {}

---@param InPose FPoseLink
---@param AnimGraph FPoseLink
function UDigger_AnimBP_C:AnimGraph(InPose, AnimGraph) end
---@param DeltaTimeX float
function UDigger_AnimBP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UDigger_AnimBP_C:ExecuteUbergraph_Digger_AnimBP(EntryPoint) end


