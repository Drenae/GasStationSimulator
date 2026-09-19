#ifndef UE4SS_SDK_PopcornBox_BP_HPP
#define UE4SS_SDK_PopcornBox_BP_HPP

class APopcornBox_BP_C : public AProduct
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0388 (size: 0x8)
    class UNiagaraComponent* NS_PopcornThrow;                                         // 0x0390 (size: 0x8)
    class APopcornMachine_BP_C* PopcornMachine;                                       // 0x0398 (size: 0x8)
    bool bPopcornThrown;                                                              // 0x03A0 (size: 0x1)
    bool bPopcornMissed;                                                              // 0x03A1 (size: 0x1)
    FTimerHandle TrashTimer;                                                          // 0x03A8 (size: 0x8)
    float ImpactSoundTreshold;                                                        // 0x03B0 (size: 0x4)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnPopcornMissed(class AActor* HitActor, class UPrimitiveComponent* HitComponent);
    void OnPopcornSpawnedInHand();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void SpawnPopcornTrash();
    void OnPopcornHitSth();
    void BndEvt__PopcornBox_BP_MainMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__PopcornBox_BP_MainMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_PopcornBox_BP(int32 EntryPoint);
}; // Size: 0x3B4

#endif
