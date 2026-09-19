---@meta

---@class ABP_MapInteraction_C : AInteractableActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_papers_stickynote_010 UStaticMeshComponent
---@field SM_papers_stickynote_09 UStaticMeshComponent
---@field SM_papers_stickynote_08 UStaticMeshComponent
---@field SM_papers_stickynote_07 UStaticMeshComponent
---@field SM_papers_stickynote_06 UStaticMeshComponent
local ABP_MapInteraction_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_MapInteraction_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@return FName
function ABP_MapInteraction_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_MapInteraction_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_MapInteraction_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Loaded UClass
function ABP_MapInteraction_C:OnLoaded_3160DD1440B91E5B7991A38B07F53E9A(Loaded) end
function ABP_MapInteraction_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_MapInteraction_C:ExecuteUbergraph_BP_MapInteraction(EntryPoint) end


