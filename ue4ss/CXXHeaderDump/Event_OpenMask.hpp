#ifndef UE4SS_SDK_Event_OpenMask_HPP
#define UE4SS_SDK_Event_OpenMask_HPP

class UEvent_OpenMask_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AGSSGameState* GameState;                                                   // 0x00B0 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated_Event_0(const FTimeStruct UpdatedTime);
    void FinishEvent();
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_OpenMask(int32 EntryPoint);
}; // Size: 0xB8

#endif
