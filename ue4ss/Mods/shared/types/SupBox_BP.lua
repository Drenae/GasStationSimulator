---@meta

---@class ASupBox_BP_C : ASupBox
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TruckInventory UInventoryComponent
---@field IsAirplane boolean
local ASupBox_BP_C = {}

---@return FName
function ASupBox_BP_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ASupBox_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASupBox_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ASupBox_BP_C:ReceiveBeginPlay() end
function ASupBox_BP_C:UpdateItemBox() end
---@param Inventory UInventoryComponent
function ASupBox_BP_C:OnInventoryUpdated_Event_0(Inventory) end
---@param Inventory UInventoryComponent
function ASupBox_BP_C:ChangeInventory(Inventory) end
---@param EntryPoint int32
function ASupBox_BP_C:ExecuteUbergraph_SupBox_BP(EntryPoint) end


