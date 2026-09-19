---@meta

---@class ABP_JunkyardStorage_Shelf_C : AInteractableActor
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_JunkyardStorage_Shelf_C = {}

---@return FName
function ABP_JunkyardStorage_Shelf_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardStorage_Shelf_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ABP_JunkyardStorage_Shelf_C:OnPartAddedToStorage() end
function ABP_JunkyardStorage_Shelf_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_JunkyardStorage_Shelf_C:ExecuteUbergraph_BP_JunkyardStorage_Shelf(EntryPoint) end


