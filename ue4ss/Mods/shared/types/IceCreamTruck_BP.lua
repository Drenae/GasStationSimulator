---@meta

---@class AIceCreamTruck_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box3 UBoxComponent
---@field Box2 UBoxComponent
---@field Box UBoxComponent
---@field SpotLight2 USpotLightComponent
---@field SpotLight1_0 USpotLightComponent
---@field vintage_car_Kierownica UStaticMeshComponent
---@field SupBox UChildActorComponent
---@field TruckDoor_R_BP UChildActorComponent
---@field TruckDoor_L_BP UChildActorComponent
---@field SM_Engine_Belt UStaticMeshComponent
---@field AmericanCar_Kierownica UStaticMeshComponent
---@field cccc UStaticMeshComponent
local AIceCreamTruck_BP_C = {}

---@param bOpen boolean
function AIceCreamTruck_BP_C:SetTruckDoorsOpen(bOpen) end
---@return boolean
function AIceCreamTruck_BP_C:IsIceCreamDeliveryTruck() end
---@param Target UInventoryComponent
AIceCreamTruck_BP_C['Old Load Inventory Truck'] = function(self, Target) end
function AIceCreamTruck_BP_C:ReceiveBeginPlay() end
function AIceCreamTruck_BP_C:ShowProduct() end
---@param CurrentProgress float
---@param MaxProgress float
---@param LoadedMap FName
---@param LoadGameCompleted boolean
function AIceCreamTruck_BP_C:OnLoadGameProgressUpdated_Event_0(CurrentProgress, MaxProgress, LoadedMap, LoadGameCompleted) end
function AIceCreamTruck_BP_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function AIceCreamTruck_BP_C:ReceiveTick(DeltaSeconds) end
---@param Target UInventoryComponent
function AIceCreamTruck_BP_C:LoadInventoryTruck(Target) end
---@param bEnable boolean
function AIceCreamTruck_BP_C:VehicleInteractMode(bEnable) end
---@param EntryPoint int32
function AIceCreamTruck_BP_C:ExecuteUbergraph_IceCreamTruck_BP(EntryPoint) end


