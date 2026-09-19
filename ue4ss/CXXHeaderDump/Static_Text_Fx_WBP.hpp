#ifndef UE4SS_SDK_Static_Text_Fx_WBP_HPP
#define UE4SS_SDK_Static_Text_Fx_WBP_HPP

class UStatic_Text_Fx_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* ActionKeyGamePad;                                                   // 0x0268 (size: 0x8)
    class UTextBlock* Hold;                                                           // 0x0270 (size: 0x8)
    class UImage* Image_72;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0280 (size: 0x8)
    class UOverlay* OverlayText;                                                      // 0x0288 (size: 0x8)
    FText SetText;                                                                    // 0x0290 (size: 0x18)

    void UpdateText(FText NewText, bool NoActionKeyTXT);
    void ExecuteUbergraph_Static_Text_Fx_WBP(int32 EntryPoint);
}; // Size: 0x2A8

#endif
