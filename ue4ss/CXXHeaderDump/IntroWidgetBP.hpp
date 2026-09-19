#ifndef UE4SS_SDK_IntroWidgetBP_HPP
#define UE4SS_SDK_IntroWidgetBP_HPP

class UIntroWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UWidgetAnimation* AnyKeyPulse;                                              // 0x0608 (size: 0x8)
    class UWidgetAnimation* FadeGameLogo;                                             // 0x0610 (size: 0x8)
    class UWidgetAnimation* FadeMenuScene;                                            // 0x0618 (size: 0x8)
    class UWidgetAnimation* FadeCompanyLogo;                                          // 0x0620 (size: 0x8)
    class UImage* CompanyLogoImage;                                                   // 0x0628 (size: 0x8)
    class UImage* GameTitleLogoImage;                                                 // 0x0630 (size: 0x8)
    class UImage* GradientUnderlay;                                                   // 0x0638 (size: 0x8)
    bool bIsReady;                                                                    // 0x0640 (size: 0x1)
    bool bIsGameLogoShown;                                                            // 0x0641 (size: 0x1)
    bool bIsMenuSceneShown;                                                           // 0x0642 (size: 0x1)
    bool bIsIntroReadyEnd;                                                            // 0x0643 (size: 0x1)

    void StopIntroAnimation(class UWidgetAnimation* InAnimation);
    void PlayIntroAnimation(class UWidgetAnimation* InAnimation, bool LoopAnimation);
    void JumpToNextPart(bool& bIsAtEnd);
    void OnCompanyLogoBegin();
    void OnCompanyLogoEnd();
    void OnGameLogoEnd();
    void OnGameLogoBegin();
    void OnFadeMenuSceneBegin();
    void OnFadeMenuSceneEnd();
    void Construct();
    void OnPressedAnyKey();
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void ExecuteUbergraph_IntroWidgetBP(int32 EntryPoint);
}; // Size: 0x644

#endif
