---@meta

---@class ABP_PhotoMode_Junkyard_C : AInteractableActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field StaticMesh UStaticMeshComponent
local ABP_PhotoMode_Junkyard_C = {}

---@param DeltaSeconds float
function ABP_PhotoMode_Junkyard_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_PhotoMode_Junkyard_C:ExecuteUbergraph_BP_PhotoMode_Junkyard(EntryPoint) end


