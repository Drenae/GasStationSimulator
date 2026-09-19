#ifndef UE4SS_SDK_DenisMachine_HPP
#define UE4SS_SDK_DenisMachine_HPP

class ADenisMachine_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* StaticMeshActor2;                                     // 0x0228 (size: 0x8)
    class UChildActorComponent* StaticMeshActor1;                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class ALight_Base_C* LightBase1;                                                  // 0x0240 (size: 0x8)
    class ALight_Base_C* LightBase2;                                                  // 0x0248 (size: 0x8)
    FTimerHandle TimerDenis;                                                          // 0x0250 (size: 0x8)
    class UAudioComponent* NewVar_0;                                                  // 0x0258 (size: 0x8)
    TArray<TSubclassOf<class ATrashItem_PrologueTrash_C>> NewVar_1;                   // 0x0260 (size: 0x10)
    class ATrashItem_PrologueTrash_C* TrashItemToHold;                                // 0x0270 (size: 0x8)

    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void ShowInteractionAlertMessage();
    void ReceiveBeginPlay();
    void PawnSpawned(const class APawn* NewPawn);
    void DestroyPawn(class AActor* DestroyedActor);
    void AlarmDenis();
    void SoundOn();
    void SoundOff();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_DenisMachine(int32 EntryPoint);
}; // Size: 0x278

#endif
