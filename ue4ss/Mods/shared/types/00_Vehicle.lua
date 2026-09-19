---@meta

---@class A00_Vehicle_C : AGSSWheeledVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VehicleOverlapComponent UGSBoxComponent
---@field GSBox UGSBoxComponent
---@field SpotLight1 USpotLightComponent
---@field SpotLight USpotLightComponent
---@field EngineSound UAudioComponent
---@field DebugInfo boolean
---@field DynamicMaterial UMaterialInstanceDynamic
---@field AlarmTime FTimerHandle
---@field KlaksonTime boolean
---@field LightEnabled boolean
---@field CurSetup EVehicleOptymalizeType
---@field TimerCheckingFlying FTimerHandle
---@field Looping boolean
---@field Timer FTimerHandle
---@field CarAlarmSound UAudioComponent
---@field EngineStopSoundCue USoundBase
---@field EngineStartSoundCue USoundBase
local A00_Vehicle_C = {}

---@return boolean
function A00_Vehicle_C:IsPartyBusStop() end
---@return boolean
function A00_Vehicle_C:IsRepaintTruck() end
---@return boolean
function A00_Vehicle_C:IsTouristBus() end
---@return boolean
function A00_Vehicle_C:IsProductsDeliveryTruck() end
---@return boolean
function A00_Vehicle_C:IsPartsDeliveryTruck() end
---@return boolean
function A00_Vehicle_C:IsGarbageTruck() end
---@return boolean
function A00_Vehicle_C:IsFuelDeliveryTruck() end
---@param OverrideLinearColor FLinearColor
---@param bOverrideColor boolean
---@param BareMetal_BrightnessOverride float
function A00_Vehicle_C:SetupCarColors(OverrideLinearColor, bOverrideColor, BareMetal_BrightnessOverride) end
---@return boolean
function A00_Vehicle_C:IsRepairQuest() end
---@param NotifyName FName
function A00_Vehicle_C:OnNotifyEnd_4D901602407506654D0A6AA7099E3A8C(NotifyName) end
---@param NotifyName FName
function A00_Vehicle_C:OnNotifyBegin_4D901602407506654D0A6AA7099E3A8C(NotifyName) end
---@param NotifyName FName
function A00_Vehicle_C:OnInterrupted_4D901602407506654D0A6AA7099E3A8C(NotifyName) end
---@param NotifyName FName
function A00_Vehicle_C:OnBlendOut_4D901602407506654D0A6AA7099E3A8C(NotifyName) end
---@param NotifyName FName
function A00_Vehicle_C:OnCompleted_4D901602407506654D0A6AA7099E3A8C(NotifyName) end
function A00_Vehicle_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function A00_Vehicle_C:ReceiveTick(DeltaSeconds) end
function A00_Vehicle_C:ALARM() end
function A00_Vehicle_C:FindAndGeneratePath() end
---@param CurrentDriver AAICharacterBase
function A00_Vehicle_C:StopDriving(CurrentDriver) end
---@param CurrentDriver AAICharacterBase
---@param NewStartPathPoint APathPoint
function A00_Vehicle_C:StartDriving(CurrentDriver, NewStartPathPoint) end
---@param NewSetup EVehicleOptymalizeType
function A00_Vehicle_C:VehicleStartSetup(NewSetup) end
---@param bEnabled boolean
function A00_Vehicle_C:VehicleAlarm(bEnabled) end
function A00_Vehicle_C:CarHorn() end
---@param Enable boolean
function A00_Vehicle_C:EnableLamps(Enable) end
---@param bEnable boolean
function A00_Vehicle_C:VehicleInteractMode(bEnable) end
function A00_Vehicle_C:OnTimePassed() end
function A00_Vehicle_C:SpawnMarkerPoint() end
---@param Enable boolean
function A00_Vehicle_C:EnableOverlaps(Enable) end
---@param CurrentDriver AAICharacterBase
function A00_Vehicle_C:StopDrivingNoExit(CurrentDriver) end
function A00_Vehicle_C:StopVehicle() end
---@param CurrentDriver AAICharacterBase
function A00_Vehicle_C:ExitVehicle(CurrentDriver) end
---@param bEnable boolean
function A00_Vehicle_C:ToggleNavComponent(bEnable) end
---@param EntryPoint int32
function A00_Vehicle_C:ExecuteUbergraph_00_Vehicle(EntryPoint) end


