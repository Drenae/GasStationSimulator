#ifndef UE4SS_SDK_SM_RoofTurbube_Moving_HPP
#define UE4SS_SDK_SM_RoofTurbube_Moving_HPP

class ASM_RoofTurbube_Moving_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_RoofTurbine_01_Part_A;                             // 0x0230 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SM_RoofTurbube_Moving(int32 EntryPoint);
}; // Size: 0x238

#endif
