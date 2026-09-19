---@meta

---@class ACarPartsTruck_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Plane1 UStaticMeshComponent
---@field Plane UStaticMeshComponent
---@field Box2 UBoxComponent
---@field Box3 UBoxComponent
---@field Box UBoxComponent
---@field SupBox UChildActorComponent
---@field TruckDoor_R_BP UChildActorComponent
---@field TruckDoor_L_BP UChildActorComponent
---@field cccc UStaticMeshComponent
local ACarPartsTruck_BP_C = {}

---@param bOpen boolean
function ACarPartsTruck_BP_C:SetTruckDoorsOpen(bOpen) end
---@return boolean
function ACarPartsTruck_BP_C:IsPartsDeliveryTruck() end
---@param Target UInventoryComponent
ACarPartsTruck_BP_C['Old Load Inventory Truck'] = function(self, Target) end
---@param Loaded UClass
function ACarPartsTruck_BP_C:OnLoaded_14E937B343C4AE1D65A9CAA7960CC528(Loaded) end
function ACarPartsTruck_BP_C:ShowProduct() end
function ACarPartsTruck_BP_C:ReceiveBeginPlay() end
function ACarPartsTruck_BP_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ACarPartsTruck_BP_C:ReceiveTick(DeltaSeconds) end
---@param GameLoaded boolean
function ACarPartsTruck_BP_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param Target UInventoryComponent
function ACarPartsTruck_BP_C:LoadInventoryTruck(Target) end
---@param bEnable boolean
function ACarPartsTruck_BP_C:VehicleInteractMode(bEnable) end
---@param EntryPoint int32
function ACarPartsTruck_BP_C:ExecuteUbergraph_CarPartsTruck_BP(EntryPoint) end


