---@meta

---@class AProductsTruck_BP_C : A00_Vehicle_C
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
local AProductsTruck_BP_C = {}

---@param bOpen boolean
function AProductsTruck_BP_C:SetTruckDoorsOpen(bOpen) end
---@return boolean
function AProductsTruck_BP_C:IsProductsDeliveryTruck() end
---@param Target UInventoryComponent
AProductsTruck_BP_C['Old Load Inventory Truck'] = function(self, Target) end
---@param Loaded UClass
function AProductsTruck_BP_C:OnLoaded_027676514C2855B37D9B9081FA931BDE(Loaded) end
function AProductsTruck_BP_C:ReceiveBeginPlay() end
function AProductsTruck_BP_C:ShowProduct() end
---@param CurrentProgress float
---@param MaxProgress float
---@param LoadedMap FName
---@param LoadGameCompleted boolean
function AProductsTruck_BP_C:OnLoadGameProgressUpdated_Event_0(CurrentProgress, MaxProgress, LoadedMap, LoadGameCompleted) end
function AProductsTruck_BP_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function AProductsTruck_BP_C:ReceiveTick(DeltaSeconds) end
---@param Target UInventoryComponent
function AProductsTruck_BP_C:LoadInventoryTruck(Target) end
---@param bEnable boolean
function AProductsTruck_BP_C:VehicleInteractMode(bEnable) end
---@param EntryPoint int32
function AProductsTruck_BP_C:ExecuteUbergraph_ProductsTruck_BP(EntryPoint) end


