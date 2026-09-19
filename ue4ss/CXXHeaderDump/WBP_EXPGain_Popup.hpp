#ifndef UE4SS_SDK_WBP_EXPGain_Popup_HPP
#define UE4SS_SDK_WBP_EXPGain_Popup_HPP

class UWBP_EXPGain_Popup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnConstruct;                                              // 0x0268 (size: 0x8)
    class UTextBlock* ExpGained;                                                      // 0x0270 (size: 0x8)
    class UOverlay* Main_Overlay;                                                     // 0x0278 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x0280 (size: 0x8)
    int32 Counter;                                                                    // 0x0288 (size: 0x4)
    int32 InputEXPGained;                                                             // 0x028C (size: 0x4)
    float TimeToDisappear;                                                            // 0x0290 (size: 0x4)
    FTimerHandle DisappearTimer;                                                      // 0x0298 (size: 0x8)

    FText Get_ExpGained_Text_0();
    void StartCount();
    void Init(int32 ExpGained);
    void OnCountFinished();
    void Disappear();
    void ExecuteUbergraph_WBP_EXPGain_Popup(int32 EntryPoint);
}; // Size: 0x2A0

#endif
