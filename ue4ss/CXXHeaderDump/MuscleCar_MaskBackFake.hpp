#ifndef UE4SS_SDK_MuscleCar_MaskBackFake_HPP
#define UE4SS_SDK_MuscleCar_MaskBackFake_HPP

class AMuscleCar_MaskBackFake_C : public A00_MaskBack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FName GetInteractionName();
    void ReceiveBeginPlay();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_MuscleCar_MaskBackFake(int32 EntryPoint);
}; // Size: 0x400

#endif
