#ifndef UE4SS_SDK_WBP_PlatformCustomization_HPP
#define UE4SS_SDK_WBP_PlatformCustomization_HPP

class UWBP_PlatformCustomization_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* CheckedAnimation;                                         // 0x0268 (size: 0x8)
    class UWidgetAnimation* TripleColorConstruct;                                     // 0x0270 (size: 0x8)
    class UWidgetAnimation* CustomColorConstuct;                                      // 0x0278 (size: 0x8)
    class UWidgetAnimation* AdditionalColorsAnim;                                     // 0x0280 (size: 0x8)
    class UVerticalBox* AdditionalColors_Vertical;                                    // 0x0288 (size: 0x8)
    class UGSSButton* BackButton;                                                     // 0x0290 (size: 0x8)
    class UCheckBox* CheckBox_120;                                                    // 0x0298 (size: 0x8)
    class UGSSButton* CheckButton;                                                    // 0x02A0 (size: 0x8)
    class UWidgetSwitcher* Colors_WidgetSwitcher;                                     // 0x02A8 (size: 0x8)
    class UWidgetSwitcher* ColorSliders_WidgetSwitche;                                // 0x02B0 (size: 0x8)
    class UImage* GamePadCheckBox_IMG;                                                // 0x02B8 (size: 0x8)
    class UWrapBox* HB1Wrap;                                                          // 0x02C0 (size: 0x8)
    class UWrapBox* HB2Wrap;                                                          // 0x02C8 (size: 0x8)
    class UWrapBox* HB3Wrap;                                                          // 0x02D0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PaintWholeCar;                                // 0x02D8 (size: 0x8)
    class UImage* Image_96;                                                           // 0x02E0 (size: 0x8)
    class UImage* MainColor;                                                          // 0x02E8 (size: 0x8)
    class UGSSButton* MainColor_Button;                                               // 0x02F0 (size: 0x8)
    class UImage* MainImage;                                                          // 0x02F8 (size: 0x8)
    class UWrapBox* Material_WrapBox;                                                 // 0x0300 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0308 (size: 0x8)
    class UWrapBox* PaintStyle_wrapbox;                                               // 0x0310 (size: 0x8)
    class UImage* SecondColor;                                                        // 0x0318 (size: 0x8)
    class UGSSButton* SecondColor_Button;                                             // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x0328 (size: 0x8)
    class UImage* ThirdColor;                                                         // 0x0330 (size: 0x8)
    class UGSSButton* ThirdColor_Button;                                              // 0x0338 (size: 0x8)
    class UVerticalBox* ThreeColors_VerticalBox;                                      // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox_AdditionalColors;                                 // 0x0348 (size: 0x8)
    class UVerticalBox* VerticalBox_colors;                                           // 0x0350 (size: 0x8)
    class UWBP_ColorSliders_C* WBP_ColorSliders1;                                     // 0x0358 (size: 0x8)
    class UWBP_ColorSliders_C* WBP_ColorSliders2;                                     // 0x0360 (size: 0x8)
    class UWBP_ColorSliders_C* WBP_ColorSliders3;                                     // 0x0368 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_ButtonRight_1;                                  // 0x0370 (size: 0x8)
    class UWBP_PlatformCustomizationColor_C* WBP_PlatformCustomizationColor_28;       // 0x0378 (size: 0x8)
    class UWBP_PlatformCustomizationColor_C* WBP_PlatformCustomizationColor_29;       // 0x0380 (size: 0x8)
    class UWBP_PlatformCustomizationColor_C* WBP_PlatformCustomizationColor_30;       // 0x0388 (size: 0x8)
    class UWBP_PlatformCustomizationColor_C* WBP_PlatformCustomizationColor_31;       // 0x0390 (size: 0x8)
    class UWBP_PlatformCustomizationColor_C* WBP_PlatformCustomizationColor_32;       // 0x0398 (size: 0x8)
    class UWBP_PlatformCustomizationColor_C* WBP_PlatformCustomizationColor_238;      // 0x03A0 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor1;                                         // 0x03A8 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor2;                                         // 0x03B0 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor3;                                         // 0x03B8 (size: 0x8)
    TArray<FText> CustomizationMaskNames;                                             // 0x03C0 (size: 0x10)
    TArray<FText> MaterialNames;                                                      // 0x03D0 (size: 0x10)
    FSavedCarPaint CarCustomization;                                                  // 0x03E0 (size: 0x44)
    FWBP_PlatformCustomization_COnCustomizationUpdated OnCustomizationUpdated;        // 0x0428 (size: 0x10)
    void OnCustomizationUpdated(FSavedCarPaint NewCarPaint);
    FWBP_PlatformCustomization_CPaintWholeCarCheck PaintWholeCarCheck;                // 0x0438 (size: 0x10)
    void PaintWholeCarCheck(bool PaintWholeCar);
    FWBP_PlatformCustomization_COnMainColorHovered OnMainColorHovered;                // 0x0448 (size: 0x10)
    void OnMainColorHovered(FCarPaintColor CarColor);
    FWBP_PlatformCustomization_COnMainColorUnhovered OnMainColorUnhovered;            // 0x0458 (size: 0x10)
    void OnMainColorUnhovered();
    class UMaterialInstanceDynamic* MAT_TripleColor;                                  // 0x0468 (size: 0x8)
    TArray<UGSSButton*> TripleColorButtons;                                           // 0x0470 (size: 0x10)
    bool bIsActivemain;                                                               // 0x0480 (size: 0x1)
    bool bIsActiveSecond;                                                             // 0x0481 (size: 0x1)
    bool bIsActiveThird;                                                              // 0x0482 (size: 0x1)
    ECustomizationPaintType CurrentPaintType;                                         // 0x0483 (size: 0x1)
    TArray<FCarPaintColorWithIndex> LastUsedColors;                                   // 0x0488 (size: 0x10)
    TArray<UWBP_PlatformCustomizationColor_C*> Hb1Colors;                             // 0x0498 (size: 0x10)
    TArray<UWBP_PlatformCustomizationColor_C*> Hb2Colors;                             // 0x04A8 (size: 0x10)
    TArray<UWBP_PlatformCustomizationColor_C*> Hb3Colors;                             // 0x04B8 (size: 0x10)
    int32 GamePadCurrentSegment;                                                      // 0x04C8 (size: 0x4)
    int32 GamePadCurrentElement;                                                      // 0x04CC (size: 0x4)
    TArray<UWBP_SavedColor_C*> GamePadSavedColorList;                                 // 0x04D0 (size: 0x10)
    TArray<UWrapBox*> GamePadColorsPalet;                                             // 0x04E0 (size: 0x10)
    class UWrapBox* GamePadCurrentColorWrap;                                          // 0x04F0 (size: 0x8)
    TArray<EFinishMaskType> CarMaterialTypes;                                         // 0x04F8 (size: 0x10)
    EJunkyardCarPartType Target Slot;                                                 // 0x0508 (size: 0x1)
    TArray<UWBP_ColorSliders_C*> GamePadColorSliders;                                 // 0x0510 (size: 0x10)
    bool bIsActivemain_GamePad;                                                       // 0x0520 (size: 0x1)
    bool bIsActiveSecond_GamePad;                                                     // 0x0521 (size: 0x1)
    bool bIsActiveThird_GamePad;                                                      // 0x0522 (size: 0x1)

    void HighlightColor(int32 Index);
    void GamePadTripleColorUpdateHover();
    void RefreshColorSquares();
    void RefreshSelectedColors();
    void TogglePaintWholeCar(bool bOn, bool bBlock);
    void ChangeRecentColorValue(FLinearColor Linear Color);
    void ClickRecentColor(FLinearColor SetColor, bool bMetal, int32 ColorIndex);
    void UpdateLastUsedColors();
    void OnPlainSelected(FLinearColor Color, FLinearColor Color2, FLinearColor Color3);
    void TripleColorUpdate();
    void SetUnchecked();
    void SetChecked(bool bLock);
    void SetActivePaintStyle(class UWBP_PlatformCustomizationPaintStyle_C* Button, class UPanelWidget* HorizontalBox);
    void OnPaintStyleSelected(class UWBP_PlatformCustomizationPaintStyle_C* Button, class UPanelWidget* HorizontalBox);
    void SetActiveMaterial(class UWBP_PlatformCustomizationMaterial_C* Button, class UPanelWidget* HorizontalBox);
    void OnMaterialSelected(class UWBP_PlatformCustomizationMaterial_C* Button, class UPanelWidget* HorizontalBox);
    void RefreshToShowAppliedColors(FSavedCarPaint PaintData, EJunkyardCarPartType TargetSlot);
    void OnColorSelected(class UWBP_PlatformCustomizationColor_C* Button, int32 Index, FLinearColor Color, class UPanelWidget* HorizontalBox, class UWBP_ColorSliders_C* ColorSlider, bool bNoColor);
    void PaintCheckChange(bool PaintWholeCar);
    void SetActiveColor(class UWBP_PlatformCustomizationColor_C* Button, class UPanelWidget* HorizontalBox);
    void Setup(FSavedCarPaint CurrentPaintData);
    void UpdateCarPaint();
    void Finished_F049FB9E4EB57E27C0D4528FEB55787A();
    void Finished_DB80279D4BD9775468759F850FA3C2C0();
    void Finished_250644D345941107C495299943F15FBA();
    void Finished_5E4E8E844C6225F22C18979B00C50A2C();
    void Finished_8F1E462A4A685ADC2FCDBE937E5A3DA2();
    void Finished_B40736224E7B932FD5E1D1B7321796C9();
    void Construct();
    void OnColor1Selected(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
    void OnColor2Selected(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
    void OnColor3Selected(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
    void ChangeColor_Event_0(FLinearColor Color);
    void ChangeColor_Event_1(FLinearColor Color);
    void ChangeColor_Event_2(FLinearColor Color);
    void Destruct();
    void BndEvt__WBP_PlatformCustomization_WBP_SavedColor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void BndEvt__WBP_PlatformCustomization_WBP_SavedColor_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void BndEvt__WBP_PlatformCustomization_WBP_SavedColor_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void OnColorHovered_Event_0(FCarPaintColor CarColor);
    void OnColorUnhovered_Event_0();
    void OnMaterialChanged(class UWBP_PlatformCustomizationMaterial_C* Button, EFinishMaskType mask);
    void ViewColorSlidersMain();
    void BndEvt__WBP_PlatformCustomization_BackButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomization_SecondColor_Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomization_ThirdColor_Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void ViewSlidersSecond();
    void ViewSlidersThird();
    void BndEvt__WBP_PlatformCustomization_MainColor_Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void OnPaintStyleSelected_Event_0(class UWBP_PlatformCustomizationPaintStyle_C* Button, ECustomizationPaintType PaintType);
    void BndEvt__WBP_PlatformCustomization_CheckButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void GamePadNavigate(FString Direction);
    void GamePadSetActiveColor(int32 Index);
    void GamePadSetHoverActiveColor(int32 Index, bool Deactive);
    void GamePadActionClicked();
    void GamePadClickPaintAllCheckBox();
    void GamePadClickSliderBackButton();
    void GamePadTurnOffAll();
    void GamePadHoverFirstElement();
    void ExecuteUbergraph_WBP_PlatformCustomization(int32 EntryPoint);
    void OnMainColorUnhovered__DelegateSignature();
    void OnMainColorHovered__DelegateSignature(FCarPaintColor CarColor);
    void PaintWholeCarCheck__DelegateSignature(bool PaintWholeCar);
    void OnCustomizationUpdated__DelegateSignature(FSavedCarPaint NewCarPaint);
}; // Size: 0x523

#endif
