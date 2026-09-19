#ifndef UE4SS_SDK_GasStation_big_Door2_HPP
#define UE4SS_SDK_GasStation_big_Door2_HPP

class AGasStation_big_Door2_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_big_Door2(int32 EntryPoint);
}; // Size: 0x3D0

#endif
