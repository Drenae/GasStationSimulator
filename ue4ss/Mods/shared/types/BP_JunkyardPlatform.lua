---@meta

---@class ABP_JunkyardPlatform_C : AJunkyardPlatform
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SFX_DLC_JY_Cust_Finish_Sparks_03_Cue UAudioComponent
---@field SFX_DLC_JY_Cust_Finish_SparksMov_01_Cue UAudioComponent
---@field SFX_DLC_JY_Cars_02_Default_Cue UAudioComponent
---@field SFX_DLC_JY_Cust_Finish_Sparks_02_Cue UAudioComponent
---@field SFX_DLC_JY_Cust_Finish_Sparks_01_Cue UAudioComponent
---@field SFX_DLC_JY_Cars_01_Default_Cue UAudioComponent
---@field Smoker_01 UStaticMeshComponent
---@field Smoker_02 UStaticMeshComponent
---@field Smoker_03 UStaticMeshComponent
---@field Smoker_04 UStaticMeshComponent
---@field SmokeEffectsScene USceneComponent
---@field Plane2 UStaticMeshComponent
---@field Plane1 UStaticMeshComponent
---@field Plane UStaticMeshComponent
---@field SFX_DLC_JY_Cars_03_Default_Cue UAudioComponent
---@field NS_GrinderSparksCircular UNiagaraComponent
---@field NS_GrinderSparks1 UNiagaraComponent
---@field MultiToolFinish UActorSequenceComponent
---@field NS_GrinderSparks UNiagaraComponent
---@field Scene1 USceneComponent
---@field MultiToolStart UActorSequenceComponent
---@field SpotLight6 USpotLightComponent
---@field SM_FloodLightB_Light3 UStaticMeshComponent
---@field SpotLight5 USpotLightComponent
---@field SM_FloodLightB_Light2 UStaticMeshComponent
---@field SpotLight4 USpotLightComponent
---@field SM_FloodLightB_Light1 UStaticMeshComponent
---@field SpotLight3 USpotLightComponent
---@field Scene USceneComponent
---@field SM_FloodLightB_Light UStaticMeshComponent
---@field SM_Roof_Light_Rig UStaticMeshComponent
---@field NS_Smoker3 UNiagaraComponent
---@field NS_Smoker2 UNiagaraComponent
---@field NS_Smoker1 UNiagaraComponent
---@field NS_Smoker UNiagaraComponent
---@field Customization_04 USpotLightComponent
---@field Customization_03 USpotLightComponent
---@field Customization_02 USpotLightComponent
---@field Customization_01 USpotLightComponent
---@field SM_AssembleSign UStaticMeshComponent
---@field SpotLight2 USpotLightComponent
---@field SpotLight1 USpotLightComponent
---@field PrimaryCameraPosition UArrowComponent
---@field SecondaryCameraPosition UArrowComponent
---@field SpotLight USpotLightComponent
---@field Base UStaticMeshComponent
---@field PlatformPanelCamera UChildActorComponent
---@field BP_JunkyardPlatformPanel UChildActorComponent
---@field Cylinder UStaticMeshComponent
---@field RotateTimeline_NewTrack_0_44D7082F47BE28DA793B7391F1403EBE float
---@field RotateTimeline__Direction_44D7082F47BE28DA793B7391F1403EBE ETimelineDirection::Type
---@field RotateTimeline UTimelineComponent
---@field RotateValue float
---@field PlatformCamera AActor
---@field DefaultWreckPlacementPointRotation FRotator
---@field CurrentCameraAlpha float
---@field AssembleSignMaterial UMaterialInstanceDynamic
---@field OnProjectCreated FBP_JunkyardPlatform_COnProjectCreated
local ABP_JunkyardPlatform_C = {}

function ABP_JunkyardPlatform_C:SmokeActivation() end
function ABP_JunkyardPlatform_C:OnPlatformWithCarLoaded() end
---@param Index int32
function ABP_JunkyardPlatform_C:TogglePlatformSign(Index) end
---@param bOn boolean
function ABP_JunkyardPlatform_C:ToggleMultitoolLights(bOn) end
function ABP_JunkyardPlatform_C:OnAttachedCarProjectFInished() end
---@param bOn boolean
function ABP_JunkyardPlatform_C:TogglePlatformLights(bOn) end
---@param TargetRotation float
function ABP_JunkyardPlatform_C:RotatePlatformToValue(TargetRotation) end
---@param bRotateUp boolean
---@param bRotateDown boolean
function ABP_JunkyardPlatform_C:TryRotateCamera(bRotateUp, bRotateDown) end
---@param bMoveToExhibition boolean
function ABP_JunkyardPlatform_C:OnPlatformPanelClosed(bMoveToExhibition) end
---@param bRotateRight boolean
---@param bRotateLeft boolean
function ABP_JunkyardPlatform_C:TryRotatePlatform(bRotateRight, bRotateLeft) end
function ABP_JunkyardPlatform_C:RotateTimeline__FinishedFunc() end
function ABP_JunkyardPlatform_C:RotateTimeline__UpdateFunc() end
function ABP_JunkyardPlatform_C:ReceiveBeginPlay() end
---@param LoadedZRotation float
function ABP_JunkyardPlatform_C:LoadPlatformRotation(LoadedZRotation) end
---@param NewRotation float
function ABP_JunkyardPlatform_C:RotateOverTime(NewRotation) end
---@param Wreck AActor
function ABP_JunkyardPlatform_C:OnWreckTaken_Event(Wreck) end
function ABP_JunkyardPlatform_C:DEBUG_SkipTutorial() end
function ABP_JunkyardPlatform_C:DEBUG_UnlockCustomization() end
---@param NewUnlockableGameplayStuffState FUnlockableGameplayStuffState
function ABP_JunkyardPlatform_C:OnGameplayStuffUnlocked(NewUnlockableGameplayStuffState) end
function ABP_JunkyardPlatform_C:ReceiveDestroyed() end
---@param Component UActorComponent
---@param bReset boolean
function ABP_JunkyardPlatform_C:OnComponentActivated_Event_0(Component, bReset) end
---@param Component UActorComponent
---@param bReset boolean
function ABP_JunkyardPlatform_C:OnComponentActivated_Event_1(Component, bReset) end
---@param Component UActorComponent
---@param bReset boolean
function ABP_JunkyardPlatform_C:OnComponentActivated_Event_2(Component, bReset) end
---@param Component UActorComponent
function ABP_JunkyardPlatform_C:OnComponentDeactivated_Event_0(Component) end
---@param Component UActorComponent
function ABP_JunkyardPlatform_C:OnComponentDeactivated_Event_1(Component) end
---@param Component UActorComponent
function ABP_JunkyardPlatform_C:OnComponentDeactivated_Event_2(Component) end
---@param DLCName EDLCName
---@param bActivated boolean
function ABP_JunkyardPlatform_C:OnJunkyradActivated(DLCName, bActivated) end
---@param EntryPoint int32
function ABP_JunkyardPlatform_C:ExecuteUbergraph_BP_JunkyardPlatform(EntryPoint) end
function ABP_JunkyardPlatform_C:OnProjectCreated__DelegateSignature() end


