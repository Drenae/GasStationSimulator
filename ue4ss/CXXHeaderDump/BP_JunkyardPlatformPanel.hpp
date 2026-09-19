#ifndef UE4SS_SDK_BP_JunkyardPlatformPanel_HPP
#define UE4SS_SDK_BP_JunkyardPlatformPanel_HPP

class ABP_JunkyardPlatformPanel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    class UChildActorComponent* CameraActor;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool bPanelActive;                                                                // 0x0248 (size: 0x1)
    class AJunkyardCarWreck* OriginalWreckRef;                                        // 0x0250 (size: 0x8)
    FSavedCarWreck DuplicateCarData;                                                  // 0x0260 (size: 0x130)
    bool bPanelLoading;                                                               // 0x0390 (size: 0x1)

    FName GetInteractionName();
    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void DeleteCarWreck(class AActor* TargetWreck);
    void OnDuplicateCarSpawned(class AJunkyardCarWreck* SpawnedCar);
    void ClosePanel(bool bCancelChanges);
    void DisableInteractionInfo(class APawn* Pawn);
    void ReceiveBeginPlay();
    void OnCustomizationButtonClicked();
    void ShowInteractionAlertMessage();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_JunkyardPlatformPanel(int32 EntryPoint);
}; // Size: 0x391

#endif
