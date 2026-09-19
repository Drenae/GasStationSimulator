#ifndef UE4SS_SDK_GasStation_Roof_Right_HPP
#define UE4SS_SDK_GasStation_Roof_Right_HPP

class AGasStation_Roof_Right_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_Roof_Right(int32 EntryPoint);
}; // Size: 0x3D0

#endif
