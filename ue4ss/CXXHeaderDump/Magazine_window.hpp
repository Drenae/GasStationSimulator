#ifndef UE4SS_SDK_Magazine_window_HPP
#define UE4SS_SDK_Magazine_window_HPP

class AMagazine_window_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Magazine_window(int32 EntryPoint);
}; // Size: 0x3D0

#endif
