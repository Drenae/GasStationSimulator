#ifndef UE4SS_SDK_EventDebugLine_WBP_HPP
#define UE4SS_SDK_EventDebugLine_WBP_HPP

class UEventDebugLine_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* EventName;                                                      // 0x0268 (size: 0x8)
    class UTextBlock* EventTime;                                                      // 0x0270 (size: 0x8)
    class UGSSEvent* EventRef;                                                        // 0x0278 (size: 0x8)
    float TimeSinceUpdate;                                                            // 0x0280 (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void UpdateValue();
    void ExecuteUbergraph_EventDebugLine_WBP(int32 EntryPoint);
}; // Size: 0x284

#endif
