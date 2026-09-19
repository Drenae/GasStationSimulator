---@meta

---@class UNPC_Digger_AnimBp_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field ForwardAxis float
---@field Direction float
local UNPC_Digger_AnimBp_C = {}

---@param AnimGraph FPoseLink
function UNPC_Digger_AnimBp_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UNPC_Digger_AnimBp_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UNPC_Digger_AnimBp_C:ExecuteUbergraph_NPC_Digger_AnimBp(EntryPoint) end


