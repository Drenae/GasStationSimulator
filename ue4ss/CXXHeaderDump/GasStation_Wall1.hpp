#ifndef UE4SS_SDK_GasStation_Wall1_HPP
#define UE4SS_SDK_GasStation_Wall1_HPP

class AGasStation_Wall1_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_Wall1(int32 EntryPoint);
}; // Size: 0x3D0

#endif
