#ifndef UE4SS_SDK_Interaction_Info_WBP_HPP
#define UE4SS_SDK_Interaction_Info_WBP_HPP

class UInteraction_Info_WBP_C : public UInteractionInfoWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UTextBlock* ConnectingTxt;                                                  // 0x02C0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_33;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_143;                                                          // 0x02D8 (size: 0x8)
    class UOverlay* Interaction;                                                      // 0x02E0 (size: 0x8)
    class UHorizontalBox* OLD_HORIZONTAL_DELE;                                        // 0x02E8 (size: 0x8)
    class UImage* Side_1;                                                             // 0x02F0 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x02F8 (size: 0x8)
    TEnumAsByte<ENUM_INTERACTION_PREFIX::Type> ENUM_PREFIX;                           // 0x0300 (size: 0x1)
    TEnumAsByte<ENUM_INTERACTION_BUTTON::Type> ENUM_BUTTON;                           // 0x0301 (size: 0x1)
    TEnumAsByte<ENUM_INTERACTION_SOFIX::Type> ENUM_SOFIX;                             // 0x0302 (size: 0x1)
    TEnumAsByte<ENUM_INTERACTION_ICON::Type> ENUM_ICONS;                              // 0x0303 (size: 0x1)
    class UDataTable* DT_NOTIFICATION_ICON;                                           // 0x0308 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressBarImage;                                 // 0x0310 (size: 0x8)
    bool UpdatingProgressBar;                                                         // 0x0318 (size: 0x1)
    float ProgressBarTime;                                                            // 0x031C (size: 0x4)
    float ProgressBarCurrentTime;                                                     // 0x0320 (size: 0x4)
    bool NewVar_0;                                                                    // 0x0324 (size: 0x1)

    void OnVisibilityChange(ESlateVisibility InVisibility);
    void SetImageVisibility(ESlateVisibility InVisibility);
    void OnInitialized();
    void ProgressBarStartDisplay(float InteractionTime);
    void ProgressBarEndDisplay(bool InteractionSuccesfull);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Interaction_Info_WBP(int32 EntryPoint);
}; // Size: 0x325

#endif
