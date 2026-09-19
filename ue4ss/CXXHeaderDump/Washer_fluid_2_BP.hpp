#ifndef UE4SS_SDK_Washer_fluid_2_BP_HPP
#define UE4SS_SDK_Washer_fluid_2_BP_HPP

class AWasher_fluid_2_BP_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* SM_Washer_fluid_cap;                                  // 0x03C8 (size: 0x8)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_Washer_fluid_2_BP(int32 EntryPoint);
}; // Size: 0x3D0

#endif
