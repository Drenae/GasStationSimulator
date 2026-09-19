#ifndef UE4SS_SDK_WBP_PlatformPanelNew_HPP
#define UE4SS_SDK_WBP_PlatformPanelNew_HPP

class UWBP_PlatformPanelNew_C : public UJunkyardPlatformPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UWidgetAnimation* HighlightSwitchCategoryButtons;                           // 0x0328 (size: 0x8)
    class UWidgetAnimation* PriceHorizontalBoxAnimRed;                                // 0x0330 (size: 0x8)
    class UWidgetAnimation* PriceHorizontalBoxAnimGreen;                              // 0x0338 (size: 0x8)
    class UWidgetAnimation* EvaluationButtonHide;                                     // 0x0340 (size: 0x8)
    class UWidgetAnimation* CarPartsAnim;                                             // 0x0348 (size: 0x8)
    class UWidgetAnimation* CategoryChangeAnim;                                       // 0x0350 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0358 (size: 0x8)
    class UImage* BGGradient1;                                                        // 0x0360 (size: 0x8)
    class UGSSButton* CancelButton;                                                   // 0x0368 (size: 0x8)
    class UCanvasPanel* CanvasPanel_64;                                               // 0x0370 (size: 0x8)
    class UTextBlock* CarName;                                                        // 0x0378 (size: 0x8)
    class UVerticalBox* CarParts_VerticalBox;                                         // 0x0380 (size: 0x8)
    class UHorizontalBox* CarPartsInventoryHorizontal;                                // 0x0388 (size: 0x8)
    class UScrollBox* CarPartsScroll;                                                 // 0x0390 (size: 0x8)
    class UHorizontalBox* CarSlotButtons;                                             // 0x0398 (size: 0x8)
    class UTextBlock* CarTier_TXT;                                                    // 0x03A0 (size: 0x8)
    class UScrollBox* Categories_ScrollBox;                                           // 0x03A8 (size: 0x8)
    class UVerticalBox* Categories_vertical;                                          // 0x03B0 (size: 0x8)
    class UWidgetSwitcher* Categories_WidgetSwitcher;                                 // 0x03B8 (size: 0x8)
    class UGSSButton* Category_button;                                                // 0x03C0 (size: 0x8)
    class UTextBlock* CategoryName_Text;                                              // 0x03C8 (size: 0x8)
    class UImage* Checkboard;                                                         // 0x03D0 (size: 0x8)
    class UEditableTextBox* EditableTextBox_WreckName;                                // 0x03D8 (size: 0x8)
    class UGSSButton* EvaluationButton;                                               // 0x03E0 (size: 0x8)
    class UHorizontalBox* FlipDecalBox;                                               // 0x03E8 (size: 0x8)
    class UOverlay* Footer_MainOverlay;                                               // 0x03F0 (size: 0x8)
    class UGSS_Button_WBP_C* GSS_Button_Apply;                                        // 0x03F8 (size: 0x8)
    class UHorizontalBox* Headline_Horizontal;                                        // 0x0400 (size: 0x8)
    class UImage* HighlightContracts;                                                 // 0x0408 (size: 0x8)
    class UImage* HighlightPainting;                                                  // 0x0410 (size: 0x8)
    class UImage* HighlightPart;                                                      // 0x0418 (size: 0x8)
    class UVerticalBox* HorizontalBox_categories;                                     // 0x0420 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_75;                                                           // 0x0430 (size: 0x8)
    class UImage* Image_95;                                                           // 0x0438 (size: 0x8)
    class UImage* Image_143;                                                          // 0x0440 (size: 0x8)
    class UImage* Image_191;                                                          // 0x0448 (size: 0x8)
    class UHorizontalBox* Input1_HorizontalBox;                                       // 0x0450 (size: 0x8)
    class UHorizontalBox* Input1_HorizontalBox_1;                                     // 0x0458 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_DeleteDecal;                        // 0x0460 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_FlipDecal;                          // 0x0468 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_NextCategory;                       // 0x0470 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_NextSegment;                        // 0x0478 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_PlaceDecal;                         // 0x0480 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_PrevCategory;                       // 0x0488 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_PreviousSegment;                    // 0x0490 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_RotateCameraDown;                   // 0x0498 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_RotateCameraUp;                     // 0x04A0 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_RotateDecalLeft;                    // 0x04A8 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_RotateDecalRight;                   // 0x04B0 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_RotateLeft;                         // 0x04B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_RotateRight;                        // 0x04C0 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_ScaleDecalDown;                     // 0x04C8 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_ScaleDecalUp;                       // 0x04D0 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyBindedAction_Tutorial;                           // 0x04D8 (size: 0x8)
    class UWBP_ArrowButton_C* LeftArrow;                                              // 0x04E0 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial_109;                              // 0x04E8 (size: 0x8)
    class UGSSButton* NextCategory_Button_1;                                          // 0x04F0 (size: 0x8)
    class UOverlay* Overlay_Tip;                                                      // 0x04F8 (size: 0x8)
    class UOverlay* Overlay_Tutorial;                                                 // 0x0500 (size: 0x8)
    class UHorizontalBox* PlaceDecal;                                                 // 0x0508 (size: 0x8)
    class UGSSButton* PreviousCategory_Button;                                        // 0x0510 (size: 0x8)
    class UHorizontalBox* Price_HorizontalBox;                                        // 0x0518 (size: 0x8)
    class UHorizontalBox* RemoveDecalBox;                                             // 0x0520 (size: 0x8)
    class UWBP_ArrowButton_C* RightArrow;                                             // 0x0528 (size: 0x8)
    class UHorizontalBox* RotateDecal;                                                // 0x0530 (size: 0x8)
    class UHorizontalBox* ScaleDecal;                                                 // 0x0538 (size: 0x8)
    class UHorizontalBox* SegmentsBox;                                                // 0x0540 (size: 0x8)
    class USpacer* Spacer_97;                                                         // 0x0548 (size: 0x8)
    class UHorizontalBox* Statistic_MainHorziontal;                                   // 0x0550 (size: 0x8)
    class UPlatformCarStats_C* Stats_Acceleration;                                    // 0x0558 (size: 0x8)
    class UPlatformCarStats_C* Stats_Handling;                                        // 0x0560 (size: 0x8)
    class UOverlay* Stats_Overlay;                                                    // 0x0568 (size: 0x8)
    class UPlatformCarStats_C* Stats_Strenght;                                        // 0x0570 (size: 0x8)
    class UPlatformCarStats_C* Stats_TopSpeed;                                        // 0x0578 (size: 0x8)
    class UTextBlock* Text_Price;                                                     // 0x0580 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0588 (size: 0x8)
    class UTextBlock* TextBlock_tip;                                                  // 0x0590 (size: 0x8)
    class UHorizontalBox* TopNavigation_HorizontalBox;                                // 0x0598 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_ButtonLeft;                                     // 0x05A0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_ButtonRight;                                    // 0x05A8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_ButtonRight_1;                                  // 0x05B0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_ButtonTop;                                      // 0x05B8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftShoulder;                                   // 0x05C0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft;                                       // 0x05C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveRight;                                      // 0x05D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveRight_1;                                    // 0x05D8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightShoulder;                                  // 0x05E0 (size: 0x8)
    class UWBP_PlatformButton_C* WBP_PlatformButton_decals;                           // 0x05E8 (size: 0x8)
    class UWBP_PlatformButton_C* WBP_PlatformButton_paint;                            // 0x05F0 (size: 0x8)
    class UWBP_PlatformContractHolder_C* WBP_PlatformContractHolder;                  // 0x05F8 (size: 0x8)
    class UWBP_PlatformCustomization_C* WBP_PlatformCustomization;                    // 0x0600 (size: 0x8)
    class UWBP_PlatformDecals_C* WBP_PlatformDecals;                                  // 0x0608 (size: 0x8)
    class UWBP_PlatformEvaluationTooltip_C* WBP_PlatformEvaluationTooltip;            // 0x0610 (size: 0x8)
    class UWBP_PlatformPrice_C* WBP_PlatformPrice;                                    // 0x0618 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_categories;                                 // 0x0620 (size: 0x8)
    class ABP_JunkyardPlatform_C* Platform;                                           // 0x0628 (size: 0x8)
    class UWBP_ConfirmCarExhibition_C* ExhibitionConfirmation;                        // 0x0630 (size: 0x8)
    bool bMoveToExhibitionOnClose;                                                    // 0x0638 (size: 0x1)
    int32 NameCharLimit;                                                              // 0x063C (size: 0x4)
    class AExhibitionSpotSlot* ExhibitionSpotSlot;                                    // 0x0640 (size: 0x8)
    FTimerHandle EvaluationHoverTimer;                                                // 0x0648 (size: 0x8)
    bool bRotateCarRight;                                                             // 0x0650 (size: 0x1)
    bool bRotateCarLeft;                                                              // 0x0651 (size: 0x1)
    class UMaterialInstanceDynamic* MAT_INST_GearProgressBar;                         // 0x0658 (size: 0x8)
    EJunkyardCarPartType CurrentlySelectedSlot;                                       // 0x0660 (size: 0x1)
    bool bPaintWholeCar;                                                              // 0x0661 (size: 0x1)
    TArray<UWBP_PlatformSlotButton_C*> PlatformSlotButtons_Array;                     // 0x0668 (size: 0x10)
    TArray<UWBP_CarPartsButton_C*> CarPartsButtons_Array;                             // 0x0678 (size: 0x10)
    TArray<UWBP_PlatformButton_C*> PlatformButtons_Array;                             // 0x0688 (size: 0x10)
    bool bRotateDecalRight;                                                           // 0x0698 (size: 0x1)
    class AActor* DecalTraceActor;                                                    // 0x06A0 (size: 0x8)
    class UPrimitiveComponent* DecalTraceComponent;                                   // 0x06A8 (size: 0x8)
    bool bRotateDecalLeft;                                                            // 0x06B0 (size: 0x1)
    float DecalRotationOffset;                                                        // 0x06B4 (size: 0x4)
    class UPlatformPanelCarPart_C* PreviewPartButton;                                 // 0x06B8 (size: 0x8)
    int32 CarWidgetIndex;                                                             // 0x06C0 (size: 0x4)
    bool bRotateCameraUp;                                                             // 0x06C4 (size: 0x1)
    bool bRotateCameraDown;                                                           // 0x06C5 (size: 0x1)
    class UWBP_PlatformSlotButton_C* ActiveSlotButtonCategory;                        // 0x06C8 (size: 0x8)
    bool bShowTutorial;                                                               // 0x06D0 (size: 0x1)
    bool bWasTutorial5Shown;                                                          // 0x06D1 (size: 0x1)
    bool bWasTutorial6Shown;                                                          // 0x06D2 (size: 0x1)
    bool bWasTutorial15Shown;                                                         // 0x06D3 (size: 0x1)
    bool bWasTutorial4Shown;                                                          // 0x06D4 (size: 0x1)
    FText TipText;                                                                    // 0x06D8 (size: 0x18)
    bool bLpmHeld;                                                                    // 0x06F0 (size: 0x1)
    bool bCancelChanges;                                                              // 0x06F1 (size: 0x1)
    TArray<FStorageCarPart> PartsToAddToStorage;                                      // 0x06F8 (size: 0x10)
    bool bIsExpanded;                                                                 // 0x0708 (size: 0x1)
    bool bWasTutorial8Shown;                                                          // 0x0709 (size: 0x1)
    bool bWasTutorial9Shown;                                                          // 0x070A (size: 0x1)
    bool bWasTutorial10Shown;                                                         // 0x070B (size: 0x1)
    float ClickedOffset;                                                              // 0x070C (size: 0x4)
    bool bShiftHeld;                                                                  // 0x0710 (size: 0x1)
    bool bWasTutorial11Shown;                                                         // 0x0711 (size: 0x1)
    bool bWasTutorial14Shown;                                                         // 0x0712 (size: 0x1)
    bool bWasTutorial5NewShown;                                                       // 0x0713 (size: 0x1)
    TArray<EJunkyardCarPartType> Categories;                                          // 0x0718 (size: 0x10)
    bool bWasTutorial17Shown;                                                         // 0x0728 (size: 0x1)
    bool bWasTutorial18Shown;                                                         // 0x0729 (size: 0x1)
    bool bWasTutorial13Shown;                                                         // 0x072A (size: 0x1)
    bool bContractTutorial;                                                           // 0x072B (size: 0x1)
    bool bSecondTutorial2;                                                            // 0x072C (size: 0x1)
    bool bDecalTraceHitCar;                                                           // 0x072D (size: 0x1)
    bool bAnyChanges;                                                                 // 0x072E (size: 0x1)
    TArray<FStorageCarPart> PartsToRemoveFromStorage;                                 // 0x0730 (size: 0x10)
    FVector DecalOffset;                                                              // 0x0740 (size: 0xC)
    int32 GamePadCurrentSegment;                                                      // 0x074C (size: 0x4)
    int32 GamePadCurrentCategory;                                                     // 0x0750 (size: 0x4)
    int32 GamePadCurrentCarPart;                                                      // 0x0754 (size: 0x4)
    int32 GamePadCurrentWheelSize;                                                    // 0x0758 (size: 0x4)
    class ASoulCoaster_SimpleSplineRuntime_C* DecalSpline;                            // 0x0760 (size: 0x8)
    int32 GamePadDecalPicked;                                                         // 0x0768 (size: 0x4)
    float PrevPrice;                                                                  // 0x076C (size: 0x4)
    FStorageCarPart VariantFront;                                                     // 0x0770 (size: 0xE0)
    FStorageCarPart VariantBack;                                                      // 0x0850 (size: 0xE0)
    bool IsGamepadNavigationLimited;                                                  // 0x0930 (size: 0x1)
    TMap<FKey, bool> GamepadUnlockedKeys;                                             // 0x0938 (size: 0x50)
    bool IsBindedNextTutorial;                                                        // 0x0988 (size: 0x1)
    bool ApplyButtonUnlocked;                                                         // 0x0989 (size: 0x1)
    float LastPrice;                                                                  // 0x098C (size: 0x4)

    void UpdateAnimationPrice(float NewPrice);
    void ChangePadCategoriesHighlight(int32 Segment);
    void UnlockGamepadNavigation();
    void IsNavigationAllowed(const FKeyEvent& Input, bool& IsAllowed);
    void LimitGamepadNavigation(const TArray<FKey>& UnlockedKeys);
    void HandlePartVariantRemoval(FStorageCarPart RemovedPart);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    void UpdateDecalSplinePosition(const FVector& EndLocation);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void GamePadNavigateBottomBar(FString Action, bool DirectionLeftOrUp);
    void Add Tut to Overlay(class UWidget* Content, class UWidget* Widget);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ThirdTutorialEnd();
    void ThirdTutorial0();
    void ThirdTutorial2();
    void ThirdTutorial1();
    void SecondTutorialEnd();
    void SecondTutorial2();
    void SecondTutorial1();
    void Tutorial16();
    void SortByMatching(const TArray<FStorageCarPart>& InParts, TArray<FStorageCarPart>& OutParts);
    void SortByDirty(const TArray<FStorageCarPart>& InParts, TArray<FStorageCarPart>& OutParts);
    void ShowDecalInputs(bool bShow);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ShowTip();
    void Tutorial15();
    void Tutorial13();
    void Tutorial12_OLD();
    void Tutorial11();
    void Tutorial10();
    void Tutorial9_OLD();
    void Tutorial8_OLD();
    void Tutorial7_OLD();
    void Tutorial6();
    void Tutorial5_NEW();
    void Tutorial18();
    void TryCallTutorial18();
    void Tutorial17();
    void Tutorial5();
    void Tutorial14();
    void Tutorial4();
    void Tutorial3();
    void GetCalculatedDecalPosition(FVector ImpactPoint, FVector TraceEnd, FVector& ImpactAverage);
    void UpdateDecalPosition(class AActor* HitActor, class UPrimitiveComponent* HitComponent, FVector ImpactPoint, FVector TraceEnd);
    void MoveCamera(float InputValue);
    void OnPartAddedOrRemoved();
    void ChangePlannedPaint(FSavedCarPaint CarPaintData);
    void ChangeDecalSize(bool bIncrease);
    void RemoveDecal();
    void SpawnDecalEffect(bool bRemovingDecal, class ADecalToPaint* TargetDecal);
    void ApplyDecal();
    void ClickCategoryButton(class UWBP_PlatformButton_C* Button, int32 WidgetIndex);
    void PreviewPartInVehicle(bool bPreview, EJunkyardCarPartType TargetSlot, FStorageCarPart PartToAddData, class UPlatformPanelCarPart_C* PartButton);
    void FilterBySlot(const TArray<FStorageCarPart>& InParts, EJunkyardCarPartType Slot, TArray<FStorageCarPart>& OutParts);
    void CheckIfPartIsUniversal(TArray<FStorageCarPart>& parts, TArray<FStorageCarPart>& OurParts);
    void FitsVehicleModel(const FStorageCarPart Inpart, bool& bFits);
    void Add Part To Vehicle(FStorageCarPart PartToAddData, EJunkyardCarPartType TargetSlot, class UPlatformPanelCarPart_C* CarPartWidget, bool bRemove);
    void HidePriceEvaluationTooltip();
    void TimerPriceEvaluationTooltip();
    void ShowPriceEvaluationTooltip();
    void UpdateCarParts();
    void SortByEquipped(const TArray<FStorageCarPart>& InParts, TArray<FStorageCarPart>& OutParts);
    void SetupWidget(class ABP_JunkyardPlatform_C* AttachedPlatform);
    void UpdateCarStats(FStorageCarPart OptionalModifier, bool PlayAnimation);
    void Finished_4BD03A884656E1349CC1C19435219B5A();
    void Finished_F4EA3D78493DAC26D9BC9DB1933EE9E1();
    void Construct();
    void Destruct();
    void OnExhibitionOptionSelected(bool bSendToExhibition);
    void BndEvt__WBP_MonitorPanel_EditableTextBox_WreckName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MonitorPanel_EditableTextBox_WreckName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnCustomizationUpdated(FSavedCarPaint NewCarPaint);
    void OnCarPartSlotPressed(EJunkyardCarPartType Slot, class UWBP_PlatformSlotButton_C* Button);
    void BndEvt__WBP_PlatformPanelNew_WBP_PlatformButton_decals_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UWBP_PlatformButton_C* Button);
    void BndEvt__WBP_PlatformPanelNew_WBP_PlatformButton_paint_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(class UWBP_PlatformButton_C* Button);
    void SetupInputs();
    void StartRotatingRight();
    void StopRotatingRight();
    void StopRotatingLeft();
    void StartRotatingLeft();
    void OnScrollUp();
    void OnScrollDown();
    void OnDecalRotateLeftPressed();
    void OnDecalRotateLeftReleased();
    void OnDecalRotateRightPressed();
    void OnDecalRotateRightReleased();
    void FlipDecal();
    void BndEvt__WBP_PlatformPanelNew_WBP_PlatformCustomization_K2Node_ComponentBoundEvent_4_PaintWholeCarCheck__DelegateSignature(bool PaintWholeCar);
    void OnDecalSelected(TSubclassOf<class ADecalToPaint> DecalSelected);
    void ClickedColor1_Event_0(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    void ClickedColor2_Event_0(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    void ClickedColor3_Event_0(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    void CreateSlotButtons();
    void BndEvt__WBP_PlatformPanelNew_GSS_Button_WBP_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
    void BndEvt__WBP_PlatformPanelNew_EvaluationButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformPanelNew_Category_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformPanelNew_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_RewardList_RightArrow_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void BndEvt__WBP_RewardList_LeftArrow_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void OnShiftHeld();
    void OnShiftReleased();
    void BndEvt__WBP_PlatformPanelNew_NextCategory_Button_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformPanelNew_PreviousCategory_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void Setup(class ABP_JunkyardPlatform_C* Platform);
    void OnZPressed();
    void OnXPressed();
    void PressNextCategory();
    void PressPrevCategory();
    void BndEvt__WBP_PlatformPanelNew_WBP_PlatformContractHolder_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature();
    void OnCancelOptionSelected(bool bSendToExhibition);
    void CustomEscape();
    void GamePadClickCancel();
    void GamePadClickBackCategory();
    void GamePadNavigateCategory(bool Left);
    void GamePadClickEvaluation();
    void GamePadClickDecalsPaint(bool Paint);
    void GamepadFlipDecal();
    void GamePadApply();
    void CustomEvent_0();
    void ExecuteUbergraph_WBP_PlatformPanelNew(int32 EntryPoint);
}; // Size: 0x990

#endif
