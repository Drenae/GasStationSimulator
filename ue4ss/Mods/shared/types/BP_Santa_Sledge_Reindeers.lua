---@meta

---@class ABP_Santa_Sledge_Reindeers_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NS_SnowSanta UNiagaraComponent
---@field VFX_Template UArrowComponent
---@field StaticMesh UStaticMeshComponent
---@field ChristmasSantaShaker UAudioComponent
---@field ChristmasSantaAmbient UAudioComponent
---@field SantaMover_Alpha_5581CFE94F2B3744FF241B9B01905F69 float
---@field SantaMover__Direction_5581CFE94F2B3744FF241B9B01905F69 ETimelineDirection::Type
---@field SantaMover UTimelineComponent
---@field alpha float
---@field TrackRef APlane_Track_BP_C
---@field SantaStartOffset float
---@field Duration float
---@field ActiveSanta boolean
---@field IsFlying boolean
local ABP_Santa_Sledge_Reindeers_C = {}

function ABP_Santa_Sledge_Reindeers_C:SantaMover__FinishedFunc() end
function ABP_Santa_Sledge_Reindeers_C:SantaMover__UpdateFunc() end
---@param bAppliedSetting boolean
function ABP_Santa_Sledge_Reindeers_C:OnGameplaySettingsApplied(bAppliedSetting) end
---@param UpdatedTime FTimeStruct
function ABP_Santa_Sledge_Reindeers_C:OnGameTimeUpdated(UpdatedTime) end
function ABP_Santa_Sledge_Reindeers_C:ReceiveBeginPlay() end
function ABP_Santa_Sledge_Reindeers_C:StartFlying() end
---@param EntryPoint int32
function ABP_Santa_Sledge_Reindeers_C:ExecuteUbergraph_BP_Santa_Sledge_Reindeers(EntryPoint) end


