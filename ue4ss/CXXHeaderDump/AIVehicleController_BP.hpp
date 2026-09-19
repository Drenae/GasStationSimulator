#ifndef UE4SS_SDK_AIVehicleController_BP_HPP
#define UE4SS_SDK_AIVehicleController_BP_HPP

class AAIVehicleController_BP_C : public AAIVehicleController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIVehicleController_BP(int32 EntryPoint);
}; // Size: 0x348

#endif
