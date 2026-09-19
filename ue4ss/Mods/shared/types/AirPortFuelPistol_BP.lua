---@meta

---@class AAirPortFuelPistol_BP_C : AFuelPistolBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PistolCableLocation USceneComponent
---@field FuelCapSound UAudioComponent
---@field FuelPourSound UAudioComponent
---@field StaticMesh UStaticMeshComponent
---@field User APawn
---@field LimpTimerHandle FTimerHandle
---@field ['Fuel Station'] AFuelStation
---@field _target AActor
---@field _Instaginator AActor
---@field PistolInUse FAirPortFuelPistol_BP_CPistolInUse
---@field ['Fuel Enter'] AFuelEnter
---@field PreWidget UWBP_FuelBeforeTanking_C
local AAirPortFuelPistol_BP_C = {}

---@param DeltaSeconds float
function AAirPortFuelPistol_BP_C:ReceiveTick(DeltaSeconds) end
function AAirPortFuelPistol_BP_C:LimpEvent() end
---@param FuelStationRef AFuelStation
function AAirPortFuelPistol_BP_C:PutDownPistol(FuelStationRef) end
---@param Target AActor
---@param UseInstigator AActor
---@param FuelEnter AFuelEnter
function AAirPortFuelPistol_BP_C:PistolUse(Target, UseInstigator, FuelEnter) end
function AAirPortFuelPistol_BP_C:StartMiniGame() end
function AAirPortFuelPistol_BP_C:StopMiniGame() end
---@param EntryPoint int32
function AAirPortFuelPistol_BP_C:ExecuteUbergraph_AirPortFuelPistol_BP(EntryPoint) end
---@param PistolInUse boolean
function AAirPortFuelPistol_BP_C:PistolInUse__DelegateSignature(PistolInUse) end


