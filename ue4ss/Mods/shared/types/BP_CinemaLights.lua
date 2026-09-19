---@meta

---@class ABP_CinemaLights_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight USpotLightComponent
---@field SM_StreetLamp_03 UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field LightsTimeline_NewTrack_0_3C18758D4608D0153A14CC9D8D9478B0 float
---@field LightsTimeline__Direction_3C18758D4608D0153A14CC9D8D9478B0 ETimelineDirection::Type
---@field LightsTimeline UTimelineComponent
---@field Lamp_DMI UMaterialInstanceDynamic
local ABP_CinemaLights_C = {}

function ABP_CinemaLights_C:LightsTimeline__FinishedFunc() end
function ABP_CinemaLights_C:LightsTimeline__UpdateFunc() end
function ABP_CinemaLights_C:ReceiveBeginPlay() end
---@param bOn boolean
function ABP_CinemaLights_C:ToggleLightsOverTime(bOn) end
function ABP_CinemaLights_C:ToggleLightsDebug() end
function ABP_CinemaLights_C:RegisterCinemaLight() end
---@param bOn boolean
function ABP_CinemaLights_C:ToggleLightsInstant(bOn) end
---@param EntryPoint int32
function ABP_CinemaLights_C:ExecuteUbergraph_BP_CinemaLights(EntryPoint) end


