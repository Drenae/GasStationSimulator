---@meta

---@class ADeliveryMarker_BP_C : AObjectiveMarker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field MarkerRef UUserWidget
---@field MarkerClass TSubclassOf<UUserWidget>
local ADeliveryMarker_BP_C = {}

---@param VehicleClass TSoftClassPtr<AActor>
---@param WidgetClass TSubclassOf<UUserWidget>
ADeliveryMarker_BP_C['Find Delivery Marker Class'] = function(self, VehicleClass, WidgetClass) end
function ADeliveryMarker_BP_C:ReceiveBeginPlay() end
function ADeliveryMarker_BP_C:ReceiveDestroyed() end
---@param Show boolean
---@param Distance float
function ADeliveryMarker_BP_C:UpdateMarker(Show, Distance) end
---@param Show boolean
---@param Distance float
function ADeliveryMarker_BP_C:UpdateOutline(Show, Distance) end
---@param EntryPoint int32
function ADeliveryMarker_BP_C:ExecuteUbergraph_DeliveryMarker_BP(EntryPoint) end


