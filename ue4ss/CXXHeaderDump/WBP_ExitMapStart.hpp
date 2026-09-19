#ifndef UE4SS_SDK_WBP_ExitMapStart_HPP
#define UE4SS_SDK_WBP_ExitMapStart_HPP

class UWBP_ExitMapStart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SideNotification;                                         // 0x0268 (size: 0x8)
    class UWidgetAnimation* RedVignet;                                                // 0x0270 (size: 0x8)
    class UWidgetAnimation* Popup_ANIM;                                               // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0290 (size: 0x8)
    class UTextBlock* Time;                                                           // 0x0298 (size: 0x8)
    bool Destructed;                                                                  // 0x02A0 (size: 0x1)
    FWBP_ExitMapStart_CNoIDupa NoIDupa;                                               // 0x02A8 (size: 0x10)
    void NoIDupa();
    class UWBP_FadeInOut_C* FadeOutREF;                                               // 0x02B8 (size: 0x8)
    float FadeOutTime;                                                                // 0x02C0 (size: 0x4)
    float RedVignetTime;                                                              // 0x02C4 (size: 0x4)

    void UpdateTime(float Time);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void TimerFinished();
    void MainMenuOn();
    void ExecuteUbergraph_WBP_ExitMapStart(int32 EntryPoint);
    void NoIDupa__DelegateSignature();
}; // Size: 0x2C8

#endif
