#ifndef UE4SS_SDK_DarkPortal_BP_HPP
#define UE4SS_SDK_DarkPortal_BP_HPP

class ADarkPortal_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* SignArrow;                                            // 0x0228 (size: 0x8)
    class UArrowComponent* PlayerSpawnArrow;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SignTop;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Pole;                                                 // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    FString TargetLevelName;                                                          // 0x0250 (size: 0x10)
    class USoundMix* FadeSoundtrack;                                                  // 0x0260 (size: 0x8)

    FName GetInteractionName();
    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void ContinueJourney();
    void LoadGameFromOtherMap(FString LevelName, FString GameMap);
    void StartNewJourney();
    void ShowInteractionAlertMessage();
    void ReceiveBeginPlay();
    void OnPlayerLoaded();
    void DisableInteractionInfo(class APawn* Pawn);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DarkPortal_BP(int32 EntryPoint);
}; // Size: 0x268

#endif
