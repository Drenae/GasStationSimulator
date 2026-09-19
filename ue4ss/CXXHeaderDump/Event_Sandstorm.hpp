#ifndef UE4SS_SDK_Event_Sandstorm_HPP
#define UE4SS_SDK_Event_Sandstorm_HPP

class UEvent_Sandstorm_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AGSSGameState* GameState;                                                   // 0x00B0 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_Sandstorm(int32 EntryPoint);
}; // Size: 0xB8

#endif
