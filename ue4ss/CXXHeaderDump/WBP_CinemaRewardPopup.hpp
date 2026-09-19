#ifndef UE4SS_SDK_WBP_CinemaRewardPopup_HPP
#define UE4SS_SDK_WBP_CinemaRewardPopup_HPP

class UWBP_CinemaRewardPopup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* CloseAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* OpenAnim;                                                 // 0x0270 (size: 0x8)
    class UImage* MainBG;                                                             // 0x0278 (size: 0x8)
    class UImage* MainBG_1;                                                           // 0x0280 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0288 (size: 0x8)
    class UTextBlock* MoneyText;                                                      // 0x0290 (size: 0x8)
    class UTextBlock* RenownText;                                                     // 0x0298 (size: 0x8)
    float MoneyAmount;                                                                // 0x02A0 (size: 0x4)
    float RenownAmount;                                                               // 0x02A4 (size: 0x4)
    EEconomyDetailedYieldType RenownReason;                                           // 0x02A8 (size: 0x1)

    void Finished_8831613F48457DD5E712C99FF99B2D0A();
    void Finished_927B02D5440B679A875BF8832AE9E79B();
    void Construct();
    void ExecuteUbergraph_WBP_CinemaRewardPopup(int32 EntryPoint);
}; // Size: 0x2A9

#endif
