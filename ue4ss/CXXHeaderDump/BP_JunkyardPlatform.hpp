#ifndef UE4SS_SDK_BP_JunkyardPlatform_HPP
#define UE4SS_SDK_BP_JunkyardPlatform_HPP

class ABP_JunkyardPlatform_C : public AJunkyardPlatform
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cust_Finish_Sparks_03_Cue;                      // 0x0320 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cust_Finish_SparksMov_01_Cue;                   // 0x0328 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cars_02_Default_Cue;                            // 0x0330 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cust_Finish_Sparks_02_Cue;                      // 0x0338 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cust_Finish_Sparks_01_Cue;                      // 0x0340 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cars_01_Default_Cue;                            // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Smoker_01;                                            // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Smoker_02;                                            // 0x0358 (size: 0x8)
    class UStaticMeshComponent* Smoker_03;                                            // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Smoker_04;                                            // 0x0368 (size: 0x8)
    class USceneComponent* SmokeEffectsScene;                                         // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0388 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cars_03_Default_Cue;                            // 0x0390 (size: 0x8)
    class UNiagaraComponent* NS_GrinderSparksCircular;                                // 0x0398 (size: 0x8)
    class UNiagaraComponent* NS_GrinderSparks1;                                       // 0x03A0 (size: 0x8)
    class UActorSequenceComponent* MultiToolFinish;                                   // 0x03A8 (size: 0x8)
    class UNiagaraComponent* NS_GrinderSparks;                                        // 0x03B0 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x03B8 (size: 0x8)
    class UActorSequenceComponent* MultiToolStart;                                    // 0x03C0 (size: 0x8)
    class USpotLightComponent* SpotLight6;                                            // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* SM_FloodLightB_Light3;                                // 0x03D0 (size: 0x8)
    class USpotLightComponent* SpotLight5;                                            // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* SM_FloodLightB_Light2;                                // 0x03E0 (size: 0x8)
    class USpotLightComponent* SpotLight4;                                            // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* SM_FloodLightB_Light1;                                // 0x03F0 (size: 0x8)
    class USpotLightComponent* SpotLight3;                                            // 0x03F8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0400 (size: 0x8)
    class UStaticMeshComponent* SM_FloodLightB_Light;                                 // 0x0408 (size: 0x8)
    class UStaticMeshComponent* SM_Roof_Light_Rig;                                    // 0x0410 (size: 0x8)
    class UNiagaraComponent* NS_Smoker3;                                              // 0x0418 (size: 0x8)
    class UNiagaraComponent* NS_Smoker2;                                              // 0x0420 (size: 0x8)
    class UNiagaraComponent* NS_Smoker1;                                              // 0x0428 (size: 0x8)
    class UNiagaraComponent* NS_Smoker;                                               // 0x0430 (size: 0x8)
    class USpotLightComponent* Customization_04;                                      // 0x0438 (size: 0x8)
    class USpotLightComponent* Customization_03;                                      // 0x0440 (size: 0x8)
    class USpotLightComponent* Customization_02;                                      // 0x0448 (size: 0x8)
    class USpotLightComponent* Customization_01;                                      // 0x0450 (size: 0x8)
    class UStaticMeshComponent* SM_AssembleSign;                                      // 0x0458 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x0460 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0468 (size: 0x8)
    class UArrowComponent* PrimaryCameraPosition;                                     // 0x0470 (size: 0x8)
    class UArrowComponent* SecondaryCameraPosition;                                   // 0x0478 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0480 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0488 (size: 0x8)
    class UChildActorComponent* PlatformPanelCamera;                                  // 0x0490 (size: 0x8)
    class UChildActorComponent* BP_JunkyardPlatformPanel;                             // 0x0498 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x04A0 (size: 0x8)
    float RotateTimeline_NewTrack_0_44D7082F47BE28DA793B7391F1403EBE;                 // 0x04A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RotateTimeline__Direction_44D7082F47BE28DA793B7391F1403EBE; // 0x04AC (size: 0x1)
    class UTimelineComponent* RotateTimeline;                                         // 0x04B0 (size: 0x8)
    float RotateValue;                                                                // 0x04B8 (size: 0x4)
    class AActor* PlatformCamera;                                                     // 0x04C0 (size: 0x8)
    FRotator DefaultWreckPlacementPointRotation;                                      // 0x04C8 (size: 0xC)
    float CurrentCameraAlpha;                                                         // 0x04D4 (size: 0x4)
    class UMaterialInstanceDynamic* AssembleSignMaterial;                             // 0x04D8 (size: 0x8)
    FBP_JunkyardPlatform_COnProjectCreated OnProjectCreated;                          // 0x04E0 (size: 0x10)
    void OnProjectCreated();

    void SmokeActivation();
    void OnPlatformWithCarLoaded();
    void TogglePlatformSign(int32 Index);
    void ToggleMultitoolLights(bool bOn);
    void OnAttachedCarProjectFInished();
    void TogglePlatformLights(bool bOn);
    void RotatePlatformToValue(float TargetRotation);
    void TryRotateCamera(bool bRotateUp, bool bRotateDown);
    void OnPlatformPanelClosed(bool bMoveToExhibition);
    void TryRotatePlatform(bool bRotateRight, bool bRotateLeft);
    void RotateTimeline__FinishedFunc();
    void RotateTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void LoadPlatformRotation(float LoadedZRotation);
    void RotateOverTime(float NewRotation);
    void OnWreckTaken_Event(class AActor* Wreck);
    void DEBUG_SkipTutorial();
    void DEBUG_UnlockCustomization();
    void OnGameplayStuffUnlocked(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState);
    void ReceiveDestroyed();
    void OnComponentActivated_Event_0(class UActorComponent* Component, bool bReset);
    void OnComponentActivated_Event_1(class UActorComponent* Component, bool bReset);
    void OnComponentActivated_Event_2(class UActorComponent* Component, bool bReset);
    void OnComponentDeactivated_Event_0(class UActorComponent* Component);
    void OnComponentDeactivated_Event_1(class UActorComponent* Component);
    void OnComponentDeactivated_Event_2(class UActorComponent* Component);
    void OnJunkyradActivated(EDLCName DLCName, bool bActivated);
    void ExecuteUbergraph_BP_JunkyardPlatform(int32 EntryPoint);
    void OnProjectCreated__DelegateSignature();
}; // Size: 0x4F0

#endif
