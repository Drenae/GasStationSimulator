---@meta

---@class ABusStop_BP_C : ABusStop
---@field UberGraphFrame FPointerToUberGraphFrame
local ABusStop_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABusStop_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABusStop_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function ABusStop_BP_C:ReceiveBeginPlay() end
function ABusStop_BP_C:ReceiveDestroyed() end
---@param EntryPoint int32
function ABusStop_BP_C:ExecuteUbergraph_BusStop_BP(EntryPoint) end


