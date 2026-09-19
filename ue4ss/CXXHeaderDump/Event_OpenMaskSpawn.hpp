#ifndef UE4SS_SDK_Event_OpenMaskSpawn_HPP
#define UE4SS_SDK_Event_OpenMaskSpawn_HPP

class UEvent_OpenMaskSpawn_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class UWBP_ThiefEvent_C* ThiefEventWidget;                                        // 0x00B0 (size: 0x8)
    class AGSSGameState* GameState;                                                   // 0x00B8 (size: 0x8)

    void UpdateTime(const FTimeStruct UpdatedTime);
    void FinishEvent();
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void StatUpdated(EGSS_Stat StatChanged, int32 ValueChanged);
    void ExecuteUbergraph_Event_OpenMaskSpawn(int32 EntryPoint);
}; // Size: 0xC0

#endif
