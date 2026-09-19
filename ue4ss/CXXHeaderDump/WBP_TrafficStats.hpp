#ifndef UE4SS_SDK_WBP_TrafficStats_HPP
#define UE4SS_SDK_WBP_TrafficStats_HPP

class UWBP_TrafficStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* hoveranimtext;                                            // 0x0268 (size: 0x8)
    class UWidgetAnimation* AnimIcon;                                                 // 0x0270 (size: 0x8)
    class UImage* background;                                                         // 0x0278 (size: 0x8)
    class UImage* CurrentEventImage;                                                  // 0x0280 (size: 0x8)
    class UVerticalBox* CurrentFactorBox;                                             // 0x0288 (size: 0x8)
    class UImage* Event_Icon;                                                         // 0x0290 (size: 0x8)
    class UVerticalBox* FactorBox;                                                    // 0x0298 (size: 0x8)
    class UTextBlock* FactorDescription;                                              // 0x02A0 (size: 0x8)
    class UTextBlock* FactorInput;                                                    // 0x02A8 (size: 0x8)
    class UWBP_FactorRow_C* FactorRowDecorations;                                     // 0x02B0 (size: 0x8)
    class UWBP_FactorRow_C* FactorRowEvent;                                           // 0x02B8 (size: 0x8)
    class UWBP_FactorRow_C* FactorRowFuel;                                            // 0x02C0 (size: 0x8)
    class UWBP_FactorRow_C* FactorRowLandmarks;                                       // 0x02C8 (size: 0x8)
    class UWBP_FactorRow_C* FactorRowPopularity;                                      // 0x02D0 (size: 0x8)
    class UWBP_FactorRow_C* FactorRowTime;                                            // 0x02D8 (size: 0x8)
    class UTextBlock* FactorTitle;                                                    // 0x02E0 (size: 0x8)
    class UWidgetSwitcher* IconSwitcher;                                              // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_62;                                                           // 0x0308 (size: 0x8)
    class UImage* Image_103;                                                          // 0x0310 (size: 0x8)
    class UImage* Image_283;                                                          // 0x0318 (size: 0x8)
    class UImage* Image_367;                                                          // 0x0320 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0328 (size: 0x8)
    class UOverlay* RowDetalisBox;                                                    // 0x0330 (size: 0x8)
    class UTextBlock* TrafficImpactNumber;                                            // 0x0338 (size: 0x8)
    class UTextBlock* TrafficWhole;                                                   // 0x0340 (size: 0x8)
    class UTextBlock* Upcoming;                                                       // 0x0348 (size: 0x8)
    class UPC_TrafficStatsField_WBP_C* UpcomingEvent;                                 // 0x0350 (size: 0x8)
    class UVerticalBox* UpcomingEventbox;                                             // 0x0358 (size: 0x8)
    class UImage* UpcomingIcon;                                                       // 0x0360 (size: 0x8)
    FText CurrentTrafficLabel;                                                        // 0x0368 (size: 0x18)
    int32 CurrentEventID;                                                             // 0x0380 (size: 0x4)
    int32 UpcomingEventID;                                                            // 0x0384 (size: 0x4)
    bool CurrentEventValid;                                                           // 0x0388 (size: 0x1)
    bool UpcomingEventValid;                                                          // 0x0389 (size: 0x1)
    FText DefaultCurrentEventTooltip;                                                 // 0x0390 (size: 0x18)
    FText DefaultUpcomingEventTooltip;                                                // 0x03A8 (size: 0x18)
    class UTrafficInfluence_Tooltip_C* ImpactTooltip;                                 // 0x03C0 (size: 0x8)
    class UTrafficInfluence_Tooltip_C* UpcomingEventTooltip;                          // 0x03C8 (size: 0x8)
    FWBP_TrafficStats_COnClosed OnClosed;                                             // 0x03D0 (size: 0x10)
    void OnClosed();
    int32 CurrentIndex;                                                               // 0x03E0 (size: 0x4)
    class UUserWidget* ParentWidget;                                                  // 0x03E8 (size: 0x8)
    TMap<int32, UTexture*> UpcomingEventsImages;                                      // 0x03F0 (size: 0x50)

    void CheckforNewEvent(int32 UpdatedEventID);
    void ShowUpcomingEvent(bool Show);
    void SetChunchumanchu();
    void SetMainTooltipText();
    void Set Row Texts(class UWBP_FactorRow_C* InputPin);
    void NavigateTroughFactorRows(bool Up);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FSlateColor GetFactorInputColor(int32 Index, int32 Low, int32 High);
    void UpdateTooltipDesc();
    class UWidget* GetToolTipWidget_UpcomingEvent();
    void BindFactorRows();
    void UpdateFields();
    void UpdateIncomingEventDescription(int32 EventId);
    void IsCurrentEventValid(bool& EventFound);
    void UpdateValidEventDescription();
    void UpdateTrafficEvents(const int32 CurrentEventID, const int32 UpcomingEventID, const FTimeStruct CurrentEventTimeLeft, const FTimeStruct UpcomingEventTimeLeft);
    void Destruct();
    void UpdateTrafficImpact(const int32 UpdatedImpact);
    void Construct();
    void OnInitialized();
    void FactorRowHoover(class UWBP_FactorRow_C* FactorRow, bool Hovered);
    void OnChunchumanchu VolcanUpdate(EChunchumanchuAnger AngerState, const float Value, const float ValueChanged);
    void Return();
    void PreConstruct(bool IsDesignTime);
    void UpdateKey(bool bNewGamepadMode);
    void ShowFactorRow(class UWBP_FactorRow_C* RowToShow);
    void ExecuteUbergraph_WBP_TrafficStats(int32 EntryPoint);
    void OnClosed__DelegateSignature();
}; // Size: 0x440

#endif
