#ifndef UE4SS_SDK_Wheel_BP_HPP
#define UE4SS_SDK_Wheel_BP_HPP

class AWheel_BP_C : public AWheel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    FRotator SpawnRotator;                                                            // 0x03D8 (size: 0xC)

    void CalculateSpawnRotator();
    void UserConstructionScript();
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void StartVehicleMinigame(class APawn* Pawn, bool Success, FString FailReason);
    void ExecuteUbergraph_Wheel_BP(int32 EntryPoint);
}; // Size: 0x3E4

#endif
