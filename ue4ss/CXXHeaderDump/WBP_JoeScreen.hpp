#ifndef UE4SS_SDK_WBP_JoeScreen_HPP
#define UE4SS_SDK_WBP_JoeScreen_HPP

class UWBP_JoeScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* BlueprintAnim;                                            // 0x0268 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0270 (size: 0x8)
    class UImage* BG_Color_Img;                                                       // 0x0278 (size: 0x8)
    class UImage* BG_Color_Img_1;                                                     // 0x0280 (size: 0x8)
    class UHorizontalBox* HorizontalBox_money_popularity;                             // 0x0288 (size: 0x8)
    class UImage* Image_118;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_163;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_184;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_272;                                                          // 0x02A8 (size: 0x8)
    class UImage* Image_275;                                                          // 0x02B0 (size: 0x8)
    class UImage* Image_cogency;                                                      // 0x02B8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02C0 (size: 0x8)
    class UImage* Item_Image;                                                         // 0x02C8 (size: 0x8)
    class UTextBlock* ItemAmount_TXT_1;                                               // 0x02D0 (size: 0x8)
    class UImage* Joe_Item_Image;                                                     // 0x02D8 (size: 0x8)
    class UTextBlock* Money_Amount;                                                   // 0x02E0 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_64;                               // 0x02E8 (size: 0x8)
    class UWidgetSwitcher* OpenClosedSwitcher;                                        // 0x02F0 (size: 0x8)
    class UOverlay* Overlay_Header;                                                   // 0x02F8 (size: 0x8)
    class UTextBlock* popularity_amount;                                              // 0x0300 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_name_Joe;                                             // 0x0318 (size: 0x8)
    class UWBP_ClosedDLCText_C* WBP_ClosedDLCText;                                    // 0x0320 (size: 0x8)
    TSoftObjectPtr<class ARunway> Runway_Soft_REF;                                    // 0x0328 (size: 0x28)
    TArray<FPlaneEntry> ScheduleToPopulateList;                                       // 0x0350 (size: 0x10)
    class UWBP_DepartureScreenSinglePosition_C* OnRunwayPlane_REF;                    // 0x0360 (size: 0x8)
    class UTexture2D* JoesItemIcon;                                                   // 0x0368 (size: 0x8)
    FText JoesItemName;                                                               // 0x0370 (size: 0x18)

    void SetItem(TSoftClassPtr<AItem> Class, int32 Value);
    void Construct();
    void OnJoeOrderGenerated_Event_0(const FJoeOrderInfo& JoeOrderInfo);
    void CustomEvent_0(EDLCName DLCName, bool bActivated);
    void ExecuteUbergraph_WBP_JoeScreen(int32 EntryPoint);
}; // Size: 0x388

#endif
