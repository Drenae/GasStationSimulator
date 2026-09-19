#ifndef UE4SS_SDK_SharkHealthbar_HPP
#define UE4SS_SDK_SharkHealthbar_HPP

class USharkHealthbar_C : public USharkHealthBar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SuccessClose;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* Failed_Close;                                             // 0x0270 (size: 0x8)
    class UWidgetAnimation* Success;                                                  // 0x0278 (size: 0x8)
    class UWidgetAnimation* Failed;                                                   // 0x0280 (size: 0x8)
    class UWidgetAnimation* OpenAnimation;                                            // 0x0288 (size: 0x8)
    class UWidgetAnimation* OnChangeHealth;                                           // 0x0290 (size: 0x8)
    class UTextBlock* Headline_text;                                                  // 0x0298 (size: 0x8)
    class UProgressBar* HealthBar_ProgressBar;                                        // 0x02A0 (size: 0x8)
    class UTextBlock* Secondheadline_Text;                                            // 0x02A8 (size: 0x8)
    class UImage* Stars1_Image;                                                       // 0x02B0 (size: 0x8)
    class UImage* Stars2_Image;                                                       // 0x02B8 (size: 0x8)
    FText HeadlineText;                                                               // 0x02C0 (size: 0x18)
    FText SecondaryText;                                                              // 0x02D8 (size: 0x18)

    void Finished_682B731640321DD823CD6494C4159628();
    void Finished_F7551AA647DAF48570154090D77CDF45();
    void Finished_A127D2FB4C7C84BA1D55C1946D2788EF();
    void Finished_7D7B96F2451CC25DFA1915875AC1CD79();
    void Construct();
    void RefreshWidget(float CurrentHealth);
    void OnFailed();
    void OnSuccess();
    void ExecuteUbergraph_SharkHealthbar(int32 EntryPoint);
}; // Size: 0x2F0

#endif
