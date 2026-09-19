#ifndef UE4SS_SDK_GasStation_Roof_Left_HPP
#define UE4SS_SDK_GasStation_Roof_Left_HPP

class AGasStation_Roof_Left_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_Roof_Left(int32 EntryPoint);
}; // Size: 0x3D0

#endif
