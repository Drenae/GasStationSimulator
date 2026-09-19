---@meta

---@class ACaravan_Base_C : ACaravan
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ChairArrow UArrowComponent
---@field StaticMesh UStaticMeshComponent
---@field InteractableRef AInteractableActor
local ACaravan_Base_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACaravan_Base_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACaravan_Base_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
function ACaravan_Base_C:DisableInteractionInfo(Pawn) end
function ACaravan_Base_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACaravan_Base_C:ExecuteUbergraph_Caravan_Base(EntryPoint) end


