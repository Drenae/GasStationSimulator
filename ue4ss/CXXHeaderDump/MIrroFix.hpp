#ifndef UE4SS_SDK_MIrroFix_HPP
#define UE4SS_SDK_MIrroFix_HPP

class AMirroFix_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)

    void ReceiveBeginPlay();
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_MirroFix(int32 EntryPoint);
}; // Size: 0x3C8

#endif
