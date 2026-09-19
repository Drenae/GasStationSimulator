#ifndef UE4SS_SDK_WBP_DepartureScreenSinglePosition_HPP
#define UE4SS_SDK_WBP_DepartureScreenSinglePosition_HPP

class UWBP_DepartureScreenSinglePosition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* GuideBorder;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* ArrivingDepartureAnim;                                    // 0x0270 (size: 0x8)
    class UButton* ActionButtonFlyingToStation;                                       // 0x0278 (size: 0x8)
    class UButton* ActionButtonOnRunway;                                              // 0x0280 (size: 0x8)
    class UImage* BG_Color_Img;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* DepartureArriving_TXT;                                          // 0x0290 (size: 0x8)
    class UImage* DepartureIndicator_IMG;                                             // 0x0298 (size: 0x8)
    class UTextBlock* DepartureState_TXT;                                             // 0x02A0 (size: 0x8)
    class UTextBlock* DepartureTime_Txt;                                              // 0x02A8 (size: 0x8)
    class UButton* FakeButtonHover;                                                   // 0x02B0 (size: 0x8)
    class UButton* FakeButtonHoverLanded;                                             // 0x02B8 (size: 0x8)
    class UImage* FakeFrameGuide;                                                     // 0x02C0 (size: 0x8)
    class UImage* Flag_IMG;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image;                                                              // 0x02D0 (size: 0x8)
    class UImage* Image_148;                                                          // 0x02D8 (size: 0x8)
    class UImage* Image_179;                                                          // 0x02E0 (size: 0x8)
    class UImage* Image_214;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_236;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_294;                                                          // 0x02F8 (size: 0x8)
    class UImage* LandingIndicator_IMG;                                               // 0x0300 (size: 0x8)
    class UHorizontalBox* Main_Horizontal;                                            // 0x0308 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0310 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_Sandstorm;                        // 0x0318 (size: 0x8)
    class UOverlay* Overlay_extra_time;                                               // 0x0320 (size: 0x8)
    class UOverlay* Overlay_Locked;                                                   // 0x0328 (size: 0x8)
    class UOverlay* Overlay_Sandstorm;                                                // 0x0330 (size: 0x8)
    class UHorizontalBox* PilotItems_Horizontal;                                      // 0x0338 (size: 0x8)
    class UTextBlock* PlaneID_Txt;                                                    // 0x0340 (size: 0x8)
    class UHorizontalBox* PlayerItems_Horizontal;                                     // 0x0348 (size: 0x8)
    class UProgressBar* ProgressBarPlayersItems;                                      // 0x0350 (size: 0x8)
    class UProgressBar* ProgressBarPlayersItems_1;                                    // 0x0358 (size: 0x8)
    class UOverlay* RemovePlaneButtons_Overlay;                                       // 0x0360 (size: 0x8)
    class UImage* RemoveXrunway_IMG;                                                  // 0x0368 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0370 (size: 0x8)
    class URetainerBox* RetainerBox_1;                                                // 0x0378 (size: 0x8)
    class UTextBlock* TextBlock_84;                                                   // 0x0380 (size: 0x8)
    int32 Index;                                                                      // 0x0388 (size: 0x4)
    int32 SecondToDeparture;                                                          // 0x038C (size: 0x4)
    bool SpawnAsLanded;                                                               // 0x0390 (size: 0x1)
    class UWBP_DepartureScreenAP_C* DepartureScreen;                                  // 0x0398 (size: 0x8)
    class UConfirmAirplaneRemove_WBP_C* ConfirmRemovePlaneREF;                        // 0x03A0 (size: 0x8)
    FPlaneEntry PlaneStructureREF;                                                    // 0x03A8 (size: 0x80)
    class ATradingAirplane* AirPlaneOnRunway;                                         // 0x0428 (size: 0x8)
    class UWBP_DepartureScreen2AP_C* DepartureScreen_2;                               // 0x0430 (size: 0x8)
    bool bIsInAirportManager;                                                         // 0x0438 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x0440 (size: 0x8)
    FWBP_DepartureScreenSinglePosition_CGamePadConfirmCreated GamePadConfirmCreated;  // 0x0448 (size: 0x10)
    void GamePadConfirmCreated();
    bool GamePadHovered;                                                              // 0x0458 (size: 0x1)

    void BndEvt__WBP_DepartureScrenAP_Button_12_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void UpdateDepartureTime(int32 UpdatedDepartureTime, float BarPercentage);
    void RefreshOnNewPlaneLnaded();
    void RevealItem(bool BuyItem, int32 ItemIndex, EItemIconVisibility IconVisibility);
    void BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonOnRunway_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonFlyingToStation_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonFlyingToStation_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonOnRunway_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_DepartureScreenSinglePosition_ActionButtonOnRunway_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void FakeHover();
    void FakeUnhover();
    void SetVizualWithDelay();
    void UpdateTextTime();
    void TakeOff();
    void DisableOnTakeOffAndColapse();
    void Destruct();
    void OnAirportSandstormStarted_Event_0();
    void OnAirportSandstormFinished_Event_0();
    void OnExtraTimeSkillUsed_Event_0();
    void OnExtraTimeSkillFinished_Event_0();
    void OnAirplaneStautsChanged(ERunway Runway, ECurrentStatus CurrentStatus);
    void SetEventsVisuals();
    void Unhover();
    void StartGuideOnQuest(FUnlockableUIState NewUnlockableUIState);
    void GamePadDenyPlane();
    void GamePadNotifyConfirmRemove();
    void GamePadDenayPlaneFlyingToStation();
    void ExecuteUbergraph_WBP_DepartureScreenSinglePosition(int32 EntryPoint);
    void GamePadConfirmCreated__DelegateSignature();
}; // Size: 0x459

#endif
