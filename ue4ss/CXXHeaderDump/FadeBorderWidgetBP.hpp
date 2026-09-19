#ifndef UE4SS_SDK_FadeBorderWidgetBP_HPP
#define UE4SS_SDK_FadeBorderWidgetBP_HPP

class UFadeBorderWidgetBP_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x05C8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x05D0 (size: 0x8)
    class UBorder* FadeBorder;                                                        // 0x05D8 (size: 0x8)

    void OnFadeInAnimation();
    void OnFadeOutAnimation();
    void ExecuteUbergraph_FadeBorderWidgetBP(int32 EntryPoint);
}; // Size: 0x5E0

#endif
