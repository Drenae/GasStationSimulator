#ifndef UE4SS_SDK_DesertCar_HPP
#define UE4SS_SDK_DesertCar_HPP

class ADesertCar_C : public ARCCarBase_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBoxComponent* VehicleOverlapComponent;                                     // 0x02D8 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x02E0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02E8 (size: 0x8)
    class UAudioComponent* finish_Cue;                                                // 0x02F0 (size: 0x8)
    class UAudioComponent* ciptunetest_Cue;                                           // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* SM_Desert_Vehicle_Wheel3;                             // 0x0300 (size: 0x8)
    class UStaticMeshComponent* SM_Desert_Vehicle_Wheel2;                             // 0x0308 (size: 0x8)
    class UStaticMeshComponent* SM_Desert_Vehicle_Wheel1;                             // 0x0310 (size: 0x8)
    class UStaticMeshComponent* SM_Desert_Vehicle_Wheel;                              // 0x0318 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0320 (size: 0x8)
    class USpotLightComponent* Headlights;                                            // 0x0328 (size: 0x8)
    class UCameraComponent* InternalCamera;                                           // 0x0330 (size: 0x8)
    class UCameraComponent* ChaseCamera;                                              // 0x0338 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0340 (size: 0x8)
    class UAudioComponent* EngineSound;                                               // 0x0348 (size: 0x8)
    class UTextRenderComponent* InCarGear;                                            // 0x0350 (size: 0x8)
    class UTextRenderComponent* InCarSpeed;                                           // 0x0358 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0360 (size: 0x8)
    bool bIsLowFriction;                                                              // 0x0368 (size: 0x1)
    bool IsInCar;                                                                     // 0x0369 (size: 0x1)
    FLinearColor GearDisplayColor;                                                    // 0x036C (size: 0x10)
    FLinearColor GearDisplayReverseColor;                                             // 0x037C (size: 0x10)
    FString Speed Display String;                                                     // 0x0390 (size: 0x10)
    FString Gear Display String;                                                      // 0x03A0 (size: 0x10)
    bool InReverseGear;                                                               // 0x03B0 (size: 0x1)
    bool IsInCar_0;                                                                   // 0x03B1 (size: 0x1)
    bool bHandbrake;                                                                  // 0x03B2 (size: 0x1)
    class APlayerController* PlayerController;                                        // 0x03B8 (size: 0x8)
    bool bPlayerIsInCar;                                                              // 0x03C0 (size: 0x1)
    class ACharacter* OriginalCharacter;                                              // 0x03C8 (size: 0x8)
    bool Flying;                                                                      // 0x03D0 (size: 0x1)
    FDesertCar_COnPosseded OnPosseded;                                                // 0x03D8 (size: 0x10)
    void OnPosseded(bool InCar);
    class UAudioComponent* MusicComp;                                                 // 0x03E8 (size: 0x8)
    class UCurveFloat* TurningCurve;                                                  // 0x03F0 (size: 0x8)
    float ForwardAxisValue;                                                           // 0x03F8 (size: 0x4)
    class AComputerRacing_C* ConnectedRacingComputer;                                 // 0x0400 (size: 0x8)

    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    class ACharacter* GetBPOriginalCharacter();
    void PlaySoundtrack();
    void StopSoundtrack();
    void Update Physics Material();
    void Update HUD Strings();
    void Setup Incar HUD();
    void EnableIncarView(bool State);
    void InpActEvt_Jump_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Interaction_F_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_MuteSounds_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_43(float AxisValue);
    void ReceiveBeginPlay();
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_32(float AxisValue);
    void ReceivePossessed(class AController* NewController);
    void ReceiveUnpossessed(class AController* OldController);
    void ShowInteractionAlertMessage();
    void DisableInteractionInfo(class APawn* Pawn);
    void CustomDephRenderVehicle();
    void UnpossesCar();
    void ExecuteUbergraph_DesertCar(int32 EntryPoint);
    void OnPosseded__DelegateSignature(bool InCar);
}; // Size: 0x408

#endif
