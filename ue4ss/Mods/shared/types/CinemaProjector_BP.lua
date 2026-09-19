---@meta

---@class ACinemaProjector_BP_C : ACinemaProjector
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AudioFilmLoop UAudioComponent
---@field Wheel2 UStaticMeshComponent
---@field Wheel1 UStaticMeshComponent
---@field BP_LGodRay_ProjectorCinema UChildActorComponent
---@field SpotLight USpotLightComponent
---@field bCountdown boolean
---@field CountdownMovie UMediaSource
---@field CustomMovieName FString
---@field CustomMoviePlayer UFileMediaSource
---@field Wheel1DynamicMaterial UMaterialInstanceDynamic
---@field Wheel2DynamicMaterial UMaterialInstanceDynamic
local ACinemaProjector_BP_C = {}

---@return FName
function ACinemaProjector_BP_C:GetInteractionName() end
---@param bOn boolean
---@param bInstant boolean
function ACinemaProjector_BP_C:ToggleCinemaLights(bOn, bInstant) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACinemaProjector_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACinemaProjector_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACinemaProjector_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
function ACinemaProjector_BP_C:ReceiveBeginPlay() end
function ACinemaProjector_BP_C:RegisterCinemaProjector() end
---@param GameLoaded boolean
function ACinemaProjector_BP_C:UpdateProjectorAfterLoad(GameLoaded) end
---@param PauseEnabled boolean
function ACinemaProjector_BP_C:OnPauseGameChanged(PauseEnabled) end
function ACinemaProjector_BP_C:DEBUG_PlayMovie() end
function ACinemaProjector_BP_C:StartPlayMovie() end
function ACinemaProjector_BP_C:OnEndMovie() end
---@param StartTime float
function ACinemaProjector_BP_C:StartCountdown(StartTime) end
function ACinemaProjector_BP_C:ResetCountdown() end
---@param Pawn APawn
function ACinemaProjector_BP_C:DisableInteractionInfo(Pawn) end
function ACinemaProjector_BP_C:OnLoopChange() end
---@param bInstant boolean
function ACinemaProjector_BP_C:TurnLightsOff(bInstant) end
---@param UpdatedTime int32
function ACinemaProjector_BP_C:OnUpdated(UpdatedTime) end
---@param EntryPoint int32
function ACinemaProjector_BP_C:ExecuteUbergraph_CinemaProjector_BP(EntryPoint) end


