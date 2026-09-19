#ifndef UE4SS_SDK_00_TrashItem_HPP
#define UE4SS_SDK_00_TrashItem_HPP

class A00_TrashItem_C : public ATrashItemBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x03C8 (size: 0x8)
    FVector Timeline_0_NewTrack_1_FE1303FE4236B8C3936F8D84D4FE9190;                   // 0x03D0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FE1303FE4236B8C3936F8D84D4FE9190; // 0x03DC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03E0 (size: 0x8)
    bool CanHit;                                                                      // 0x03E8 (size: 0x1)
    FVector StartLocation;                                                            // 0x03EC (size: 0xC)
    class ABigTrashBag* Trashbag;                                                     // 0x03F8 (size: 0x8)

    void CanDisplayInteractionInfo(bool& bCanDisplay);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void FlyToBag(class ABigTrashBag* BigTrashBag);
    void BndEvt__SphereOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveDestroyed();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void OnAiCharacterOverlap(class AAICharacterBase* AICharacterBase);
    void ExecuteUbergraph_00_TrashItem(int32 EntryPoint);
}; // Size: 0x400

#endif
