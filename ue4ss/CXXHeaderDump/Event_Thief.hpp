#ifndef UE4SS_SDK_Event_Thief_HPP
#define UE4SS_SDK_Event_Thief_HPP

class UEvent_Thief_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void CustomEvent(const int32 UpdatedTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_Thief(int32 EntryPoint);
}; // Size: 0xB0

#endif
