---@meta

---@class ASandstormSpawner_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field Duration float
---@field ObjStartOffset float
---@field SandstormPath ASandstormPath_C
---@field ThunderEnable boolean
---@field ThunderDelay float
---@field SandStormSimulationSpeed float
---@field SpawnDensity float
---@field RadialVelocity float
---@field DustSize float
---@field P_Sandstorm AP_Sandstorm_BP_C
---@field ActiveSplineMovement boolean
---@field ['PP Scale'] float
---@field FadeSoundtrack USoundMix
local ASandstormSpawner_BP_C = {}

function ASandstormSpawner_BP_C:ReceiveBeginPlay() end
---@param Enable boolean
function ASandstormSpawner_BP_C:EnableSandstorm(Enable) end
function ASandstormSpawner_BP_C:ReceiveDestroyed() end
---@param EntryPoint int32
function ASandstormSpawner_BP_C:ExecuteUbergraph_SandstormSpawner_BP(EntryPoint) end


