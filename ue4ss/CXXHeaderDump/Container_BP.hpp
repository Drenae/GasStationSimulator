#ifndef UE4SS_SDK_Container_BP_HPP
#define UE4SS_SDK_Container_BP_HPP

class AContainer_BP_C : public ATrashBin_Base_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B0 (size: 0x8)
    TArray<AActor*> OverlapingTrash;                                                  // 0x05B8 (size: 0x10)
    int32 ArrayIndex;                                                                 // 0x05C8 (size: 0x4)
    class AActor* CurrentActor;                                                       // 0x05D0 (size: 0x8)

    void GetOverlapingProducts(TArray<AActor*>& OverlappingActors, TArray<AItem*>& BigTrash1);
    void ReceiveBeginPlay();
    void OnTrashBinCapacityUpdated(const float TrashCapacity, float TrashBinCapacityInPercent);
    void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Container_BP(int32 EntryPoint);
}; // Size: 0x5D8

#endif
