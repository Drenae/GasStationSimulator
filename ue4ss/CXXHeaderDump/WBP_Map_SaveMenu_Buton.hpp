#ifndef UE4SS_SDK_WBP_Map_SaveMenu_Buton_HPP
#define UE4SS_SDK_WBP_Map_SaveMenu_Buton_HPP

class UWBP_Map_SaveMenu_Buton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UButton* Button;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0280 (size: 0x8)
    FText TextToSet;                                                                  // 0x0288 (size: 0x18)
    FWBP_Map_SaveMenu_Buton_COnMapButtonClicked OnMapButtonClicked;                   // 0x02A0 (size: 0x10)
    void OnMapButtonClicked(FString MapName, EDLCName DLCName);
    FString MapName;                                                                  // 0x02B0 (size: 0x10)
    FName StrokeSize;                                                                 // 0x02C0 (size: 0x8)
    EDLCName DlcRequired;                                                             // 0x02C8 (size: 0x1)

    void SetClicked(bool IsClicked);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_Map_SaveMenu_Buton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_Map_SaveMenu_Buton(int32 EntryPoint);
    void OnMapButtonClicked__DelegateSignature(FString MapName, EDLCName DLCName);
}; // Size: 0x2C9

#endif
