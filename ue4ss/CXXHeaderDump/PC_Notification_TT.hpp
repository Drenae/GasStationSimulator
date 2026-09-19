#ifndef UE4SS_SDK_PC_Notification_TT_HPP
#define UE4SS_SDK_PC_Notification_TT_HPP

class UPC_Notification_TT_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UTextBlock* Description_TXT;                                                // 0x0270 (size: 0x8)
    class UOverlay* PressKeyOverlay;                                                  // 0x0278 (size: 0x8)
    FText SetDescription;                                                             // 0x0280 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_PC_Notification_TT(int32 EntryPoint);
}; // Size: 0x298

#endif
