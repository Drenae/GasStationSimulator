#ifndef UE4SS_SDK_CarWashGauge_Big_BP_HPP
#define UE4SS_SDK_CarWashGauge_Big_BP_HPP

class ACarWashGauge_Big_BP_C : public ACarWashGauge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)

    void UpdateGaugePosition(float Percentage);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnCarWashPressureUpdated(float NewValue);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void ExecuteUbergraph_CarWashGauge_Big_BP(int32 EntryPoint);
}; // Size: 0x598

#endif
