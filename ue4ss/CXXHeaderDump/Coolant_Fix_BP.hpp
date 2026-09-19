#ifndef UE4SS_SDK_Coolant_Fix_BP_HPP
#define UE4SS_SDK_Coolant_Fix_BP_HPP

class ACoolant_Fix_BP_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)

    void ReceiveBeginPlay();
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_Coolant_Fix_BP(int32 EntryPoint);
}; // Size: 0x3C8

#endif
