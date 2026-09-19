#ifndef UE4SS_SDK_NewCar_06_BP_HPP
#define UE4SS_SDK_NewCar_06_BP_HPP

class ANewCar_06_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x05F0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewCar_06_BP(int32 EntryPoint);
}; // Size: 0x5F8

#endif
