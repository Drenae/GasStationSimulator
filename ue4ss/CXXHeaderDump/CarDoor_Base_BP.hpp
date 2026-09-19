#ifndef UE4SS_SDK_CarDoor_Base_BP_HPP
#define UE4SS_SDK_CarDoor_Base_BP_HPP

class ACarDoor_Base_BP_C : public ACarDoor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_CarDoor_Base_BP(int32 EntryPoint);
}; // Size: 0x3D8

#endif
