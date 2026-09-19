#ifndef UE4SS_SDK_WBP_LockpickingHUD_HPP
#define UE4SS_SDK_WBP_LockpickingHUD_HPP

class UWBP_LockpickingHUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* TutorialBounceAnim;                                       // 0x0268 (size: 0x8)
    class UWidgetAnimation* TutorialAnimationFade;                                    // 0x0270 (size: 0x8)
    class UWidgetAnimation* Notification;                                             // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* A_TO_ROTATE_Tutorial;                               // 0x0280 (size: 0x8)
    class UOverlay* AfterLootingOV;                                                   // 0x0288 (size: 0x8)
    class UWBP_KeyBindedAction_C* D_TO_ROTATE_Tutorial;                               // 0x0290 (size: 0x8)
    class UHorizontalBox* GamePadInteraction;                                         // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_52;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_95;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_278;                                                          // 0x02D8 (size: 0x8)
    class UImage* Image_351;                                                          // 0x02E0 (size: 0x8)
    class UOverlay* IMG_Overlay;                                                      // 0x02E8 (size: 0x8)
    class UWBP_KeyBindedAction_C* Jump_Tutorial;                                      // 0x02F0 (size: 0x8)
    class UHorizontalBox* LockedBox;                                                  // 0x02F8 (size: 0x8)
    class UImage* LockIMG;                                                            // 0x0300 (size: 0x8)
    class UOverlay* NoPickLock_Overlay;                                               // 0x0308 (size: 0x8)
    class UTextBlock* NotificationText;                                               // 0x0310 (size: 0x8)
    class UVerticalBox* ObjectInfoBox;                                                // 0x0318 (size: 0x8)
    class UTextBlock* OrTXT;                                                          // 0x0320 (size: 0x8)
    class UOverlay* Overlay_Count;                                                    // 0x0328 (size: 0x8)
    class UVerticalBox* PickingInfoBox;                                               // 0x0330 (size: 0x8)
    class UTextBlock* PrefixTXT;                                                      // 0x0338 (size: 0x8)
    class UCanvasPanel* TutorialCanvas;                                               // 0x0340 (size: 0x8)
    class UTextBlock* TXT_LockName;                                                   // 0x0348 (size: 0x8)
    class UTextBlock* TXT_LockpickAmount;                                             // 0x0350 (size: 0x8)
    class UTextBlock* TXT_LockType;                                                   // 0x0358 (size: 0x8)
    class UTextBlock* TXT_ObjectName;                                                 // 0x0360 (size: 0x8)
    FText LockTypeText;                                                               // 0x0368 (size: 0x18)
    FText ObjectNameText;                                                             // 0x0380 (size: 0x18)
    int32 LockDifficulty;                                                             // 0x0398 (size: 0x4)
    bool IsLocked?;                                                                   // 0x039C (size: 0x1)
    bool InfoBoxVisible?;                                                             // 0x039D (size: 0x1)
    bool LockPickingInfoVisible?;                                                     // 0x039E (size: 0x1)
    FText Lockpicks;                                                                  // 0x03A0 (size: 0x18)

    void SetLockpickCountVisibility(bool bShow);
    ESlateVisibility SetLockPickBoxVisibility();
    ESlateVisibility GetObjectInfoBoxVisibility();
    FText GetLockTypeText();
    ESlateVisibility GetLockedBoxVisibility();
    FText GetObjectName();
    FText GetLockClassText();
    void Finished_2FA14D184B3F9B896A6F7BBA84E53835();
    void LoopTutorialAnim();
    void PlayTutorialAnimation(TEnumAsByte<EUMGSequencePlayMode::Type> HideTutorial);
    void ExecuteUbergraph_WBP_LockpickingHUD(int32 EntryPoint);
}; // Size: 0x3B8

#endif
