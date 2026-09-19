---@meta

---@class ACrane_BP_C : ACrane
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BindingsWidgetOpenCrusher UWidgetComponent
---@field BindingsWidgetActivateMagnet UWidgetComponent
---@field BindingsWidgetExtendArmLeft UWidgetComponent
---@field BindingsWidgetRotateArm UWidgetComponent
---@field BindingsWidgetExtendArmRight UWidgetComponent
---@field BindingsWidgetMoveOnRails UWidgetComponent
---@field Plane UStaticMeshComponent
---@field Cylinder1 UStaticMeshComponent
---@field Cylinder UStaticMeshComponent
---@field PointLight UPointLightComponent
---@field SM_SirenLight UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field SFX_DLC_JY_Crane_Magnet_Attract_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_SnapImpact_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Magnet_Start_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Magnet_Loop_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Arm_Extend_Stop_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Arm_Extend_Loop_Metal_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Arm_Extend_Loop_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Arm_Move_StopShort_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Arm_Move_LOOP_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Arm_Move_Start_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Arm_Move_Stop_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Engine_Bass_Cue UAudioComponent
---@field SFX_DLC_JY_Crane_Engine_Cue UAudioComponent
---@field NavBlocker UNavModifierComponent
---@field Decal UDecalComponent
---@field Camera0 UCraneCamera
---@field CameraArm0 USpringArmComponent
---@field Camera2 UCraneCamera
---@field CameraArm2 USpringArmComponent
---@field Camera1 UCraneCamera
---@field CameraArm1 USpringArmComponent
---@field TowyMagnetVFX UParticleSystemComponent
---@field MagnetArmComponent_BP UMagnetArmComponent_BP_C
---@field CraneEngine_VolumeTime_Mod_NewTrack_0_CEBE4A224C59D555A386B280FEACD3FC float
---@field CraneEngine_VolumeTime_Mod__Direction_CEBE4A224C59D555A386B280FEACD3FC ETimelineDirection::Type
---@field CraneEngine_VolumeTime_Mod UTimelineComponent
---@field Timeline_3_Pitch_11975C5B4269FD189DA112B32F1B51CC float
---@field Timeline_3__Direction_11975C5B4269FD189DA112B32F1B51CC ETimelineDirection::Type
---@field Timeline_3 UTimelineComponent
---@field Timeline_2_Pitch_500AD14A4851BC512B01CB9E594C2F86 float
---@field Timeline_2__Direction_500AD14A4851BC512B01CB9E594C2F86 ETimelineDirection::Type
---@field Timeline_2 UTimelineComponent
---@field Timeline_1_Pitch_Arm_Movement_797B81D94F4F17B39AF39CB68B240D16 float
---@field Timeline_1__Direction_797B81D94F4F17B39AF39CB68B240D16 ETimelineDirection::Type
---@field Timeline_1 UTimelineComponent
---@field Timeline_0_Volume_C71C6E7049B1D8596DD433B24175D99E float
---@field Timeline_0__Direction_C71C6E7049B1D8596DD433B24175D99E ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field CraneEnginePitch_Long_Multiplier_A2556A6645D3588411BCBBB3063F0E42 float
---@field CraneEnginePitch_Long__Direction_A2556A6645D3588411BCBBB3063F0E42 ETimelineDirection::Type
---@field CraneEnginePitch_Long UTimelineComponent
---@field CraneEnginePitch_Movement_Pitch_Movement_DB3999D44678E9CC5CF9F7B6B8A8D01E float
---@field CraneEnginePitch_Movement__Direction_DB3999D44678E9CC5CF9F7B6B8A8D01E ETimelineDirection::Type
---@field CraneEnginePitch_Movement UTimelineComponent
---@field CurrentPhysicsTime float
---@field bPhysicsTimer boolean
---@field ['In Bone Name'] FName
---@field ['In Bone Name_0'] FName
---@field DecalMat UMaterialInstanceDynamic
---@field DefaultDecalLocation FVector
---@field SFXParent USceneComponent
---@field DefaultSpotLightLocation FVector
---@field PreviousMoveSweepSuccess boolean
---@field MoveOnRailsInput_SFX int32
---@field MoveArmHorizontalInput_SFX int32
---@field ExtendArmInput_SFX int32
---@field SFX_MoveArm_Input int32
---@field SFX_ExtendArm_Input int32
---@field CurrentCamera UCraneCamera
---@field bHasCustomTimeDilation boolean
local ACrane_BP_C = {}

---@return FName
function ACrane_BP_C:GetInteractionName() end
function ACrane_BP_C:Move() end
---@param DeltaTime float
ACrane_BP_C['Trigger Physics'] = function(self, DeltaTime) end
function ACrane_BP_C:UserConstructionScript() end
function ACrane_BP_C:CraneEnginePitch_Movement__FinishedFunc() end
function ACrane_BP_C:CraneEnginePitch_Movement__UpdateFunc() end
function ACrane_BP_C:CraneEnginePitch_Long__FinishedFunc() end
function ACrane_BP_C:CraneEnginePitch_Long__UpdateFunc() end
function ACrane_BP_C:Timeline_0__FinishedFunc() end
function ACrane_BP_C:Timeline_0__UpdateFunc() end
function ACrane_BP_C:Timeline_1__FinishedFunc() end
function ACrane_BP_C:Timeline_1__UpdateFunc() end
function ACrane_BP_C:Timeline_2__FinishedFunc() end
function ACrane_BP_C:Timeline_2__UpdateFunc() end
function ACrane_BP_C:Timeline_3__FinishedFunc() end
function ACrane_BP_C:Timeline_3__UpdateFunc() end
function ACrane_BP_C:CraneEngine_VolumeTime_Mod__FinishedFunc() end
function ACrane_BP_C:CraneEngine_VolumeTime_Mod__UpdateFunc() end
---@param SnappedActor AActor
function ACrane_BP_C:OnSnappedToMagnet(SnappedActor) end
---@param DetachedActor AActor
function ACrane_BP_C:OnDetachedFromMagnet(DetachedActor) end
---@param EnteredByPlayer boolean
function ACrane_BP_C:OnCraneEntered(EnteredByPlayer) end
---@param ExitedByPlayer boolean
function ACrane_BP_C:OnCraneExited(ExitedByPlayer) end
---@param NewCamera UCraneCamera
function ACrane_BP_C:OnCameraChangedEvent(NewCamera) end
function ACrane_BP_C:DisplayCraneReservedBySeanError() end
---@param Value float
---@param LimitReached boolean
function ACrane_BP_C:OnInputAxisMoveArmVertical(Value, LimitReached) end
---@param Value float
---@param LimitReached boolean
function ACrane_BP_C:OnInputAxisMoveArmHorizontal(Value, LimitReached) end
---@param Value float
---@param LimitReached boolean
function ACrane_BP_C:OnInputAxisExtendArm(Value, LimitReached) end
---@param Value float
---@param LimitReached boolean
function ACrane_BP_C:OnInputAxisLowerMagnet(Value, LimitReached) end
---@param bMaxPlatformMove boolean
function ACrane_BP_C:OnEventMaxMoveArmVertical(bMaxPlatformMove) end
---@param bMaxExtend boolean
function ACrane_BP_C:OnEventMaxExtendArm(bMaxExtend) end
---@param Value float
---@param LimitReached boolean
function ACrane_BP_C:OnInputMoveOnRails(Value, LimitReached) end
---@param MaxRight boolean
function ACrane_BP_C:OnEventHitRailsEnd(MaxRight) end
---@param CurrentProgress float
---@param MaxProgress float
---@param LoadedMap FName
---@param LoadGameCompleted boolean
function ACrane_BP_C:OnLoadGameProgressUpdated_Event_0(CurrentProgress, MaxProgress, LoadedMap, LoadGameCompleted) end
---@param DeltaSeconds float
function ACrane_BP_C:ReceiveTick(DeltaSeconds) end
function ACrane_BP_C:ReceiveBeginPlay() end
function ACrane_BP_C:DEBUG_UnlockCrane() end
function ACrane_BP_C:RotateBindingWidgets() end
---@param NewVisibility boolean
function ACrane_BP_C:SetTooltipsVisiblityEvent(NewVisibility) end
function ACrane_BP_C:PreventSlomo() end
---@param EntryPoint int32
function ACrane_BP_C:ExecuteUbergraph_Crane_BP(EntryPoint) end


