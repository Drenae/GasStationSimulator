---@meta

---@class UBiker_PrologAnimbp_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field MusicLoop UAudioComponent
---@field Impact UAudioComponent
local UBiker_PrologAnimbp_C = {}

---@param AnimGraph FPoseLink
function UBiker_PrologAnimbp_C:AnimGraph(AnimGraph) end
function UBiker_PrologAnimbp_C:AnimNotify_BikerDialog() end
function UBiker_PrologAnimbp_C:AnimNotify_BikerPush() end
function UBiker_PrologAnimbp_C:AnimNotify_BikerPunch() end
function UBiker_PrologAnimbp_C:AnimNotify_BikerStomp() end
function UBiker_PrologAnimbp_C:AnimNotify_BikerStep() end
function UBiker_PrologAnimbp_C:AnimNotify_Music() end
function UBiker_PrologAnimbp_C:AnimNotify_Boom() end
function UBiker_PrologAnimbp_C:AnimNotify_GuitarLoop() end
---@param EntryPoint int32
function UBiker_PrologAnimbp_C:ExecuteUbergraph_Biker_PrologAnimbp(EntryPoint) end


