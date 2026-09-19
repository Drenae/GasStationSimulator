#ifndef UE4SS_SDK_BP_RushHourEvent_HPP
#define UE4SS_SDK_BP_RushHourEvent_HPP

class UBP_RushHourEvent_C : public URushHourEvent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void FinishEvent();
    void ActivateEvent(bool bEventEnabled);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_BP_RushHourEvent(int32 EntryPoint);
}; // Size: 0xB0

#endif
