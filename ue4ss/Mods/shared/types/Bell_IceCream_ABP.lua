---@meta

---@class UBell_IceCream_ABP_C : UBellAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_Slot FAnimNode_Slot
local UBell_IceCream_ABP_C = {}

---@param AnimGraph FPoseLink
function UBell_IceCream_ABP_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UBell_IceCream_ABP_C:ExecuteUbergraph_Bell_IceCream_ABP(EntryPoint) end


