#ifndef UE4SS_SDK_GasStation_Window_HPP
#define UE4SS_SDK_GasStation_Window_HPP

class AGasStation_Window_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_Window(int32 EntryPoint);
}; // Size: 0x3D0

#endif
