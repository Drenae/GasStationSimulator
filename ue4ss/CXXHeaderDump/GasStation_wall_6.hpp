#ifndef UE4SS_SDK_GasStation_wall_6_HPP
#define UE4SS_SDK_GasStation_wall_6_HPP

class AGasStation_wall_6_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_wall_6(int32 EntryPoint);
}; // Size: 0x3D0

#endif
