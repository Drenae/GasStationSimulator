#ifndef UE4SS_SDK_GSS_NotificationManager_WBP_HPP
#define UE4SS_SDK_GSS_NotificationManager_WBP_HPP

class UGSS_NotificationManager_WBP_C : public UGSS_Notification_Manager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UCanvasPanel* Canvas_Panel_Area;                                            // 0x02B0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02B8 (size: 0x8)

    void GetInformationsForNotification(ENotificationType Type, FText& Sofix, FText& Prefix, class UTexture2D*& Icon, TSoftClassPtr<UGSSQuest>& Quest, bool& bShowAmount);
    void OnCreateNotification(ENotificationType NotificationType, ESpecialCharacterType SpecialCharacterType);
    void ExecuteUbergraph_GSS_NotificationManager_WBP(int32 EntryPoint);
}; // Size: 0x2C0

#endif
