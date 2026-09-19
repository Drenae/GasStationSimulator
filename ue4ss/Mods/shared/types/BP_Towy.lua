---@meta

---@class ABP_Towy_C : ATowy
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NewVehicleMovementObstacle UBoxComponent
---@field MagnetArmComponent_BP UMagnetArmComponent_BP_C
---@field VehicleOverlapComponent UBoxComponent
---@field TowyMagnetVFX UParticleSystemComponent
---@field SyrenLight USpotLightComponent
---@field Syren UStaticMeshComponent
---@field Headlights USpotLightComponent
---@field AdditionalLights1 UStaticMeshComponent
---@field SFX_Towy_MagnetModeOn_Cue UAudioComponent
---@field SFX_Towy_MagnetModeOff_Cue UAudioComponent
---@field SFX_Towy_Magnet_Start_Cue UAudioComponent
---@field SFX_Towy_Magnet_Attract_Cue UAudioComponent
---@field DiggerSteamRelease_Cue UAudioComponent
---@field TurboSFX UAudioComponent
---@field TowyOverheat_Cue UAudioComponent
---@field SFX_Towy_SnapImpact_Cue UAudioComponent
---@field SFX_Towy_Magnet_Loop_Cue UAudioComponent
---@field SFX_Towy_Arm_UpDown_start2_Cue UAudioComponent
---@field SFX_Towy_Engine_Stop_Cue UAudioComponent
---@field SFX_Towy_Arm_Rope_End_Cue UAudioComponent
---@field SFX_Towy_Arm_Rope_Loop_Cue UAudioComponent
---@field SFX_Towy_Arm_Rope_Start_Cue UAudioComponent
---@field SFX_Towy_Engine_Start_Cue UAudioComponent
---@field SFX_Towy_Engine_Cue UAudioComponent
---@field SFX_Towy_Arm_UpDown_loop2_Cue UAudioComponent
---@field SFX_Towy_Arm_UpDown_end2_Cue UAudioComponent
---@field SFX_Towy_Arm_extend_end_Cue UAudioComponent
---@field SFX_Towy_Arm_extend_Start_Cue UAudioComponent
---@field SFX_Towy_Arm_extend_loop_Cue UAudioComponent
---@field PlatformEnd UAudioComponent
---@field PlatformStart UAudioComponent
---@field PlatformLoop UAudioComponent
---@field Timeline_4_NewHeatValue_0F61D4EE485C0997AB224495D66222BD float
---@field Timeline_4__Direction_0F61D4EE485C0997AB224495D66222BD ETimelineDirection::Type
---@field Timeline_4 UTimelineComponent
---@field Timeline_3_NewHeatValue_4E9B76D04775BB3A7284E2B68DFB7106 float
---@field Timeline_3__Direction_4E9B76D04775BB3A7284E2B68DFB7106 ETimelineDirection::Type
---@field Timeline_3 UTimelineComponent
---@field Timeline_2_NewHeatValue_AF1998E2449B318EBCD09981E528E1DF float
---@field Timeline_2__Direction_AF1998E2449B318EBCD09981E528E1DF ETimelineDirection::Type
---@field Timeline_2 UTimelineComponent
---@field PlatformLoopPitch_PitchValue_60CEA7F848BE3D22A049749CA0D36D4C float
---@field PlatformLoopPitch__Direction_60CEA7F848BE3D22A049749CA0D36D4C ETimelineDirection::Type
---@field PlatformLoopPitch UTimelineComponent
---@field TowyREF UWBP_Towy_C
---@field PlatformMovement float
---@field SfxRetriggerVariable int32
---@field SfxRetriggerVariable2 int32
---@field PitchMod float
---@field ArmMovement float
---@field ArmUpDown float
---@field ArmAllSFX TArray<UAudioComponent>
---@field RopeMovement float
---@field ['Start Closed'] boolean
---@field DMI_ExhaustMaterial UMaterialInstanceDynamic
---@field ['Overheat Limit'] float
---@field BlackColor FLinearColor
---@field WhiteColor FLinearColor
---@field SFXPitchTimer FTimerHandle
---@field PitchModTimer float
---@field SFXPitchTimer2 FTimerHandle
---@field SFXPitchTimer3 FTimerHandle
---@field DMI_Headlights UMaterialInstanceDynamic
---@field DMISyren UMaterialInstanceDynamic
---@field TutorialShown boolean
---@field CoolEngineOnUnpossesTimer FTimerHandle
local ABP_Towy_C = {}

---@param Enable boolean
function ABP_Towy_C:ToggleMagnetsOverlaps(Enable) end
---@return FName
function ABP_Towy_C:GetInteractionName() end
function ABP_Towy_C:TurnOff_ActualLights() end
function ABP_Towy_C:TurnOn_AlctualLights() end
function ABP_Towy_C:PrepMaterialForHeadlighs() end
function ABP_Towy_C:NewFunction_0() end
ABP_Towy_C['Cooling Check'] = function(self, ) end
ABP_Towy_C['Overheat VFX'] = function(self, ) end
function ABP_Towy_C:Exhaust_PrepMats() end
ABP_Towy_C['Check If SFX Loop Is Playing and Modulate Global Pitch'] = function(self, ) end
function ABP_Towy_C:PlatformLoopPitch__FinishedFunc() end
function ABP_Towy_C:PlatformLoopPitch__UpdateFunc() end
function ABP_Towy_C:Timeline_4__FinishedFunc() end
function ABP_Towy_C:Timeline_4__UpdateFunc() end
---@param NotifyName FName
function ABP_Towy_C:OnNotifyEnd_F709F65F4FF871BAD6E763B6FD6BDF80(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnNotifyBegin_F709F65F4FF871BAD6E763B6FD6BDF80(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnInterrupted_F709F65F4FF871BAD6E763B6FD6BDF80(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnBlendOut_F709F65F4FF871BAD6E763B6FD6BDF80(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnCompleted_F709F65F4FF871BAD6E763B6FD6BDF80(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnNotifyEnd_2D587D0E4F7959CA4D8A45A76411DE53(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnNotifyBegin_2D587D0E4F7959CA4D8A45A76411DE53(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnInterrupted_2D587D0E4F7959CA4D8A45A76411DE53(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnBlendOut_2D587D0E4F7959CA4D8A45A76411DE53(NotifyName) end
---@param NotifyName FName
function ABP_Towy_C:OnCompleted_2D587D0E4F7959CA4D8A45A76411DE53(NotifyName) end
---@param Key FKey
function ABP_Towy_C:InpActEvt_Zero_K2Node_InputKeyEvent_0(Key) end
function ABP_Towy_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABP_Towy_C:ReceiveTick(DeltaSeconds) end
---@param bPressed boolean
function ABP_Towy_C:InputActionChangeMode(bPressed) end
---@param OldController AController
function ABP_Towy_C:ReceiveUnpossessed(OldController) end
---@param NewController AController
function ABP_Towy_C:ReceivePossessed(NewController) end
function ABP_Towy_C:EventRetriggerableVolumeStart() end
function ABP_Towy_C:EventRetriggerableVolumeEnd() end
function ABP_Towy_C:EngineCrash() end
function ABP_Towy_C:EngineColor() end
---@param bPressed boolean
function ABP_Towy_C:InputActionSecondary(bPressed) end
---@param bPressed boolean
function ABP_Towy_C:InputActionInteraction(bPressed) end
function ABP_Towy_C:BoostBlueprintEvent() end
function ABP_Towy_C:StopBoostOnEngineCrash() end
function ABP_Towy_C:SoundPitchDown() end
function ABP_Towy_C:EnginePitchAdd() end
function ABP_Towy_C:EnginePitchDown() end
function ABP_Towy_C:TutorialCreated() end
---@param Value float
---@param LimitReached boolean
function ABP_Towy_C:OnInputAxisExtendArm(Value, LimitReached) end
---@param Value float
---@param LimitReached boolean
function ABP_Towy_C:OnInputAxisLowerMagnet(Value, LimitReached) end
---@param Value float
---@param LimitReached boolean
function ABP_Towy_C:OnInputAxisMoveArmHorizontal(Value, LimitReached) end
---@param Value float
---@param LimitReached boolean
function ABP_Towy_C:OnInputAxisMoveArmVertical(Value, LimitReached) end
---@param bMaxMagnetDown boolean
function ABP_Towy_C:OnEventMaxMagnetDown(bMaxMagnetDown) end
---@param bMaxPlatformMove boolean
function ABP_Towy_C:OnEventMaxMoveArmVertical(bMaxPlatformMove) end
---@param bMaxExtend boolean
function ABP_Towy_C:OnEventMaxExtendArm(bMaxExtend) end
---@param bMaxPlatformElevate boolean
function ABP_Towy_C:OnEventMaxMoveArmHorizontal(bMaxPlatformElevate) end
function ABP_Towy_C:CoolEngineOnUnposses() end
---@param EntryPoint int32
function ABP_Towy_C:ExecuteUbergraph_BP_Towy(EntryPoint) end


