#ifndef UE4SS_SDK_Event_BP_HPP
#define UE4SS_SDK_Event_BP_HPP

class UEvent_BP_C : public UGSSEvent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)

    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_BP(int32 EntryPoint);
}; // Size: 0xA8

#endif
