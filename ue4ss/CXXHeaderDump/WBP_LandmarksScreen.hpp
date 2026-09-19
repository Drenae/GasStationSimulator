#ifndef UE4SS_SDK_WBP_LandmarksScreen_HPP
#define UE4SS_SDK_WBP_LandmarksScreen_HPP

class UWBP_LandmarksScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SwitchAnim;                                               // 0x0268 (size: 0x8)
    class UImage* background;                                                         // 0x0270 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x0278 (size: 0x8)
    class UImage* Border;                                                             // 0x0280 (size: 0x8)
    class UImage* flag;                                                               // 0x0288 (size: 0x8)
    class UImage* Image_140;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_344;                                                          // 0x02A0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02A8 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x02B0 (size: 0x8)
    class UWidgetSwitcher* OpenClosedSwitcher;                                        // 0x02B8 (size: 0x8)
    class UOverlay* Overlay_Header;                                                   // 0x02C0 (size: 0x8)
    class UTextBlock* TextBlock_owned;                                                // 0x02C8 (size: 0x8)
    class UTextBlock* TextBlock_price;                                                // 0x02D0 (size: 0x8)
    class UTextBlock* TextBlock_req;                                                  // 0x02D8 (size: 0x8)
    class UWBP_ClosedDLCText_C* WBP_ClosedDLCText;                                    // 0x02E0 (size: 0x8)
    TArray<FPlaneEntry> ScheduleToPopulateList;                                       // 0x02E8 (size: 0x10)
    class UWBP_DepartureScreenSinglePosition_C* OnRunwayPlane_REF;                    // 0x02F8 (size: 0x8)
    class UTexture* Image1;                                                           // 0x0300 (size: 0x8)
    TArray<FLandmarksSlideshow_STRUCT> StructuresList;                                // 0x0308 (size: 0x10)
    int32 NextIndex;                                                                  // 0x0318 (size: 0x4)
    int32 CurrentIndex;                                                               // 0x031C (size: 0x4)
    int32 ReqBPs;                                                                     // 0x0320 (size: 0x4)
    int32 OwnedBPs;                                                                   // 0x0324 (size: 0x4)
    FTimerHandle SwitchLandmarkHandle;                                                // 0x0328 (size: 0x8)

    void SequenceEvent__ENTRYPOINTWBP_LandmarksScreen_0();
    void SetBlueprintsAmount();
    void SetCurrentLandmark();
    void SetNextLandmark();
    void SetItem(UClass* Class, int32 Value);
    void Construct();
    void SwitchLandmark();
    void CustomEvent_0(EDLCName DLCName, bool bActivated);
    void OnDLCEnabled();
    void Destruct();
    void ExecuteUbergraph_WBP_LandmarksScreen(int32 EntryPoint);
}; // Size: 0x330

#endif
