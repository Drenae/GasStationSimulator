#ifndef UE4SS_SDK_Acumulator_BP_HPP
#define UE4SS_SDK_Acumulator_BP_HPP

class AAcumulator_BP_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UAudioComponent* Garage;                                                    // 0x03C8 (size: 0x8)
    float StartDelay;                                                                 // 0x03D0 (size: 0x4)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void StartVehicleMinigame(class APawn* Pawn, bool Success, FString FailReason);
    void ExecuteUbergraph_Acumulator_BP(int32 EntryPoint);
}; // Size: 0x3D4

#endif
