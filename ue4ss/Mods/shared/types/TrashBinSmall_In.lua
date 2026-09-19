---@meta

---@class ATrashBinSmall_In_C : ATrashBinSmall_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NPCIndicatorArrow UStaticMeshComponent
---@field Box1 UBoxComponent
---@field ['Allert Message Text'] FText
---@field Warning UAllertMessage_C
---@field StaticMesh UStaticMeshComponent
---@field ShelnHand UUserWidget
local ATrashBinSmall_In_C = {}

---@return FName
function ATrashBinSmall_In_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ATrashBinSmall_In_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function ATrashBinSmall_In_C:ReceiveBeginPlay() end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function ATrashBinSmall_In_C:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end
function ATrashBinSmall_In_C:ReceiveDestroyed() end
---@param EntryPoint int32
function ATrashBinSmall_In_C:ExecuteUbergraph_TrashBinSmall_In(EntryPoint) end


