#ifndef UE4SS_SDK_WBP_MapSelection_HPP
#define UE4SS_SDK_WBP_MapSelection_HPP

class UWBP_MapSelection_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0608 (size: 0x8)
    class UBorder* BackgroundBorder;                                                  // 0x0610 (size: 0x8)
    class UImage* BgHeadline_Image;                                                   // 0x0618 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0620 (size: 0x8)
    class UImage* CircularGradient;                                                   // 0x0628 (size: 0x8)
    class UHorizontalBox* HorizontalBox_43;                                           // 0x0630 (size: 0x8)
    class UImage* Image_77;                                                           // 0x0638 (size: 0x8)
    class UWBP_MapSelectionButton_C* WBP_MapSelectionButton;                          // 0x0640 (size: 0x8)
    class UWBP_MapSelectionButton_C* WBP_MapSelectionButton_1;                        // 0x0648 (size: 0x8)
    class UWBP_MapSelectionButton_C* WBP_MapSelectionButton_2;                        // 0x0650 (size: 0x8)
    TArray<UWBP_MapSelectionButton_C*> MapsButtons;                                   // 0x0658 (size: 0x10)
    int32 GamePadCurrentIndex;                                                        // 0x0668 (size: 0x4)

    void Construct();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnPressedBack();
    void Destruct();
    void BndEvt__WBP_MapSelection_BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnPressedLeft();
    void OnPressedRight();
    void OnPressedSelect();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_MapSelection(int32 EntryPoint);
}; // Size: 0x66C

#endif
