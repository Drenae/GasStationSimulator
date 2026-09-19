#ifndef UE4SS_SDK_Washer_fluid_Fix_BP_HPP
#define UE4SS_SDK_Washer_fluid_Fix_BP_HPP

class AWasher_fluid_Fix_BP_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class AWheel_BP_C* CurrentWheel;                                                  // 0x03C8 (size: 0x8)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_Washer_fluid_Fix_BP(int32 EntryPoint);
}; // Size: 0x3D0

#endif
