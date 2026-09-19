---@meta

---@class ADecoration_Base_C : ADecorationBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DecorationsInHand UUserWidget
local ADecoration_Base_C = {}

---@return FName
function ADecoration_Base_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ADecoration_Base_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADecoration_Base_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param DeltaSeconds float
function ADecoration_Base_C:ReceiveTick(DeltaSeconds) end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function ADecoration_Base_C:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end
function ADecoration_Base_C:ReceiveBeginPlay() end
function ADecoration_Base_C:ReceiveDestroyed() end
---@param EntryPoint int32
function ADecoration_Base_C:ExecuteUbergraph_Decoration_Base(EntryPoint) end


