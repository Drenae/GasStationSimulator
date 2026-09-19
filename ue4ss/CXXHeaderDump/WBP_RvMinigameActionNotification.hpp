#ifndef UE4SS_SDK_WBP_RvMinigameActionNotification_HPP
#define UE4SS_SDK_WBP_RvMinigameActionNotification_HPP

class UWBP_RvMinigameActionNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* RevealAnimation2;                                         // 0x0268 (size: 0x8)
    class UWidgetAnimation* RevealAnimation1;                                         // 0x0270 (size: 0x8)
    class UImage* background;                                                         // 0x0278 (size: 0x8)
    class UOverlay* Content;                                                          // 0x0280 (size: 0x8)
    class UImage* GameInfoBG_Image;                                                   // 0x0288 (size: 0x8)
    class UTextBlock* PressToSpeedUp_TXT;                                             // 0x0290 (size: 0x8)
    FText PopupMessage;                                                               // 0x0298 (size: 0x18)
    class UTexture2D* PopupIcon;                                                      // 0x02B0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void PlayRevealAnimation(int32 Variant);
    void ExecuteUbergraph_WBP_RvMinigameActionNotification(int32 EntryPoint);
}; // Size: 0x2B8

#endif
