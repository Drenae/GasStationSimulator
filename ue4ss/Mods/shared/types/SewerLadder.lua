---@meta

---@class ASewerLadder_C : AGSSLadder
---@field Part5 UStaticMeshComponent
---@field Part4 UStaticMeshComponent
---@field Part3 UStaticMeshComponent
---@field Part2 UStaticMeshComponent
local ASewerLadder_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ASewerLadder_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewerLadder_C:CanBeInteractable(Pawn, UPrimitiveComponent) end


