#ifndef UE4SS_SDK_GasStation_fillar_HPP
#define UE4SS_SDK_GasStation_fillar_HPP

class AGasStation_fillar_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_fillar(int32 EntryPoint);
}; // Size: 0x3D0

#endif
