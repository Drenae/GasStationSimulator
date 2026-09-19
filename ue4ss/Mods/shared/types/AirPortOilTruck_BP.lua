---@meta

---@class AAirPortOilTruck_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight1_0 USpotLightComponent
---@field SpotLight_0 USpotLightComponent
---@field SM_FuelPipe_Oiltruck UStaticMeshComponent
---@field FuelPlace UStaticMeshComponent
---@field Pistolet UChildActorComponent
---@field SM_Engine_Belt UStaticMeshComponent
---@field AmericanCar_Kierownica UStaticMeshComponent
---@field cccc UStaticMeshComponent
---@field Timer_0 FTimerHandle
---@field FuelPourSound UAudioComponent
local AAirPortOilTruck_BP_C = {}

---@return boolean
function AAirPortOilTruck_BP_C:IsAirportTruck() end
function AAirPortOilTruck_BP_C:ReceiveBeginPlay() end
function AAirPortOilTruck_BP_C:ReceiveDestroyed() end
---@param Location FVector
---@param Sound USoundBase
function AAirPortOilTruck_BP_C:SpawnPouringSound(Location, Sound) end
function AAirPortOilTruck_BP_C:FadePouringSound() end
---@param EntryPoint int32
function AAirPortOilTruck_BP_C:ExecuteUbergraph_AirPortOilTruck_BP(EntryPoint) end


