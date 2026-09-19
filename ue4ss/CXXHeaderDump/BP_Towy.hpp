#ifndef UE4SS_SDK_BP_Towy_HPP
#define UE4SS_SDK_BP_Towy_HPP

class ABP_Towy_C : public ATowy
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06F8 (size: 0x8)
    class UBoxComponent* NewVehicleMovementObstacle;                                  // 0x0700 (size: 0x8)
    class UMagnetArmComponent_BP_C* MagnetArmComponent_BP;                            // 0x0708 (size: 0x8)
    class UBoxComponent* VehicleOverlapComponent;                                     // 0x0710 (size: 0x8)
    class UParticleSystemComponent* TowyMagnetVFX;                                    // 0x0718 (size: 0x8)
    class USpotLightComponent* SyrenLight;                                            // 0x0720 (size: 0x8)
    class UStaticMeshComponent* Syren;                                                // 0x0728 (size: 0x8)
    class USpotLightComponent* Headlights;                                            // 0x0730 (size: 0x8)
    class UStaticMeshComponent* AdditionalLights1;                                    // 0x0738 (size: 0x8)
    class UAudioComponent* SFX_Towy_MagnetModeOn_Cue;                                 // 0x0740 (size: 0x8)
    class UAudioComponent* SFX_Towy_MagnetModeOff_Cue;                                // 0x0748 (size: 0x8)
    class UAudioComponent* SFX_Towy_Magnet_Start_Cue;                                 // 0x0750 (size: 0x8)
    class UAudioComponent* SFX_Towy_Magnet_Attract_Cue;                               // 0x0758 (size: 0x8)
    class UAudioComponent* DiggerSteamRelease_Cue;                                    // 0x0760 (size: 0x8)
    class UAudioComponent* TurboSFX;                                                  // 0x0768 (size: 0x8)
    class UAudioComponent* TowyOverheat_Cue;                                          // 0x0770 (size: 0x8)
    class UAudioComponent* SFX_Towy_SnapImpact_Cue;                                   // 0x0778 (size: 0x8)
    class UAudioComponent* SFX_Towy_Magnet_Loop_Cue;                                  // 0x0780 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_UpDown_start2_Cue;                            // 0x0788 (size: 0x8)
    class UAudioComponent* SFX_Towy_Engine_Stop_Cue;                                  // 0x0790 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_Rope_End_Cue;                                 // 0x0798 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_Rope_Loop_Cue;                                // 0x07A0 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_Rope_Start_Cue;                               // 0x07A8 (size: 0x8)
    class UAudioComponent* SFX_Towy_Engine_Start_Cue;                                 // 0x07B0 (size: 0x8)
    class UAudioComponent* SFX_Towy_Engine_Cue;                                       // 0x07B8 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_UpDown_loop2_Cue;                             // 0x07C0 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_UpDown_end2_Cue;                              // 0x07C8 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_extend_end_Cue;                               // 0x07D0 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_extend_Start_Cue;                             // 0x07D8 (size: 0x8)
    class UAudioComponent* SFX_Towy_Arm_extend_loop_Cue;                              // 0x07E0 (size: 0x8)
    class UAudioComponent* PlatformEnd;                                               // 0x07E8 (size: 0x8)
    class UAudioComponent* PlatformStart;                                             // 0x07F0 (size: 0x8)
    class UAudioComponent* PlatformLoop;                                              // 0x07F8 (size: 0x8)
    float Timeline_4_NewHeatValue_0F61D4EE485C0997AB224495D66222BD;                   // 0x0800 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_4__Direction_0F61D4EE485C0997AB224495D66222BD; // 0x0804 (size: 0x1)
    class UTimelineComponent* Timeline_4;                                             // 0x0808 (size: 0x8)
    float Timeline_3_NewHeatValue_4E9B76D04775BB3A7284E2B68DFB7106;                   // 0x0810 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_4E9B76D04775BB3A7284E2B68DFB7106; // 0x0814 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0818 (size: 0x8)
    float Timeline_2_NewHeatValue_AF1998E2449B318EBCD09981E528E1DF;                   // 0x0820 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_AF1998E2449B318EBCD09981E528E1DF; // 0x0824 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0828 (size: 0x8)
    float PlatformLoopPitch_PitchValue_60CEA7F848BE3D22A049749CA0D36D4C;              // 0x0830 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PlatformLoopPitch__Direction_60CEA7F848BE3D22A049749CA0D36D4C; // 0x0834 (size: 0x1)
    class UTimelineComponent* PlatformLoopPitch;                                      // 0x0838 (size: 0x8)
    class UWBP_Towy_C* TowyREF;                                                       // 0x0840 (size: 0x8)
    float PlatformMovement;                                                           // 0x0848 (size: 0x4)
    int32 SfxRetriggerVariable;                                                       // 0x084C (size: 0x4)
    int32 SfxRetriggerVariable2;                                                      // 0x0850 (size: 0x4)
    float PitchMod;                                                                   // 0x0854 (size: 0x4)
    float ArmMovement;                                                                // 0x0858 (size: 0x4)
    float ArmUpDown;                                                                  // 0x085C (size: 0x4)
    TArray<UAudioComponent*> ArmAllSFX;                                               // 0x0860 (size: 0x10)
    float RopeMovement;                                                               // 0x0870 (size: 0x4)
    bool Start Closed;                                                                // 0x0874 (size: 0x1)
    class UMaterialInstanceDynamic* DMI_ExhaustMaterial;                              // 0x0878 (size: 0x8)
    float Overheat Limit;                                                             // 0x0880 (size: 0x4)
    FLinearColor BlackColor;                                                          // 0x0884 (size: 0x10)
    FLinearColor WhiteColor;                                                          // 0x0894 (size: 0x10)
    FTimerHandle SFXPitchTimer;                                                       // 0x08A8 (size: 0x8)
    float PitchModTimer;                                                              // 0x08B0 (size: 0x4)
    FTimerHandle SFXPitchTimer2;                                                      // 0x08B8 (size: 0x8)
    FTimerHandle SFXPitchTimer3;                                                      // 0x08C0 (size: 0x8)
    class UMaterialInstanceDynamic* DMI_Headlights;                                   // 0x08C8 (size: 0x8)
    class UMaterialInstanceDynamic* DMISyren;                                         // 0x08D0 (size: 0x8)
    bool TutorialShown;                                                               // 0x08D8 (size: 0x1)
    FTimerHandle CoolEngineOnUnpossesTimer;                                           // 0x08E0 (size: 0x8)

    void ToggleMagnetsOverlaps(bool Enable);
    FName GetInteractionName();
    void TurnOff_ActualLights();
    void TurnOn_AlctualLights();
    void PrepMaterialForHeadlighs();
    void NewFunction_0();
    void Cooling Check();
    void Overheat VFX();
    void Exhaust_PrepMats();
    void Check If SFX Loop Is Playing and Modulate Global Pitch();
    void PlatformLoopPitch__FinishedFunc();
    void PlatformLoopPitch__UpdateFunc();
    void Timeline_4__FinishedFunc();
    void Timeline_4__UpdateFunc();
    void OnNotifyEnd_F709F65F4FF871BAD6E763B6FD6BDF80(FName NotifyName);
    void OnNotifyBegin_F709F65F4FF871BAD6E763B6FD6BDF80(FName NotifyName);
    void OnInterrupted_F709F65F4FF871BAD6E763B6FD6BDF80(FName NotifyName);
    void OnBlendOut_F709F65F4FF871BAD6E763B6FD6BDF80(FName NotifyName);
    void OnCompleted_F709F65F4FF871BAD6E763B6FD6BDF80(FName NotifyName);
    void OnNotifyEnd_2D587D0E4F7959CA4D8A45A76411DE53(FName NotifyName);
    void OnNotifyBegin_2D587D0E4F7959CA4D8A45A76411DE53(FName NotifyName);
    void OnInterrupted_2D587D0E4F7959CA4D8A45A76411DE53(FName NotifyName);
    void OnBlendOut_2D587D0E4F7959CA4D8A45A76411DE53(FName NotifyName);
    void OnCompleted_2D587D0E4F7959CA4D8A45A76411DE53(FName NotifyName);
    void InpActEvt_Zero_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void InputActionChangeMode(bool bPressed);
    void ReceiveUnpossessed(class AController* OldController);
    void ReceivePossessed(class AController* NewController);
    void EventRetriggerableVolumeStart();
    void EventRetriggerableVolumeEnd();
    void EngineCrash();
    void EngineColor();
    void InputActionSecondary(bool bPressed);
    void InputActionInteraction(bool bPressed);
    void BoostBlueprintEvent();
    void StopBoostOnEngineCrash();
    void SoundPitchDown();
    void EnginePitchAdd();
    void EnginePitchDown();
    void TutorialCreated();
    void OnInputAxisExtendArm(float Value, bool LimitReached);
    void OnInputAxisLowerMagnet(float Value, bool LimitReached);
    void OnInputAxisMoveArmHorizontal(float Value, bool LimitReached);
    void OnInputAxisMoveArmVertical(float Value, bool LimitReached);
    void OnEventMaxMagnetDown(bool bMaxMagnetDown);
    void OnEventMaxMoveArmVertical(bool bMaxPlatformMove);
    void OnEventMaxExtendArm(bool bMaxExtend);
    void OnEventMaxMoveArmHorizontal(bool bMaxPlatformElevate);
    void CoolEngineOnUnposses();
    void ExecuteUbergraph_BP_Towy(int32 EntryPoint);
}; // Size: 0x8E8

#endif
