#ifndef UE4SS_SDK_Crane_BP_HPP
#define UE4SS_SDK_Crane_BP_HPP

class ACrane_BP_C : public ACrane
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06D0 (size: 0x8)
    class UWidgetComponent* BindingsWidgetOpenCrusher;                                // 0x06D8 (size: 0x8)
    class UWidgetComponent* BindingsWidgetActivateMagnet;                             // 0x06E0 (size: 0x8)
    class UWidgetComponent* BindingsWidgetExtendArmLeft;                              // 0x06E8 (size: 0x8)
    class UWidgetComponent* BindingsWidgetRotateArm;                                  // 0x06F0 (size: 0x8)
    class UWidgetComponent* BindingsWidgetExtendArmRight;                             // 0x06F8 (size: 0x8)
    class UWidgetComponent* BindingsWidgetMoveOnRails;                                // 0x0700 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0708 (size: 0x8)
    class UStaticMeshComponent* Cylinder1;                                            // 0x0710 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0718 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0720 (size: 0x8)
    class UStaticMeshComponent* SM_SirenLight;                                        // 0x0728 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0730 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Magnet_Attract_Cue;                       // 0x0738 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_SnapImpact_Cue;                           // 0x0740 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Magnet_Start_Cue;                         // 0x0748 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Magnet_Loop_Cue;                          // 0x0750 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Arm_Extend_Stop_Cue;                      // 0x0758 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Arm_Extend_Loop_Metal_Cue;                // 0x0760 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Arm_Extend_Loop_Cue;                      // 0x0768 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Arm_Move_StopShort_Cue;                   // 0x0770 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Arm_Move_LOOP_Cue;                        // 0x0778 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Arm_Move_Start_Cue;                       // 0x0780 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Arm_Move_Stop_Cue;                        // 0x0788 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Engine_Bass_Cue;                          // 0x0790 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Crane_Engine_Cue;                               // 0x0798 (size: 0x8)
    class UNavModifierComponent* NavBlocker;                                          // 0x07A0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x07A8 (size: 0x8)
    class UCraneCamera* Camera0;                                                      // 0x07B0 (size: 0x8)
    class USpringArmComponent* CameraArm0;                                            // 0x07B8 (size: 0x8)
    class UCraneCamera* Camera2;                                                      // 0x07C0 (size: 0x8)
    class USpringArmComponent* CameraArm2;                                            // 0x07C8 (size: 0x8)
    class UCraneCamera* Camera1;                                                      // 0x07D0 (size: 0x8)
    class USpringArmComponent* CameraArm1;                                            // 0x07D8 (size: 0x8)
    class UParticleSystemComponent* TowyMagnetVFX;                                    // 0x07E0 (size: 0x8)
    class UMagnetArmComponent_BP_C* MagnetArmComponent_BP;                            // 0x07E8 (size: 0x8)
    float CraneEngine_VolumeTime_Mod_NewTrack_0_CEBE4A224C59D555A386B280FEACD3FC;     // 0x07F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CraneEngine_VolumeTime_Mod__Direction_CEBE4A224C59D555A386B280FEACD3FC; // 0x07F4 (size: 0x1)
    class UTimelineComponent* CraneEngine_VolumeTime_Mod;                             // 0x07F8 (size: 0x8)
    float Timeline_3_Pitch_11975C5B4269FD189DA112B32F1B51CC;                          // 0x0800 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_11975C5B4269FD189DA112B32F1B51CC; // 0x0804 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0808 (size: 0x8)
    float Timeline_2_Pitch_500AD14A4851BC512B01CB9E594C2F86;                          // 0x0810 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_500AD14A4851BC512B01CB9E594C2F86; // 0x0814 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0818 (size: 0x8)
    float Timeline_1_Pitch_Arm_Movement_797B81D94F4F17B39AF39CB68B240D16;             // 0x0820 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_797B81D94F4F17B39AF39CB68B240D16; // 0x0824 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0828 (size: 0x8)
    float Timeline_0_Volume_C71C6E7049B1D8596DD433B24175D99E;                         // 0x0830 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C71C6E7049B1D8596DD433B24175D99E; // 0x0834 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0838 (size: 0x8)
    float CraneEnginePitch_Long_Multiplier_A2556A6645D3588411BCBBB3063F0E42;          // 0x0840 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CraneEnginePitch_Long__Direction_A2556A6645D3588411BCBBB3063F0E42; // 0x0844 (size: 0x1)
    class UTimelineComponent* CraneEnginePitch_Long;                                  // 0x0848 (size: 0x8)
    float CraneEnginePitch_Movement_Pitch_Movement_DB3999D44678E9CC5CF9F7B6B8A8D01E;  // 0x0850 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CraneEnginePitch_Movement__Direction_DB3999D44678E9CC5CF9F7B6B8A8D01E; // 0x0854 (size: 0x1)
    class UTimelineComponent* CraneEnginePitch_Movement;                              // 0x0858 (size: 0x8)
    float CurrentPhysicsTime;                                                         // 0x0860 (size: 0x4)
    bool bPhysicsTimer;                                                               // 0x0864 (size: 0x1)
    FName In Bone Name;                                                               // 0x0868 (size: 0x8)
    FName In Bone Name_0;                                                             // 0x0870 (size: 0x8)
    class UMaterialInstanceDynamic* DecalMat;                                         // 0x0878 (size: 0x8)
    FVector DefaultDecalLocation;                                                     // 0x0880 (size: 0xC)
    class USceneComponent* SFXParent;                                                 // 0x0890 (size: 0x8)
    FVector DefaultSpotLightLocation;                                                 // 0x0898 (size: 0xC)
    bool PreviousMoveSweepSuccess;                                                    // 0x08A4 (size: 0x1)
    int32 MoveOnRailsInput_SFX;                                                       // 0x08A8 (size: 0x4)
    int32 MoveArmHorizontalInput_SFX;                                                 // 0x08AC (size: 0x4)
    int32 ExtendArmInput_SFX;                                                         // 0x08B0 (size: 0x4)
    int32 SFX_MoveArm_Input;                                                          // 0x08B4 (size: 0x4)
    int32 SFX_ExtendArm_Input;                                                        // 0x08B8 (size: 0x4)
    class UCraneCamera* CurrentCamera;                                                // 0x08C0 (size: 0x8)
    bool bHasCustomTimeDilation;                                                      // 0x08C8 (size: 0x1)

    FName GetInteractionName();
    void Move();
    void Trigger Physics(float DeltaTime);
    void UserConstructionScript();
    void CraneEnginePitch_Movement__FinishedFunc();
    void CraneEnginePitch_Movement__UpdateFunc();
    void CraneEnginePitch_Long__FinishedFunc();
    void CraneEnginePitch_Long__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void CraneEngine_VolumeTime_Mod__FinishedFunc();
    void CraneEngine_VolumeTime_Mod__UpdateFunc();
    void OnSnappedToMagnet(class AActor* SnappedActor);
    void OnDetachedFromMagnet(class AActor* DetachedActor);
    void OnCraneEntered(bool EnteredByPlayer);
    void OnCraneExited(bool ExitedByPlayer);
    void OnCameraChangedEvent(class UCraneCamera* NewCamera);
    void DisplayCraneReservedBySeanError();
    void OnInputAxisMoveArmVertical(float Value, bool LimitReached);
    void OnInputAxisMoveArmHorizontal(float Value, bool LimitReached);
    void OnInputAxisExtendArm(float Value, bool LimitReached);
    void OnInputAxisLowerMagnet(float Value, bool LimitReached);
    void OnEventMaxMoveArmVertical(bool bMaxPlatformMove);
    void OnEventMaxExtendArm(bool bMaxExtend);
    void OnInputMoveOnRails(float Value, bool LimitReached);
    void OnEventHitRailsEnd(bool MaxRight);
    void OnLoadGameProgressUpdated_Event_0(const float CurrentProgress, const float MaxProgress, const FName LoadedMap, const bool LoadGameCompleted);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void DEBUG_UnlockCrane();
    void RotateBindingWidgets();
    void SetTooltipsVisiblityEvent(bool NewVisibility);
    void PreventSlomo();
    void ExecuteUbergraph_Crane_BP(int32 EntryPoint);
}; // Size: 0x8C9

#endif
