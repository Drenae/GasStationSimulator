---@meta

---@class A00_Stand_C : AShelf
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field dupa UStaticMeshComponent
---@field ShelnHand UUserWidget
---@field Warning UAllertMessage_C
---@field ['Allert Message Text'] FText
local A00_Stand_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function A00_Stand_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function A00_Stand_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function A00_Stand_C:ReceiveBeginPlay() end
function A00_Stand_C:EnableGhostMode() end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function A00_Stand_C:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end
function A00_Stand_C:ReceiveDestroyed() end
function A00_Stand_C:ShowProduct() end
function A00_Stand_C:ReFillShelfes() end
---@param EntryPoint int32
function A00_Stand_C:ExecuteUbergraph_00_Stand(EntryPoint) end


