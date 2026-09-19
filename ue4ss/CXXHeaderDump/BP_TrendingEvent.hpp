#ifndef UE4SS_SDK_BP_TrendingEvent_HPP
#define UE4SS_SDK_BP_TrendingEvent_HPP

class UBP_TrendingEvent_C : public UTrendingEvent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void FinishEvent();
    void ExecuteUbergraph_BP_TrendingEvent(int32 EntryPoint);
}; // Size: 0xB8

#endif
