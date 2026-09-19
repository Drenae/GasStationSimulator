#ifndef UE4SS_SDK_WBP_LootPanel_HPP
#define UE4SS_SDK_WBP_LootPanel_HPP

class UWBP_LootPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0270 (size: 0x8)
    class UTextBlock* CarType_TXT;                                                    // 0x0278 (size: 0x8)
    class UImage* Image_87;                                                           // 0x0280 (size: 0x8)
    class UVerticalBox* LootVertical;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* LottedMoeny_TXT;                                                // 0x0290 (size: 0x8)
    class UWBP_LockpickingHUD_C* LockInfoHUD;                                         // 0x0298 (size: 0x8)
    class UWBP_LockpickingHUD_C* MainLocpickREF;                                      // 0x02A0 (size: 0x8)

    void Construct();
    void SetMoneyLooted(float LottedMoeny);
    void ExecuteUbergraph_WBP_LootPanel(int32 EntryPoint);
}; // Size: 0x2A8

#endif
