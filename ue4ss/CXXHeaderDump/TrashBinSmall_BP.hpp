#ifndef UE4SS_SDK_TrashBinSmall_BP_HPP
#define UE4SS_SDK_TrashBinSmall_BP_HPP

class ATrashBinSmall_BP_C : public ATrashBin_Base_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B0 (size: 0x8)
    class UAudioComponent* TrashSpawn_Cue;                                            // 0x05B8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x05C0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x05C8 (size: 0x8)
    class UBoxComponent* DirtyTrigger;                                                // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* SM_Trashbin_open;                                     // 0x05D8 (size: 0x8)
    FTimerHandle DirtyTriggerCollisionTimer;                                          // 0x05E0 (size: 0x8)

    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void ReceiveBeginPlay();
    void BndEvt__Box_0_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnTrashBinCapacityUpdated(const float TrashCapacity, float TrashBinCapacityInPercent);
    void DisableInteractionInfo(class APawn* Pawn);
    void EnableCollision();
    void ExecuteUbergraph_TrashBinSmall_BP(int32 EntryPoint);
}; // Size: 0x5E8

#endif
