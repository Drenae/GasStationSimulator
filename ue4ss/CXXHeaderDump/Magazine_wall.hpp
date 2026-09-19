#ifndef UE4SS_SDK_Magazine_wall_HPP
#define UE4SS_SDK_Magazine_wall_HPP

class AMagazine_wall_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Magazine_wall(int32 EntryPoint);
}; // Size: 0x3D0

#endif
