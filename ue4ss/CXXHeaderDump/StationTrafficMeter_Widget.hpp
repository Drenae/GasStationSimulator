#ifndef UE4SS_SDK_StationTrafficMeter_Widget_HPP
#define UE4SS_SDK_StationTrafficMeter_Widget_HPP

class UStationTrafficMeter_Widget_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* EventInfoAnim;                                            // 0x0290 (size: 0x8)
    class UWidgetSwitcher* ArrowSwitcher;                                             // 0x0298 (size: 0x8)
    class UTextBlock* CurrentBoatSpawnTimes_DEBUG;                                    // 0x02A0 (size: 0x8)
    class UTextBlock* CurrentCarSpawnTimes_DEBUG;                                     // 0x02A8 (size: 0x8)
    class UTextBlock* CurrentEventDebug_DEBUG;                                        // 0x02B0 (size: 0x8)
    class UVerticalBox* DebugBox;                                                     // 0x02B8 (size: 0x8)
    class UImage* Event_Icon;                                                         // 0x02C0 (size: 0x8)
    class UImage* ExtremelyLow_VeryLow_Low;                                           // 0x02C8 (size: 0x8)
    class UTextBlock* FuelPriceImpact_DEBUG;                                          // 0x02D0 (size: 0x8)
    class UImage* High_VeryHigh_ExtremelyHigh;                                        // 0x02D8 (size: 0x8)
    class UTextBlock* HourImpact_DEBUG;                                               // 0x02E0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02E8 (size: 0x8)
    class UTextBlock* ImpactText;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* LandmarkImpact_DEBUG;                                           // 0x02F8 (size: 0x8)
    class UTextBlock* LastEvents;                                                     // 0x0300 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0308 (size: 0x8)
    class UImage* Normal;                                                             // 0x0310 (size: 0x8)
    class UTextBlock* PopularityImpact_DEBUG;                                         // 0x0318 (size: 0x8)
    class UTextBlock* SeasonalDecorationImpact_DEBUG;                                 // 0x0320 (size: 0x8)
    class UImage* SecondBG;                                                           // 0x0328 (size: 0x8)
    class UImage* SecondBG_1;                                                         // 0x0330 (size: 0x8)
    class UTextBlock* TrafficImpact_DEBUG;                                            // 0x0338 (size: 0x8)
    class UTextBlock* UpcomingEventDebug_DEBUG;                                       // 0x0340 (size: 0x8)
    class UImage* UpcomingIcon;                                                       // 0x0348 (size: 0x8)
    int32 CurrentEventID;                                                             // 0x0350 (size: 0x4)
    int32 UpcomingEventID;                                                            // 0x0354 (size: 0x4)
    int32 MinTafficImpact;                                                            // 0x0358 (size: 0x4)
    int32 MaxTafficImpact;                                                            // 0x035C (size: 0x4)
    bool CurrentEventValid;                                                           // 0x0360 (size: 0x1)
    bool UpcomingEventValid;                                                          // 0x0361 (size: 0x1)
    bool IsDebugOn;                                                                   // 0x0362 (size: 0x1)

    void GetPastEvents_DEBUG(FString& Output_Get);
    void CalculateCurrentAppeal(float& CurrentAppeal);
    void GameLoaded(const bool GameLoaded);
    void UpdateTrafficMeter(const int32 UpdatedImpact);
    void Destruct();
    void UpdateDebugValues();
    void ToggleDebug();
    void UpdateDebugTrafficEvents(const int32 CurrentEventID, const int32 UpcomingEventID, const FTimeStruct CurrentEventTimeLeft, const FTimeStruct UpcomingEventTimeLeft);
    void CheckVisibility();
    void OnNewUI(FUnlockableUIState NewUnlockableUIState);
    void Construct();
    void ExecuteUbergraph_StationTrafficMeter_Widget(int32 EntryPoint);
}; // Size: 0x363

#endif
