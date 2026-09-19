#ifndef UE4SS_SDK_Event_AirportSandstorm_HPP
#define UE4SS_SDK_Event_AirportSandstorm_HPP

class UEvent_AirportSandstorm_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class UQuestBase* Quest to Check;                                                 // 0x00B0 (size: 0x8)

    void ResetSandstormClock();
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_AirportSandstorm(int32 EntryPoint);
}; // Size: 0xB8

#endif
