#ifndef UE4SS_SDK_DECORATION_MONEY_WIDGET_HPP
#define UE4SS_SDK_DECORATION_MONEY_WIDGET_HPP

class UDECORATION_MONEY_WIDGET_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UImage* Image_165;                                                          // 0x0278 (size: 0x8)
    class UImage* MoneyIcon_Image;                                                    // 0x0280 (size: 0x8)
    class UTextBlock* MoneyTXT;                                                       // 0x0288 (size: 0x8)
    float SetMoney;                                                                   // 0x0290 (size: 0x4)
    class UTaskBase* Task;                                                            // 0x0298 (size: 0x8)
    class UTexture2D* IconToAssign;                                                   // 0x02A0 (size: 0x8)

    void CashAnimation();
    void CustomEvent_0();
    void Construct();
    void ExecuteUbergraph_DECORATION_MONEY_WIDGET(int32 EntryPoint);
}; // Size: 0x2A8

#endif
