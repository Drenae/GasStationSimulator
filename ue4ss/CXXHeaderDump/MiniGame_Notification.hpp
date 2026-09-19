#ifndef UE4SS_SDK_MiniGame_Notification_HPP
#define UE4SS_SDK_MiniGame_Notification_HPP

class UMiniGame_Notification_C : public UUserWidget
{
    class UWidgetAnimation* ShortAnim;                                                // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0268 (size: 0x8)
    class UImage* BG_IMG;                                                             // 0x0270 (size: 0x8)
    class UImage* BOTTOM_IMG;                                                         // 0x0278 (size: 0x8)
    class UTextBlock* Notification_Main_TXT;                                          // 0x0280 (size: 0x8)
    class UImage* TOP_IMG;                                                            // 0x0288 (size: 0x8)
    FText SetNotificationTxt;                                                         // 0x0290 (size: 0x18)
    float Time;                                                                       // 0x02A8 (size: 0x4)
    TEnumAsByte<Notification_Size::Type> Size;                                        // 0x02AC (size: 0x1)

    void SetMinigameNOtificationText(FText NewParam);
}; // Size: 0x2AD

#endif
