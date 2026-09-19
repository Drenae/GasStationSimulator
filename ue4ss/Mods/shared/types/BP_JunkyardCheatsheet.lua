---@meta

---@class ABP_JunkyardCheatsheet_C : AInteractableActor
local ABP_JunkyardCheatsheet_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardCheatsheet_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardCheatsheet_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_JunkyardCheatsheet_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end


