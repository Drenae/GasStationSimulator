#ifndef UE4SS_SDK_WBP_MapSelectionButton_HPP
#define UE4SS_SDK_WBP_MapSelectionButton_HPP

class UWBP_MapSelectionButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHover;                                                  // 0x0268 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x0270 (size: 0x8)
    class UButton* Button_22;                                                         // 0x0278 (size: 0x8)
    class UNamedSlot* FlowerSlot;                                                     // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Logo_Image;                                                         // 0x0290 (size: 0x8)
    class UImage* MainPhoto;                                                          // 0x0298 (size: 0x8)
    class UTextBlock* MapDescription_Text;                                            // 0x02A0 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x02A8 (size: 0x8)
    FText MapName;                                                                    // 0x02B0 (size: 0x18)
    FName MapToOpen;                                                                  // 0x02C8 (size: 0x8)
    FWBP_MapSelectionButton_COnMapSelected OnMapSelected;                             // 0x02D0 (size: 0x10)
    void OnMapSelected(FName MapToOpen);
    EDLCName RequiredDlc;                                                             // 0x02E0 (size: 0x1)
    class UTexture2D* DLC_Logo;                                                       // 0x02E8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_MapSelectionButton_Button_22_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_MapSelectionButton_Button_22_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_MapSelectionButton_Button_22_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadHover(bool Hover);
    void GamePadClick();
    void ExecuteUbergraph_WBP_MapSelectionButton(int32 EntryPoint);
    void OnMapSelected__DelegateSignature(FName MapToOpen);
}; // Size: 0x2F0

#endif
