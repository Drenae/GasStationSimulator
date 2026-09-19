#ifndef UE4SS_SDK_BP_GuestServiceActor_HPP
#define UE4SS_SDK_BP_GuestServiceActor_HPP

class ABP_GuestServiceActor_C : public ARvGuestServiceSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UAudioComponent* Service Ambient Sound;                                     // 0x0608 (size: 0x8)
    class UArrowComponent* ArrowComponent08;                                          // 0x0610 (size: 0x8)
    class UArrowComponent* ArrowComponent07;                                          // 0x0618 (size: 0x8)
    class UArrowComponent* ArrowComponent06;                                          // 0x0620 (size: 0x8)
    class UArrowComponent* ArrowComponent05;                                          // 0x0628 (size: 0x8)
    class UArrowComponent* ArrowComponent04;                                          // 0x0630 (size: 0x8)
    class UArrowComponent* ArrowComponent03;                                          // 0x0638 (size: 0x8)
    class UArrowComponent* ArrowComponent02;                                          // 0x0640 (size: 0x8)
    class UBoxComponent* OverlapBox;                                                  // 0x0648 (size: 0x8)
    class UTextRenderComponent* ServiceName;                                          // 0x0650 (size: 0x8)
    bool bFocusWidget;                                                                // 0x0658 (size: 0x1)
    FBP_GuestServiceActor_CDEBUG_GuestServiceActorMinigameEnd DEBUG_GuestServiceActorMinigameEnd; // 0x0660 (size: 0x10)
    void DEBUG_GuestServiceActorMinigameEnd();
    class AActor* TempNpcReference;                                                   // 0x0670 (size: 0x8)

    bool InteractWithGuestService(bool bForceDifficulty, EGuestServiceDifficulty ForcedDifficulty);
    void Start Minigame With Difficulty(EGuestServiceDifficulty Difficulty);
    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    FName GetInteractionName();
    void OnWidgetClosed();
    void ReceiveBeginPlay();
    void DisableInteractionInfo(class APawn* Pawn);
    void BndEvt__BP_GuestServiceActor_OverlapBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_GuestServiceActor_OverlapBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ShowInteractionAlertMessage();
    void ExecuteUbergraph_BP_GuestServiceActor(int32 EntryPoint);
    void DEBUG_GuestServiceActorMinigameEnd__DelegateSignature();
}; // Size: 0x678

#endif
