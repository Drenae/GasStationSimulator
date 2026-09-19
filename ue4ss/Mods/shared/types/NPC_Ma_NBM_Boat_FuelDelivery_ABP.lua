---@meta

---@class UNPC_Ma_NBM_Boat_FuelDelivery_ABP_C : UPilotsAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field DeltaRotation FRotator
---@field CachedRotation FRotator
---@field Direction float
---@field Move boolean
local UNPC_Ma_NBM_Boat_FuelDelivery_ABP_C = {}

---@param AnimGraph FPoseLink
function UNPC_Ma_NBM_Boat_FuelDelivery_ABP_C:AnimGraph(AnimGraph) end
function UNPC_Ma_NBM_Boat_FuelDelivery_ABP_C:BlueprintInitializeAnimation() end
---@param DeltaTimeX float
function UNPC_Ma_NBM_Boat_FuelDelivery_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UNPC_Ma_NBM_Boat_FuelDelivery_ABP_C:ExecuteUbergraph_NPC_Ma_NBM_Boat_FuelDelivery_ABP(EntryPoint) end


