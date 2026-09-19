#ifndef UE4SS_SDK_WBP_DepartureScreenAP_HPP
#define UE4SS_SDK_WBP_DepartureScreenAP_HPP

class UWBP_DepartureScreenAP_C : public UUserWidget
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
    class UOverlay* Overlay_Header;                                                   // 0x02A8 (size: 0x8)
    class UTextBlock* SkillCD_TXT;                                                    // 0x02B0 (size: 0x8)
    class UWBP_ClosedDLCText_C* WBP_ClosedDLCText;                                    // 0x02B8 (size: 0x8)
    TSoftObjectPtr<class ARunway> Runway_Soft_REF;                                    // 0x02C0 (size: 0x28)
    TArray<FPlaneEntry> ScheduleToPopulateList;                                       // 0x02E8 (size: 0x10)
    class UWBP_DepartureScreenSinglePosition_C* OnRunwayPlane_REF;                    // 0x02F8 (size: 0x8)
    bool bIsInManager;                                                                // 0x0300 (size: 0x1)
    bool Confirm;                                                                     // 0x0301 (size: 0x1)
    bool GamePadConfirm;                                                              // 0x0302 (size: 0x1)
    class UConfirmAirplaneRemove_WBP_C* GamePadConfirmREF;                            // 0x0308 (size: 0x8)

    void OnLoaded_B055CDD74D5E6608962E7A809F6AE633(class UObject* Loaded);
    void OnLoaded_F3C7B0D34CA02FDF4379898D4228B41E(class UObject* Loaded);
    void Construct();
    void WholeSchedule(const TArray<FPlaneEntry>& Schedule);
    void OnNewPlaneEntry(const FPlaneEntry& NewEntry);
    void OnSchedulUpdated(const TArray<FPlaneEntry>& Schedule);
    void OnAirplaneSet(const class ATradingAirplane* CurrentAirplane);
    void OnTakeOff(ERunway Runway);
    void UpdateTimeToTakeOff(const int32 TimeUpdated);
    void OnitemReveal(const int32 PlaneIndex, const int32 ItemIndex, const EItemIconVisibility IconVisibility);
    void DisableOnTakeOffAndColapse();
    void UpdateTextTime();
    void OnAirstripLoaded();
    void OnAirstripLoadedDelayed();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void GamePadIsThereConfirm(bool IsThereConfirm, class UConfirmAirplaneRemove_WBP_C* ConfirmREF);
    void CustomEvent_0(EDLCName DLCName, bool bActivated);
    void ExecuteUbergraph_WBP_DepartureScreenAP(int32 EntryPoint);
}; // Size: 0x310

#endif
