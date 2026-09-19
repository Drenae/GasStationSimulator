#ifndef UE4SS_SDK_FuelEnter_Farmer_Pickup_BP1_HPP
#define UE4SS_SDK_FuelEnter_Farmer_Pickup_BP1_HPP

class AFuelEnter_Farmer_Pickup_BP1_C : public AFuelEnter_00_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_FuelEnter_Farmer_Pickup_BP1(int32 EntryPoint);
}; // Size: 0x400

#endif
