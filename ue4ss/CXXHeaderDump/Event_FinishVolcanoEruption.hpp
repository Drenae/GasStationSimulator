#ifndef UE4SS_SDK_Event_FinishVolcanoEruption_HPP
#define UE4SS_SDK_Event_FinishVolcanoEruption_HPP

class UEvent_FinishVolcanoEruption_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void UpdateTime(bool& IsTimeOver);
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated_Event(const FTimeStruct UpdatedTime);
    void ExecuteUbergraph_Event_FinishVolcanoEruption(int32 EntryPoint);
}; // Size: 0xB0

#endif
