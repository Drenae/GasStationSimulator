#ifndef UE4SS_SDK_FuelEnter_AirPlane_HPP
#define UE4SS_SDK_FuelEnter_AirPlane_HPP

class AFuelEnter_AirPlane_C : public AAirPlaneFuelEnter_01_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_FuelEnter_AirPlane(int32 EntryPoint);
}; // Size: 0x440

#endif
