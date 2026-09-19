#ifndef UE4SS_SDK_SingleDLC_WBP_HPP
#define UE4SS_SDK_SingleDLC_WBP_HPP

class USingleDLC_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UButton* Button_51;                                                         // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_60;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_84;                                                           // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_37;                                                   // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_58;                                                   // 0x02C0 (size: 0x8)
    class UTexture* Screen;                                                           // 0x02C8 (size: 0x8)
    class UTexture2D* Logo;                                                           // 0x02D0 (size: 0x8)
    FText DLCName;                                                                    // 0x02D8 (size: 0x18)
    class UDLC_Widget_C* DLCHolder;                                                   // 0x02F0 (size: 0x8)
    FSingleDLC_WBP_CClick Click;                                                      // 0x02F8 (size: 0x10)
    void Click(class UUserWidget* Widget);
    int32 Index;                                                                      // 0x0308 (size: 0x4)
    bool bIsInCarousel;                                                               // 0x030C (size: 0x1)
    FText HoverText;                                                                  // 0x0310 (size: 0x18)
    FString URL;                                                                      // 0x0328 (size: 0x10)
    FDLCNews DLCNews;                                                                 // 0x0338 (size: 0x40)
    TArray<FText> DisplayTexts;                                                       // 0x0378 (size: 0x10)
    EDLCName DLCEnum;                                                                 // 0x0388 (size: 0x1)
    bool bIsReleased;                                                                 // 0x0389 (size: 0x1)

    void VisualizeDLCCurrentState();
    void BndEvt__SingleDLC_WBP_Button_51_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__SingleDLC_WBP_Button_51_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SingleDLC_WBP_Button_51_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void CustomEvent_0(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void OnDLCOnwershipUpdated(const bool OnlineServicesQueried);
    void GamePadHover(bool Active);
    void GamePadButtonClickDLC();
    void ExecuteUbergraph_SingleDLC_WBP(int32 EntryPoint);
    void Click__DelegateSignature(class UUserWidget* Widget);
}; // Size: 0x38A

#endif
