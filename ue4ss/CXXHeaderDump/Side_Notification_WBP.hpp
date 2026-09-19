#ifndef UE4SS_SDK_Side_Notification_WBP_HPP
#define UE4SS_SDK_Side_Notification_WBP_HPP

class USide_Notification_WBP_C : public USideNotification
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x02A0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02A8 (size: 0x8)
    class UImage* Image_125;                                                          // 0x02B0 (size: 0x8)
    class UImage* Image_127;                                                          // 0x02B8 (size: 0x8)
    class UImage* Image_414;                                                          // 0x02C0 (size: 0x8)
    class UImage* New_Icon;                                                           // 0x02C8 (size: 0x8)
    class UTextBlock* NotificationPrefix;                                             // 0x02D0 (size: 0x8)
    class UTextBlock* NotificationSofix;                                              // 0x02D8 (size: 0x8)
    FText SetSofix;                                                                   // 0x02E0 (size: 0x18)
    FText SetPrefix;                                                                  // 0x02F8 (size: 0x18)
    class UTexture2D* SetIcon;                                                        // 0x0310 (size: 0x8)
    int32 Amount_0;                                                                   // 0x0318 (size: 0x4)
    TSoftClassPtr<UGSSQuest> QuestVisibility;                                         // 0x0320 (size: 0x28)

    void Construct();
    void OnUpdateNotification();
    void ExecuteUbergraph_Side_Notification_WBP(int32 EntryPoint);
}; // Size: 0x348

#endif
