#ifndef UE4SS_SDK_Parking_4_DUPL_1_HPP
#define UE4SS_SDK_Parking_4_DUPL_1_HPP

class AParking_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Parking_4(int32 EntryPoint);
}; // Size: 0x230

#endif
