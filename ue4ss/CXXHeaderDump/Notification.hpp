#ifndef UE4SS_SDK_Notification_HPP
#define UE4SS_SDK_Notification_HPP

class UNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_45;                                                   // 0x0270 (size: 0x8)

    void Finished_23E4A8FA425E5DB66CCFEBBF013B9A11();
    void PlayConstructAnim();
    void ExecuteUbergraph_Notification(int32 EntryPoint);
}; // Size: 0x278

#endif
