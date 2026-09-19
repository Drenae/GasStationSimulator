#ifndef UE4SS_SDK_SparkPlugs_BP_HPP
#define UE4SS_SDK_SparkPlugs_BP_HPP

class ASparkPlugs_BP_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* SM_SparkPlug_Cable3;                                  // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* SM_SparkPlug_Cable2;                                  // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* SM_SparkPlug_Cable1;                                  // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* SM_SparkPlug_Cable;                                   // 0x03E0 (size: 0x8)
    class UAudioComponent* Garage;                                                    // 0x03E8 (size: 0x8)
    float StartDelay;                                                                 // 0x03F0 (size: 0x4)

    void StartVehicleMinigame(class APawn* Pawn, bool Success, FString FailReason);
    void ExecuteUbergraph_SparkPlugs_BP(int32 EntryPoint);
}; // Size: 0x3F4

#endif
