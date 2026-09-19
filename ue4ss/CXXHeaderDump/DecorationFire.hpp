#ifndef UE4SS_SDK_DecorationFire_HPP
#define UE4SS_SDK_DecorationFire_HPP

class ADecorationFire_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* ScaryTrigger;                                             // 0x0228 (size: 0x8)
    class UParticleSystemComponent* Campfire_Biome1;                                  // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FTimerHandle DestroyTimer;                                                        // 0x0240 (size: 0x8)
    class APlaceableActor* DecorationRef;                                             // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void FireFinished();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__DecorationFire_ScaryTrigger2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_DecorationFire(int32 EntryPoint);
}; // Size: 0x250

#endif
