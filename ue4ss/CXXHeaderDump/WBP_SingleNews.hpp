#ifndef UE4SS_SDK_WBP_SingleNews_HPP
#define UE4SS_SDK_WBP_SingleNews_HPP

class UWBP_SingleNews_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverButton;                                              // 0x0268 (size: 0x8)
    class UButton* Button_84;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_111;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_screen;                                                       // 0x0280 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_button;                                               // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_info;                                                 // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_news_name;                                            // 0x02A0 (size: 0x8)
    FText Title;                                                                      // 0x02A8 (size: 0x18)
    class UTexture2D* Screen;                                                         // 0x02C0 (size: 0x8)
    FText Description;                                                                // 0x02C8 (size: 0x18)
    FString URL;                                                                      // 0x02E0 (size: 0x10)
    FText ButtonText;                                                                 // 0x02F0 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_SingleNews_Button_84_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_SingleNews_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_SingleNews_Button_84_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void OnClicked();
    void OnHoovered();
    void OnUnhovered();
    void ExecuteUbergraph_WBP_SingleNews(int32 EntryPoint);
}; // Size: 0x308

#endif
