#ifndef UE4SS_SDK_BP_ParkingSpot_HPP
#define UE4SS_SDK_BP_ParkingSpot_HPP

class ABP_ParkingSpot_C : public AParkingSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ParkingSpot(int32 EntryPoint);
}; // Size: 0x588

#endif
