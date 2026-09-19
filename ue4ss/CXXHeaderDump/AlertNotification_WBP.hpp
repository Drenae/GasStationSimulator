#ifndef UE4SS_SDK_AlertNotification_WBP_HPP
#define UE4SS_SDK_AlertNotification_WBP_HPP

class UAlertNotification_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UOverlay* PressKeyOverlay;                                                  // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0280 (size: 0x8)
    FText text1;                                                                      // 0x0288 (size: 0x18)
    FText text2;                                                                      // 0x02A0 (size: 0x18)

    void Finished_973F3431437F5C548EE8B7853251B631();
    void Construct();
    void ExecuteUbergraph_AlertNotification_WBP(int32 EntryPoint);
}; // Size: 0x2B8

#endif
