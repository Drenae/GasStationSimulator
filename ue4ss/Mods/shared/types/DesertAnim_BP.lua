---@meta

---@class UDesertAnim_BP_C : UVehicleAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_ComponentToLocalSpace FAnimNode_ConvertComponentToLocalSpace
---@field AnimGraphNode_WheelHandler FAnimNode_WheelHandler
---@field AnimGraphNode_LocalToComponentSpace FAnimNode_ConvertLocalToComponentSpace
---@field AnimGraphNode_LinkedInputPose FAnimNode_LinkedInputPose
local UDesertAnim_BP_C = {}

---@param InPose FPoseLink
---@param AnimGraph FPoseLink
function UDesertAnim_BP_C:AnimGraph(InPose, AnimGraph) end
---@param EntryPoint int32
function UDesertAnim_BP_C:ExecuteUbergraph_DesertAnim_BP(EntryPoint) end


