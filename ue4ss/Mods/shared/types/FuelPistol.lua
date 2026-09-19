---@meta

---@class AFuelPistol_C : AFuelPistolBase
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
---@field PistolInUse FFuelPistol_CPistolInUse
---@field ['Fuel Enter'] AFuelEnter
---@field FuelBeforeWidget UWBP_FuelBeforeTanking_C
---@field CorrectnessRotations TMap<TSubclassOf<AFuelEnter>, FRotator>
local AFuelPistol_C = {}

---@param FuelEnter AFuelEnter
---@param FuelPistol AActor
function AFuelPistol_C:AddPistolOffsetWhenConnected(FuelEnter, FuelPistol) end
---@param DeltaSeconds float
function AFuelPistol_C:ReceiveTick(DeltaSeconds) end
function AFuelPistol_C:LimpEvent() end
---@param FuelStationRef AFuelStation
function AFuelPistol_C:PutDownPistol(FuelStationRef) end
---@param Target AActor
---@param UseInstigator AActor
---@param FuelEnter AFuelEnter
function AFuelPistol_C:PistolUse(Target, UseInstigator, FuelEnter) end
function AFuelPistol_C:StopMiniGame() end
function AFuelPistol_C:StartMiniGame() end
---@param EntryPoint int32
function AFuelPistol_C:ExecuteUbergraph_FuelPistol(EntryPoint) end
---@param PistolInUse boolean
function AFuelPistol_C:PistolInUse__DelegateSignature(PistolInUse) end


