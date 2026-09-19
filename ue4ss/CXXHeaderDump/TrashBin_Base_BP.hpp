#ifndef UE4SS_SDK_TrashBin_Base_BP_HPP
#define UE4SS_SDK_TrashBin_Base_BP_HPP

class ATrashBin_Base_BP_C : public ATrashBin
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0598 (size: 0x8)
    class UAudioComponent* TrashIn;                                                   // 0x05A0 (size: 0x8)
    class AProduct* Product;                                                          // 0x05A8 (size: 0x8)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnOnverlapedActor(class AActor* Actor);
    void ExecuteUbergraph_TrashBin_Base_BP(int32 EntryPoint);
}; // Size: 0x5B0

#endif
