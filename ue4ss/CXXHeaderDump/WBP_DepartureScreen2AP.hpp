#ifndef UE4SS_SDK_WBP_DepartureScreen2AP_HPP
#define UE4SS_SDK_WBP_DepartureScreen2AP_HPP

class UWBP_DepartureScreen2AP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* BG_Color_Img;                                                       // 0x0268 (size: 0x8)
    class USizeBox* BlockerOnSkillCD_Sizer;                                           // 0x0270 (size: 0x8)
    class UVerticalBox* Departure_MainHorizontal;                                     // 0x0278 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0288 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0290 (size: 0x8)
    class UBorder* OnRunWay_Border;                                                   // 0x0298 (size: 0x8)
    class UWidgetSwitcher* OPEN_CLOSED_Switcher;                                      // 0x02A0 (size: 0x8)
    class UOverlay* Overlay_3;                                                        // 0x02A8 (size: 0x8)
    class UOverlay* Overlay_Header;                                                   // 0x02B0 (size: 0x8)
    class UTextBlock* SkillCD_TXT;                                                    // 0x02B8 (size: 0x8)
    class UWBP_ClosedDLCText_C* WBP_ClosedDLCText;                                    // 0x02C0 (size: 0x8)
    TSoftObjectPtr<class ARunway> Runway_Soft_REF;                                    // 0x02C8 (size: 0x28)
    TArray<FPlaneEntry> ScheduleToPopulateList;                                       // 0x02F0 (size: 0x10)
    class UWBP_DepartureScreenSinglePosition_C* OnRunwayPlane_REF;                    // 0x0300 (size: 0x8)
    bool bIsInManager;                                                                // 0x0308 (size: 0x1)
    bool GamePadConfirm;                                                              // 0x0309 (size: 0x1)
    class UConfirmAirplaneRemove_WBP_C* Game Pad Confirm REF;                         // 0x0310 (size: 0x8)

    void OnLoaded_0599B5EB48A35611B41737B5D06AC3EA(class UObject* Loaded);
    void OnLoaded_A81601EA475A244E1E78E9AC96CA9F6A(class UObject* Loaded);
    void Construct();
    void WholeSchedule(const TArray<FPlaneEntry>& Schedule);
    void OnNewPlaneEntry(const FPlaneEntry& NewEntry);
    void OnSchedulUpdated(const TArray<FPlaneEntry>& Schedule);
    void OnAirplaneSet(const class ATradingAirplane* CurrentAirplane);
    void OnTakeOff(ERunway Runway);
    void UpdateTimeToTakeOff(const int32 TimeUpdated);
    void OnitemReveal(const int32 PlaneIndex, const int32 ItemIndex, const EItemIconVisibility IconVisibility);
    void DisableOnTakeOffAndColapse();
    void UpdateTimeText();
    void OnAirstripLoaded();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void GamePadIsThereConfirm(bool IsThereConfirm, class UConfirmAirplaneRemove_WBP_C* GamePadConfirmREF);
    void CustomEvent_0(EDLCName DLCName, bool bActivated);
    void ExecuteUbergraph_WBP_DepartureScreen2AP(int32 EntryPoint);
}; // Size: 0x318

#endif
