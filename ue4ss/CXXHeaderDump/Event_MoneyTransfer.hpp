#ifndef UE4SS_SDK_Event_MoneyTransfer_HPP
#define UE4SS_SDK_Event_MoneyTransfer_HPP

class UEvent_MoneyTransfer_C : public UMoneyTransferEvent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D8 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void CustomEvent_0(const FTimeStruct UpdatedTime);
    void FinishEvent();
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_MoneyTransfer(int32 EntryPoint);
}; // Size: 0xE0

#endif
