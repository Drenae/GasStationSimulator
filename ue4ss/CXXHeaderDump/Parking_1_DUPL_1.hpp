#ifndef UE4SS_SDK_Parking_1_DUPL_1_HPP
#define UE4SS_SDK_Parking_1_DUPL_1_HPP

class AParking_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Parking_1(int32 EntryPoint);
}; // Size: 0x230

#endif
