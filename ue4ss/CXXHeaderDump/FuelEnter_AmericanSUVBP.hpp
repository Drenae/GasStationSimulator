#ifndef UE4SS_SDK_FuelEnter_AmericanSUVBP_HPP
#define UE4SS_SDK_FuelEnter_AmericanSUVBP_HPP

class AFuelEnter_AmericanSUVBP_C : public AFuelEnter_00_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_FuelEnter_AmericanSUVBP(int32 EntryPoint);
}; // Size: 0x400

#endif
