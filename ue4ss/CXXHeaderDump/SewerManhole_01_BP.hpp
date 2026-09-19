#ifndef UE4SS_SDK_SewerManhole_01_BP_HPP
#define UE4SS_SDK_SewerManhole_01_BP_HPP

class ASewerManhole_01_BP_C : public ADoor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UBoxComponent* DirtyTrigger;                                                // 0x05A8 (size: 0x8)
    class UParticleSystemComponent* Stinky;                                           // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* Manhole;                                              // 0x05B8 (size: 0x8)
    FVector OpenCloseManhole_RelativeRotation_E05D30504F74D0EC830773820ED863EF;       // 0x05C0 (size: 0xC)
    FVector OpenCloseManhole_RelativeLocation_E05D30504F74D0EC830773820ED863EF;       // 0x05CC (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> OpenCloseManhole__Direction_E05D30504F74D0EC830773820ED863EF; // 0x05D8 (size: 0x1)
    class UTimelineComponent* OpenCloseManhole;                                       // 0x05E0 (size: 0x8)
    class UAudioComponent* StinkSound;                                                // 0x05E8 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void OpenCloseManhole__FinishedFunc();
    void OpenCloseManhole__UpdateFunc();
    void OnStateUpdated(EDoorState NewState);
    void DisableInteractionInfo(class APawn* Pawn);
    void BndEvt__Box_0_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SewerManhole_01_BP(int32 EntryPoint);
}; // Size: 0x5F0

#endif
