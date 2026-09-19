#ifndef UE4SS_SDK_BP_AirCondition_01_B_Moving_HPP
#define UE4SS_SDK_BP_AirCondition_01_B_Moving_HPP

class ABP_AirCondition_01_B_Moving_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x0228 (size: 0x8)
    class UAudioComponent* ACsound;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SM_RoofTurbine_01_Part_A;                             // 0x0240 (size: 0x8)
    bool Electrocity;                                                                 // 0x0248 (size: 0x1)

    bool GetElectrocity();
    void ReceiveBeginPlay();
    void EnableElectrocity(const bool On);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_AirCondition_01_B_Moving(int32 EntryPoint);
}; // Size: 0x249

#endif
