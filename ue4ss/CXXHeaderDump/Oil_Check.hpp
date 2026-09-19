#ifndef UE4SS_SDK_Oil_Check_HPP
#define UE4SS_SDK_Oil_Check_HPP

class AOil_Check_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UAudioComponent* Garage;                                                    // 0x03C8 (size: 0x8)
    class UArrowComponent* Camera;                                                    // 0x03D0 (size: 0x8)
    class AWheel_BP_C* CurrentWheel;                                                  // 0x03D8 (size: 0x8)
    float StartDelay;                                                                 // 0x03E0 (size: 0x4)

    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void StartVehicleMinigame(class APawn* Pawn, bool Success, FString FailReason);
    void ExecuteUbergraph_Oil_Check(int32 EntryPoint);
}; // Size: 0x3E4

#endif
