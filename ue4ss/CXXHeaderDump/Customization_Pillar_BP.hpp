#ifndef UE4SS_SDK_Customization_Pillar_BP_HPP
#define UE4SS_SDK_Customization_Pillar_BP_HPP

class ACustomization_Pillar_BP_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Customization_Pillar_BP(int32 EntryPoint);
}; // Size: 0x3D0

#endif
