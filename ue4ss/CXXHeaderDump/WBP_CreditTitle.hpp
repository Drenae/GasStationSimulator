#ifndef UE4SS_SDK_WBP_CreditTitle_HPP
#define UE4SS_SDK_WBP_CreditTitle_HPP

class UWBP_CreditTitle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TitleTXT;                                                       // 0x0268 (size: 0x8)
    FText SetTitleTXT;                                                                // 0x0270 (size: 0x18)
    class UFont* SetFontType;                                                         // 0x0288 (size: 0x8)
    int32 SetFontSize;                                                                // 0x0290 (size: 0x4)
    bool IsTitleTXT;                                                                  // 0x0294 (size: 0x1)
    float TitleXPadding;                                                              // 0x0298 (size: 0x4)
    float NameXpadding;                                                               // 0x029C (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CreditTitle(int32 EntryPoint);
}; // Size: 0x2A0

#endif
