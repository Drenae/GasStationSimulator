---@meta

---@class APlayerHeadWaterDetector_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SFX_AMB_Underwater_Cue UAudioComponent
---@field PlayerHeadCollision USphereComponent
---@field OceanPhysics UOceanPhysics_C
---@field UnderwaterAmbient UAudioComponent
local APlayerHeadWaterDetector_C = {}

function APlayerHeadWaterDetector_C:ReceiveBeginPlay() end
function APlayerHeadWaterDetector_C:OnWaterEnter() end
function APlayerHeadWaterDetector_C:OnWaterExit() end
function APlayerHeadWaterDetector_C:ReceiveDestroyed() end
---@param EntryPoint int32
function APlayerHeadWaterDetector_C:ExecuteUbergraph_PlayerHeadWaterDetector(EntryPoint) end


