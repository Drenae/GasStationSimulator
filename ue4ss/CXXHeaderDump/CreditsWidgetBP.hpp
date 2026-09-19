#ifndef UE4SS_SDK_CreditsWidgetBP_HPP
#define UE4SS_SDK_CreditsWidgetBP_HPP

class UCreditsWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UWidgetAnimation* AutoScrollCreditsNoEvent;                                 // 0x0608 (size: 0x8)
    class UWidgetAnimation* AutoScrollCredits;                                        // 0x0610 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0618 (size: 0x8)
    class UCanvasPanel* CreditsCanvas;                                                // 0x0620 (size: 0x8)
    class UImage* Image;                                                              // 0x0628 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0630 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0638 (size: 0x8)
    class UImage* Image_240;                                                          // 0x0640 (size: 0x8)
    class UImage* Image_532;                                                          // 0x0648 (size: 0x8)
    class UVerticalBox* ScrollingVertical;                                            // 0x0650 (size: 0x8)
    FCreditsWidgetBP_COnEnd OnEnd;                                                    // 0x0658 (size: 0x10)
    void OnEnd();

    void OnCreditsEnd();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnStartCredits();
    void BndEvt__CreditsWidgetBP_NavigationKeyButton_50_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnPressedBack();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_CreditsWidgetBP(int32 EntryPoint);
    void OnEnd__DelegateSignature();
}; // Size: 0x668

#endif
