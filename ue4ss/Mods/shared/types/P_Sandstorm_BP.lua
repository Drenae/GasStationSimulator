---@meta

---@class AP_Sandstorm_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FogSheetPlane UStaticMeshComponent
---@field Arrow4 UArrowComponent
---@field PostProcess UPostProcessComponent
---@field Box UBoxComponent
---@field DebugCube UStaticMeshComponent
---@field Arrow3 UArrowComponent
---@field Arrow2 UArrowComponent
---@field Arrow1 UArrowComponent
---@field arrow UArrowComponent
---@field SandstormVFX UParticleSystemComponent
---@field DefaultSceneRoot USceneComponent
---@field ObjMover_Alpha_A9AA2F4B49DCFFE49E1BCB865FAEE6AD float
---@field ObjMover__Direction_A9AA2F4B49DCFFE49E1BCB865FAEE6AD ETimelineDirection::Type
---@field ObjMover UTimelineComponent
---@field ActivateSplineMovement boolean
---@field alpha float
---@field Duration float
---@field ObjStartOffset float
---@field SandstormPathRef ASandstormPath_C
---@field ThunderEnable boolean
---@field ThunderDelay float
---@field SandStormSimulationSpeed float
---@field SpawnDensity float
---@field PP_Scale float
---@field PP_Debug_Scale boolean
---@field ThundersRef UParticleSystemComponent
---@field ['IsPlayerInside?'] boolean
---@field params TArray<FParticleSysParam>
---@field RadialVelocity float
---@field DustSize float
---@field ThunderVFXRef UParticleSystem
---@field Scale_XY_FogSheet float
---@field Scale_Z_FogSheet float
---@field ['Fog Plane Rotation'] FRotator
---@field ['Move Z'] float
---@field NewVar_1 float
---@field SandstormSoundAttachedToVFX UAudioComponent
---@field ['Ruins Spawner'] TArray<ARuinSpawner>
local AP_Sandstorm_BP_C = {}

function AP_Sandstorm_BP_C:SelectSandPiles() end
function AP_Sandstorm_BP_C:FogSheetComponent() end
---@param NewParam boolean
AP_Sandstorm_BP_C['Add PostProcess'] = function(self, NewParam) end
function AP_Sandstorm_BP_C:UserConstructionScript() end
function AP_Sandstorm_BP_C:ObjMover__FinishedFunc() end
function AP_Sandstorm_BP_C:ObjMover__UpdateFunc() end
function AP_Sandstorm_BP_C:ReceiveBeginPlay() end
function AP_Sandstorm_BP_C:StormEvent() end
function AP_Sandstorm_BP_C:MoveObj() end
---@param EntryPoint int32
function AP_Sandstorm_BP_C:ExecuteUbergraph_P_Sandstorm_BP(EntryPoint) end


