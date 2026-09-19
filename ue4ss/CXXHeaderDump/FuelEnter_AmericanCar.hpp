#ifndef UE4SS_SDK_FuelEnter_AmericanCar_HPP
#define UE4SS_SDK_FuelEnter_AmericanCar_HPP

class AFuelEnter_AmericanCar_C : public AFuelEnter_00_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_FuelEnter_AmericanCar(int32 EntryPoint);
}; // Size: 0x400

#endif
