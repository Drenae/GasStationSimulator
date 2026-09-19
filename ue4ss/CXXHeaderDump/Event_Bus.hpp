#ifndef UE4SS_SDK_Event_Bus_HPP
#define UE4SS_SDK_Event_Bus_HPP

class UEvent_Bus_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void SpawnBus();
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_Bus(int32 EntryPoint);
}; // Size: 0xB0

#endif
