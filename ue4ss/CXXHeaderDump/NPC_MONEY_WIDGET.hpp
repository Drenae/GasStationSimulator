#ifndef UE4SS_SDK_NPC_MONEY_WIDGET_HPP
#define UE4SS_SDK_NPC_MONEY_WIDGET_HPP

class UNPC_MONEY_WIDGET_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UImage* Icon_Image;                                                         // 0x0278 (size: 0x8)
    class UImage* Image_165;                                                          // 0x0280 (size: 0x8)
    class UTextBlock* MoneyTXT;                                                       // 0x0288 (size: 0x8)
    float SetMoney;                                                                   // 0x0290 (size: 0x4)
    TSubclassOf<class UTaskBase> TaskClass;                                           // 0x0298 (size: 0x8)
    class UTexture2D* IconToAssign;                                                   // 0x02A0 (size: 0x8)
    EEconomyDetailedYieldType EconomyDetailed;                                        // 0x02A8 (size: 0x1)

    void CashAnimation();
    void Construct();
    void CustomEvent_0();
    void SetReasonImage();
    void ExecuteUbergraph_NPC_MONEY_WIDGET(int32 EntryPoint);
}; // Size: 0x2A9

#endif
