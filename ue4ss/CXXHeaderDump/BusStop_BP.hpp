#ifndef UE4SS_SDK_BusStop_BP_HPP
#define UE4SS_SDK_BusStop_BP_HPP

class ABusStop_BP_C : public ABusStop
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BusStop_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
