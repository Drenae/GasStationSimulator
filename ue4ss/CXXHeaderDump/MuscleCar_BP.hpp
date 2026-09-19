#ifndef UE4SS_SDK_MuscleCar_BP_HPP
#define UE4SS_SDK_MuscleCar_BP_HPP

class AMuscleCar_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x05E0 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_MuscleCar_BP(int32 EntryPoint);
}; // Size: 0x5E8

#endif
