#ifndef UE4SS_SDK_Fuel_Station_3_HPP
#define UE4SS_SDK_Fuel_Station_3_HPP

class AFuel_Station_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Fuel_Station_3(int32 EntryPoint);
}; // Size: 0x230

#endif
