---@meta

---@class UJoe_ZippoAnimBp_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_Slot FAnimNode_Slot
local UJoe_ZippoAnimBp_C = {}

---@param AnimGraph FPoseLink
function UJoe_ZippoAnimBp_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UJoe_ZippoAnimBp_C:ExecuteUbergraph_Joe_ZippoAnimBp(EntryPoint) end


