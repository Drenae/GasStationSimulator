---@meta

---@class AOilTruck_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight1_0 USpotLightComponent
---@field SpotLight_0 USpotLightComponent
---@field SM_FuelPipe_Oiltruck UStaticMeshComponent
---@field FuelPlace UStaticMeshComponent
---@field Pistolet UChildActorComponent
---@field SM_Engine_Belt UStaticMeshComponent
---@field AmericanCar_Kierownica UStaticMeshComponent
---@field cccc UStaticMeshComponent
---@field FuelPourSound UAudioComponent
local AOilTruck_BP_C = {}

---@return boolean
function AOilTruck_BP_C:IsFuelDeliveryTruck() end
function AOilTruck_BP_C:ReceiveBeginPlay() end
function AOilTruck_BP_C:ReceiveDestroyed() end
---@param Location FVector
---@param Sound USoundBase
function AOilTruck_BP_C:SpawnPouringSound(Location, Sound) end
function AOilTruck_BP_C:FadePouringSound() end
---@param EntryPoint int32
function AOilTruck_BP_C:ExecuteUbergraph_OilTruck_BP(EntryPoint) end


