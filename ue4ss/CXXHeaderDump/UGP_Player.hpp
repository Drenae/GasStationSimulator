#ifndef UE4SS_SDK_UGP_Player_HPP
#define UE4SS_SDK_UGP_Player_HPP

class AUGP_Player_C : public AGuitarPlayerPawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* GuitarNoPossess;                                      // 0x02A8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x02B0 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Guitar;                                               // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Chair;                                                // 0x02C8 (size: 0x8)
    class UBoxComponent* TriggerZone;                                                 // 0x02D0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)
    TEnumAsByte<EUGPScaleChoice::Type> WheelKeysToUse;                                // 0x02E8 (size: 0x1)
    TArray<FName> CustomWheelKeys;                                                    // 0x02F0 (size: 0x10)
    TArray<FName> KeysToUse;                                                          // 0x0300 (size: 0x10)
    class UUGP_UI_C* UGP_UI;                                                          // 0x0310 (size: 0x8)
    float Volume;                                                                     // 0x0318 (size: 0x4)
    float FadeAmountPerFrame;                                                         // 0x031C (size: 0x4)
    TEnumAsByte<EUGPCameraMode::Type> CameraMode;                                     // 0x0320 (size: 0x1)
    float CameraSpeed;                                                                // 0x0324 (size: 0x4)
    float 180CameraRightLimit;                                                        // 0x0328 (size: 0x4)
    float 180CameraLeftLimit;                                                         // 0x032C (size: 0x4)
    int32 360CameraRotationDirection;                                                 // 0x0330 (size: 0x4)
    FLinearColor Wheel Part Inside Color;                                             // 0x0334 (size: 0x10)
    FLinearColor Wheel Part Outside Color;                                            // 0x0344 (size: 0x10)
    FLinearColor Wheel Part Text Color;                                               // 0x0354 (size: 0x10)
    FLinearColor Hover Wheel Part Inside Color;                                       // 0x0364 (size: 0x10)
    FLinearColor Hover Wheel Part Outside Color;                                      // 0x0374 (size: 0x10)
    FLinearColor Hover Wheel Part Text Color;                                         // 0x0384 (size: 0x10)
    float Hover Wheel Scale Up Percentage;                                            // 0x0394 (size: 0x4)
    FLinearColor FretBoardColor;                                                      // 0x0398 (size: 0x10)
    FLinearColor FretColor;                                                           // 0x03A8 (size: 0x10)
    FLinearColor NeckColor;                                                           // 0x03B8 (size: 0x10)
    FLinearColor NutColor;                                                            // 0x03C8 (size: 0x10)
    FLinearColor TunerColor;                                                          // 0x03D8 (size: 0x10)
    float FretBoardMetallic;                                                          // 0x03E8 (size: 0x4)
    float FretMetallic;                                                               // 0x03EC (size: 0x4)
    float NeckMetallic;                                                               // 0x03F0 (size: 0x4)
    float TunerMetallic;                                                              // 0x03F4 (size: 0x4)
    FLinearColor BodyColor;                                                           // 0x03F8 (size: 0x10)
    FLinearColor BodyRimColor;                                                        // 0x0408 (size: 0x10)
    FLinearColor BridgeBaseColor;                                                     // 0x0418 (size: 0x10)
    FLinearColor BridgePartsColor;                                                    // 0x0428 (size: 0x10)
    FLinearColor PickGuardColor;                                                      // 0x0438 (size: 0x10)
    float BodyMetallic;                                                               // 0x0448 (size: 0x4)
    float PickguardMetallic;                                                          // 0x044C (size: 0x4)
    int32 180CameraMovementSide;                                                      // 0x0450 (size: 0x4)
    FLinearColor String_E;                                                            // 0x0454 (size: 0x10)
    FLinearColor String_B;                                                            // 0x0464 (size: 0x10)
    FLinearColor String_G;                                                            // 0x0474 (size: 0x10)
    FLinearColor String_D;                                                            // 0x0484 (size: 0x10)
    FLinearColor String_A;                                                            // 0x0494 (size: 0x10)
    FLinearColor String_ELow;                                                         // 0x04A4 (size: 0x10)
    FTimerHandle FadeOutCameraTH;                                                     // 0x04B8 (size: 0x8)
    class AController* PosessionController;                                           // 0x04C0 (size: 0x8)
    float GamePadTime;                                                                // 0x04C8 (size: 0x4)
    FName InteractionName;                                                            // 0x04CC (size: 0x8)

    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    FName GetInteractionName();
    void PrePosession(class AController* PlayerController);
    void PlayInGamepad(float X, float Y);
    void PreUnpossession();
    void PostPosession();
    void MakePossession();
    void FadeOutCamera();
    void CameraMovementConstant();
    void Camera Movement On Tick(float DeltaTime);
    void InitializeGuitarColor();
    void InitializeWidget();
    void StrumString(FString StringName);
    void SetupChordWheelKeys();
    void SetWheelKeysFromEnum(TEnumAsByte<EUGPScaleChoice::Type> ScaleChoice);
    void UserConstructionScript();
    void InpActEvt_SpaceBar_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_A_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_S_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_D_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Z_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_X_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_C_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Interaction_F_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Right_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Left_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_0(FKey Key);
    void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void BndEvt__TriggerZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ShowInteractionAlertMessage();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_UGP_Player(int32 EntryPoint);
}; // Size: 0x4D4

#endif
