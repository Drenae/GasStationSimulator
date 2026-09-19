#ifndef UE4SS_SDK_MAIN_NOTIFICATION_HPP
#define UE4SS_SDK_MAIN_NOTIFICATION_HPP

class UMAIN_NOTIFICATION_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SideNoteAnim;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* CONSTRUCT_ANIMATION;                                      // 0x0270 (size: 0x8)
    class UImage* Icon_IMG;                                                           // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_58;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_113;                                                          // 0x02A0 (size: 0x8)
    class UOverlay* MiddleNotification_Segment;                                       // 0x02A8 (size: 0x8)
    class UTextBlock* NOTIFICATION_TXT;                                               // 0x02B0 (size: 0x8)
    class UTextBlock* PlusSign;                                                       // 0x02B8 (size: 0x8)
    class UOverlay* Route66_Image;                                                    // 0x02C0 (size: 0x8)
    class UOverlay* SmallNotification_Segment;                                        // 0x02C8 (size: 0x8)
    class UImage* Tidal_Image;                                                        // 0x02D0 (size: 0x8)
    class UTextBlock* TipAmmount;                                                     // 0x02D8 (size: 0x8)
    FText SetTipAmmount;                                                              // 0x02E0 (size: 0x18)
    class UTexture2D* ICON_BRUSH;                                                     // 0x02F8 (size: 0x8)
    TEnumAsByte<Notification_Size::Type> NotificationSize;                            // 0x0300 (size: 0x1)
    class UTexture2D* Set_Icon;                                                       // 0x0308 (size: 0x8)
    FText SetNotificationTitle;                                                       // 0x0310 (size: 0x18)

    void CustomEvent_0();
    void Construct();
    void ExecuteUbergraph_MAIN_NOTIFICATION(int32 EntryPoint);
}; // Size: 0x328

#endif
