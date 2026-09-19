#ifndef UE4SS_SDK_FarmerPickup_BP1_HPP
#define UE4SS_SDK_FarmerPickup_BP1_HPP

class AFarmerPickup_BP1_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x05E0 (size: 0x8)
    TArray<ABrakeDisc_BP_C*> BrakeDiscs_0;                                            // 0x05E8 (size: 0x10)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_FarmerPickup_BP1(int32 EntryPoint);
}; // Size: 0x5F8

#endif
