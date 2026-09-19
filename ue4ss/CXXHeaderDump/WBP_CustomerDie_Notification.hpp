#ifndef UE4SS_SDK_WBP_CustomerDie_Notification_HPP
#define UE4SS_SDK_WBP_CustomerDie_Notification_HPP

class UWBP_CustomerDie_Notification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* WingsFlying;                                              // 0x0270 (size: 0x8)
    class UImage* Equipment_Icon;                                                     // 0x0278 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0280 (size: 0x8)
    class UImage* LWing_Image;                                                        // 0x0288 (size: 0x8)
    class UImage* RWing_Image;                                                        // 0x0290 (size: 0x8)
    class UImage* Skull_Image;                                                        // 0x0298 (size: 0x8)
    class UTexture2D* IconToAssign;                                                   // 0x02A0 (size: 0x8)
    FTimerHandle Handle;                                                              // 0x02A8 (size: 0x8)
    FTimerHandle DisappearTimer;                                                      // 0x02B0 (size: 0x8)
    float TimeToDisappear;                                                            // 0x02B8 (size: 0x4)

    void Construct();
    void OnDie(const FString Reason);
    void OnCloseFinished();
    void ExecuteUbergraph_WBP_CustomerDie_Notification(int32 EntryPoint);
}; // Size: 0x2BC

#endif
