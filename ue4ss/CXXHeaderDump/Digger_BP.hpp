#ifndef UE4SS_SDK_Digger_BP_HPP
#define UE4SS_SDK_Digger_BP_HPP

class ADigger_BP_C : public ADigger
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06C8 (size: 0x8)
    class UBoxComponent* NewVehicleMovementObstacle;                                  // 0x06D0 (size: 0x8)
    class USkeletalMeshComponent* Exhaust1;                                           // 0x06D8 (size: 0x8)
    class USkeletalMeshComponent* exhaust;                                            // 0x06E0 (size: 0x8)
    class UAudioComponent* turbo;                                                     // 0x06E8 (size: 0x8)
    class UParticleSystemComponent* ShovelDustBurst4;                                 // 0x06F0 (size: 0x8)
    class UParticleSystemComponent* ShovelDustBurst3;                                 // 0x06F8 (size: 0x8)
    class UParticleSystemComponent* CoolingR;                                         // 0x0700 (size: 0x8)
    class UParticleSystemComponent* CoolingL;                                         // 0x0708 (size: 0x8)
    class UParticleSystemComponent* OverHeatedL;                                      // 0x0710 (size: 0x8)
    class UParticleSystemComponent* OverHeatedR;                                      // 0x0718 (size: 0x8)
    class UStaticMeshComponent* SM_Digger_Sand;                                       // 0x0720 (size: 0x8)
    class UAudioComponent* Finish;                                                    // 0x0728 (size: 0x8)
    class UAudioComponent* kopanie;                                                   // 0x0730 (size: 0x8)
    class USkeletalMeshComponent* Accessories;                                        // 0x0738 (size: 0x8)
    class USkeletalMeshComponent* Beard;                                              // 0x0740 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x0748 (size: 0x8)
    class USkeletalMeshComponent* LowerArm;                                           // 0x0750 (size: 0x8)
    class USkeletalMeshComponent* UpperArm;                                           // 0x0758 (size: 0x8)
    class USkeletalMeshComponent* UpperBody;                                          // 0x0760 (size: 0x8)
    class USkeletalMeshComponent* LowerLeg;                                           // 0x0768 (size: 0x8)
    class USkeletalMeshComponent* UpperLeg;                                           // 0x0770 (size: 0x8)
    class USkeletalMeshComponent* LowerBody;                                          // 0x0778 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0780 (size: 0x8)
    class UAudioComponent* CrashEngine;                                               // 0x0788 (size: 0x8)
    class UAudioComponent* Silence;                                                   // 0x0790 (size: 0x8)
    class UBoxComponent* SandOverlappingBox;                                          // 0x0798 (size: 0x8)
    class UParticleSystemComponent* ShovelDustBurst2;                                 // 0x07A0 (size: 0x8)
    class UParticleSystemComponent* ShovelDustBurst1;                                 // 0x07A8 (size: 0x8)
    class UParticleSystemComponent* ShovelDust;                                       // 0x07B0 (size: 0x8)
    class UParticleSystemComponent* EngineVFX1;                                       // 0x07B8 (size: 0x8)
    class UParticleSystemComponent* EngineVFX;                                        // 0x07C0 (size: 0x8)
    class UParticleSystemComponent* Heat2;                                            // 0x07C8 (size: 0x8)
    class UParticleSystemComponent* Heat1;                                            // 0x07D0 (size: 0x8)
    class UParticleSystemComponent* DYmek2;                                           // 0x07D8 (size: 0x8)
    class UParticleSystemComponent* DYmek1;                                           // 0x07E0 (size: 0x8)
    class UAudioComponent* DiggerDrop;                                                // 0x07E8 (size: 0x8)
    class UAudioComponent* StartEngineSound;                                          // 0x07F0 (size: 0x8)
    class UAudioComponent* StopEngineSound;                                           // 0x07F8 (size: 0x8)
    class UAudioComponent* EngineSound;                                               // 0x0800 (size: 0x8)
    class UStaticMeshComponent* BackLight2;                                           // 0x0808 (size: 0x8)
    class UStaticMeshComponent* BackLight1;                                           // 0x0810 (size: 0x8)
    class UStaticMeshComponent* FrontLight2;                                          // 0x0818 (size: 0x8)
    class UStaticMeshComponent* FrontLight1;                                          // 0x0820 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x0828 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0830 (size: 0x8)
    class UArrowComponent* Arrow_SRC;                                                 // 0x0838 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0840 (size: 0x8)
    float Timeline_0_NewHeatValue_C9D7319E43B7335F8ECB4693130CACA1;                   // 0x0848 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C9D7319E43B7335F8ECB4693130CACA1; // 0x084C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0850 (size: 0x8)
    float ReduceColorTest_Color_E2A6254F41E892350DEF9DBC00C6AC7B;                     // 0x0858 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReduceColorTest__Direction_E2A6254F41E892350DEF9DBC00C6AC7B; // 0x085C (size: 0x1)
    class UTimelineComponent* ReduceColorTest;                                        // 0x0860 (size: 0x8)
    bool EmptyMinigameActive;                                                         // 0x0868 (size: 0x1)
    bool FillMinigameActive;                                                          // 0x0869 (size: 0x1)
    bool bHolding;                                                                    // 0x086A (size: 0x1)
    bool CanBeEmpty;                                                                  // 0x086B (size: 0x1)
    class UMaterialInstanceDynamic* ExhaustGlowMaterial;                              // 0x0870 (size: 0x8)
    float FrontLightIntensity;                                                        // 0x0878 (size: 0x4)
    class UMaterialInstanceDynamic* AdditionalLightsFront_MaterialInstance;           // 0x0880 (size: 0x8)
    class UMaterialInstanceDynamic* AdditionalLightsBack_MaterialInstance;            // 0x0888 (size: 0x8)
    FLinearColor WhiteColor;                                                          // 0x0890 (size: 0x10)
    FLinearColor BlackColor;                                                          // 0x08A0 (size: 0x10)
    float StandardSpeed_0;                                                            // 0x08B0 (size: 0x4)
    float BoostSpeed_0;                                                               // 0x08B4 (size: 0x4)
    float OverheatSpeedWhenSprint_0;                                                  // 0x08B8 (size: 0x4)
    float OverheatRMBRemovalMultiplier;                                               // 0x08BC (size: 0x4)
    float ShovelSpeedMultiplier;                                                      // 0x08C0 (size: 0x4)
    float TimeToMoveCameraToOriginalSlot;                                             // 0x08C4 (size: 0x4)
    float FuelRemoveSpeed_0;                                                          // 0x08C8 (size: 0x4)
    bool bPlayingEmptyingMontage;                                                     // 0x08CC (size: 0x1)
    FTimerHandle PitchSoundTimer;                                                     // 0x08D0 (size: 0x8)
    class AAIController* InitAIController;                                            // 0x08D8 (size: 0x8)
    FTimerHandle CoolEngineOnUnpossesTimer;                                           // 0x08E0 (size: 0x8)

    void HandleOverlappingSand(bool DiggerHasLowVelocity);
    void StopIfFuelEmpty();
    void SetInteractionManagerInputMode();
    void FadeOutVelocityIfUnpossesed();
    void StopIfUnpossesed();
    FName GetInteractionName();
    class ACharacter* GetBPOriginalCharacter();
    void VFXdust_drive(bool BeActivate);
    void ResetCameraLocationOverTime(float DeltaTime);
    void HandbrakeReleased();
    void HandbrakePressed();
    void VFX_CoolingCheck();
    void OverheatFasterRemoval(float DeltaTime);
    void AllowMove(float Input, bool& NewParam);
    void UserConstructionScript();
    void ReduceColorTest__FinishedFunc();
    void ReduceColorTest__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_Nine_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Eight_K2Node_InputKeyEvent_0(FKey Key);
    void OnNotifyEnd_228231E340467873746E75AB1505AE68(FName NotifyName);
    void OnNotifyBegin_228231E340467873746E75AB1505AE68(FName NotifyName);
    void OnInterrupted_228231E340467873746E75AB1505AE68(FName NotifyName);
    void OnBlendOut_228231E340467873746E75AB1505AE68(FName NotifyName);
    void OnCompleted_228231E340467873746E75AB1505AE68(FName NotifyName);
    void OnLoaded_70DD20A14FED90D7169807B1F32B1973(UClass* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossessed(class AController* NewController);
    void ReceiveUnpossessed(class AController* OldController);
    void Empty();
    void Full();
    void ReceiveBeginPlay();
    void EngineFix();
    void StopEngine();
    void ScaleSandWhileEmptying();
    void SoundPitchDown();
    void SandScaling();
    void StopBoostOnEngineCrash();
    void BoostBlueprintEvent();
    void InputActionPrimary(bool bPressed);
    void InputActionInteraction(bool bPressed);
    void InputActionSecondary(bool bPressed);
    void InputActionMoveForward(float Value);
    void EngineCrash();
    void EngineColor();
    void OverheatHandling();
    void CoolEngineOnUnposses();
    void ShowSand(bool bShowSand);
    void ExecuteUbergraph_Digger_BP(int32 EntryPoint);
}; // Size: 0x8E8

#endif
