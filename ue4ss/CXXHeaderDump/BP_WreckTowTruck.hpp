#ifndef UE4SS_SDK_BP_WreckTowTruck_HPP
#define UE4SS_SDK_BP_WreckTowTruck_HPP

class ABP_WreckTowTruck_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    TArray<FLinearColor> Colors;                                                      // 0x05E0 (size: 0x10)
    class UWrecksCollectionContract* DeliveryContract;                                // 0x05F0 (size: 0x8)

    bool IsJunkyardCarTransporter();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_WreckTowTruck(int32 EntryPoint);
}; // Size: 0x5F8

#endif
