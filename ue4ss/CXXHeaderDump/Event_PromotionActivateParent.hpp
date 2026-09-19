#ifndef UE4SS_SDK_Event_PromotionActivateParent_HPP
#define UE4SS_SDK_Event_PromotionActivateParent_HPP

class UEvent_PromotionActivateParent_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TMap<FName, int32> LevelNamesWithDelayInDays;                                     // 0x00B0 (size: 0x50)

    void IsEventAlreadyActive(bool& bValue);
    void GetStreamingLevelToLoad(FName& LevelName, int32& NextLevelDelay);
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void FinishEvent();
    void ExecuteUbergraph_Event_PromotionActivateParent(int32 EntryPoint);
}; // Size: 0x100

#endif
