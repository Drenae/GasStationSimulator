#ifndef UE4SS_SDK_CarLift_BP_HPP
#define UE4SS_SDK_CarLift_BP_HPP

class ACarLift_BP_C : public ACarLift
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UTextRenderComponent* Screen1Text2;                                         // 0x05A8 (size: 0x8)
    class UTextRenderComponent* Screen1Text1;                                         // 0x05B0 (size: 0x8)
    class UTextRenderComponent* Screen2Text;                                          // 0x05B8 (size: 0x8)
    class UTextRenderComponent* Screen1Text;                                          // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* Screen2;                                              // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* Screen;                                               // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* Button1;                                              // 0x05D8 (size: 0x8)
    class UAudioComponent* CarLiftSound;                                              // 0x05E0 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x05F8 (size: 0x8)
    float MoveLift_Alfa_B4A01C7A48FF50AD3840C4AD5C93CA5D;                             // 0x0600 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveLift__Direction_B4A01C7A48FF50AD3840C4AD5C93CA5D; // 0x0604 (size: 0x1)
    class UTimelineComponent* MoveLift;                                               // 0x0608 (size: 0x8)
    class ACharacter* Instaginator;                                                   // 0x0610 (size: 0x8)
    class UGarage_HUD_C* GameWidgetREF;                                               // 0x0618 (size: 0x8)
    FCarLift_BP_COnCarLiftUp OnCarLiftUp;                                             // 0x0620 (size: 0x10)
    void OnCarLiftUp();
    FCarLift_BP_COnCarLiftDown OnCarLiftDown;                                         // 0x0630 (size: 0x10)
    void OnCarLiftDown();
    bool DelayClickActive;                                                            // 0x0640 (size: 0x1)
    bool IsBloked;                                                                    // 0x0641 (size: 0x1)
    bool InteractionDelay;                                                            // 0x0642 (size: 0x1)
    class UPrimitiveComponent* UsedButton;                                            // 0x0648 (size: 0x8)
    float XButtonOffset;                                                              // 0x0650 (size: 0x4)

    void ShowGarageStartWidget();
    void StartGarageGame();
    void Close Vehicle Hood();
    void UpdateScreenTexts(int32 BrokenParts);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void MoveLift__FinishedFunc();
    void MoveLift__UpdateFunc();
    void ReceiveBeginPlay();
    void DisableInteractionInfo(class APawn* Pawn);
    void PutInCar(class AGSSWheeledVehicle* GSSWheeledVehicle);
    void RetrigerDelayClick();
    void ResetTimer();
    void StartCarLift(class ACharacter* Instaginator);
    void UpdateVehiclePart(const class AActor* TargetActor, const bool Fixed);
    void OnBeginFinishTaskCharacter_Event_0(class UTaskBase* FinishedTask, const ETaskResult TaskResult, const FString Reason);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Reset();
    void UnlockInteraction();
    void LoadLift();
    void BlockInteraction();
    void MoveButtonWhenInteracted(class UPrimitiveComponent* ButtonToMove);
    void ShowInteractionAlertMessage();
    void ExecuteUbergraph_CarLift_BP(int32 EntryPoint);
    void OnCarLiftDown__DelegateSignature();
    void OnCarLiftUp__DelegateSignature();
}; // Size: 0x654

#endif
