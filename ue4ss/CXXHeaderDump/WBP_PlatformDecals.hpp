#ifndef UE4SS_SDK_WBP_PlatformDecals_HPP
#define UE4SS_SDK_WBP_PlatformDecals_HPP

class UWBP_PlatformDecals_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ThreeColorsConstruct;                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* AdjustColorConstruct;                                     // 0x0270 (size: 0x8)
    class UVerticalBox* AdditionalColors_Vertical;                                    // 0x0278 (size: 0x8)
    class UGSSButton* BackButton;                                                     // 0x0280 (size: 0x8)
    class UWidgetSwitcher* Colors_WidgetSwitcher;                                     // 0x0288 (size: 0x8)
    class UWidgetSwitcher* ColorSliders_WidgetSwitche;                                // 0x0290 (size: 0x8)
    class UWidgetSwitcher* Decal_WidgetSwitcher;                                      // 0x0298 (size: 0x8)
    class UTextBlock* DecalCategory_TXT;                                              // 0x02A0 (size: 0x8)
    class UWrapBox* FullDecals;                                                       // 0x02A8 (size: 0x8)
    class UWrapBox* HB1_WrapBox;                                                      // 0x02B0 (size: 0x8)
    class UWrapBox* HB2_WrapBox;                                                      // 0x02B8 (size: 0x8)
    class UWrapBox* HB3_WrapBox;                                                      // 0x02C0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_DecalsCategories;                             // 0x02C8 (size: 0x8)
    class UImage* MainColor;                                                          // 0x02D0 (size: 0x8)
    class UGSSButton* MainColor_Button;                                               // 0x02D8 (size: 0x8)
    class UImage* MainImage;                                                          // 0x02E0 (size: 0x8)
    class UScrollBox* ScrollBox_decals;                                               // 0x02E8 (size: 0x8)
    class UImage* SecondColor;                                                        // 0x02F0 (size: 0x8)
    class UGSSButton* SecondColor_Button;                                             // 0x02F8 (size: 0x8)
    class UImage* ThirdColor;                                                         // 0x0300 (size: 0x8)
    class UGSSButton* ThirdColor_Button;                                              // 0x0308 (size: 0x8)
    class UVerticalBox* ThreeColors_VerticalBox;                                      // 0x0310 (size: 0x8)
    class UVerticalBox* VerticalBox_decals;                                           // 0x0318 (size: 0x8)
    class UWBP_ArrowButton_C* WBP_ArrowButton_CategoryLeft;                           // 0x0320 (size: 0x8)
    class UWBP_ArrowButton_C* WBP_ArrowButton_CategoryRight;                          // 0x0328 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_1;                                    // 0x0330 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_2;                                    // 0x0338 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_3;                                    // 0x0340 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_4;                                    // 0x0348 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_5;                                    // 0x0350 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_6;                                    // 0x0358 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_7;                                    // 0x0360 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_8;                                    // 0x0368 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_9;                                    // 0x0370 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_10;                                   // 0x0378 (size: 0x8)
    class UWBP_CarDecalSlot_C* WBP_CarDecalSlot_11;                                   // 0x0380 (size: 0x8)
    class UWBP_ColorSliders_C* WBP_ColorSliders1;                                     // 0x0388 (size: 0x8)
    class UWBP_ColorSliders_C* WBP_ColorSliders2;                                     // 0x0390 (size: 0x8)
    class UWBP_ColorSliders_C* WBP_ColorSliders3;                                     // 0x0398 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor1;                                         // 0x03A0 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor2;                                         // 0x03A8 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor3;                                         // 0x03B0 (size: 0x8)
    class UWrapBox* WrapBox_decals;                                                   // 0x03B8 (size: 0x8)
    FWBP_PlatformDecals_COnDecalSelected OnDecalSelected;                             // 0x03C0 (size: 0x10)
    void OnDecalSelected(TSubclassOf<class ADecalToPaint> DecalSelected);
    FWBP_PlatformDecals_COnColorSelected OnColorSelected;                             // 0x03D0 (size: 0x10)
    void OnColorSelected(FLinearColor Color, int32 Index);
    float SelectedDecalOffset;                                                        // 0x03E0 (size: 0x4)
    class UMaterialInstanceDynamic* MAT_TripleColors;                                 // 0x03E8 (size: 0x8)
    FSavedCarPaint CustomizationData;                                                 // 0x03F0 (size: 0x44)
    class ABP_JunkyardPlatform_C* Platform;                                           // 0x0438 (size: 0x8)
    TArray<EDecalUnlockType> DecalCategories;                                         // 0x0440 (size: 0x10)
    FWBP_PlatformDecals_COnDecalCustomizationUpdated OnDecalCustomizationUpdated;     // 0x0450 (size: 0x10)
    void OnDecalCustomizationUpdated(FSavedCarPaint CarCustomization);
    TArray<UWBP_CarDecalSlot_C*> CreatedDecalSlots;                                   // 0x0460 (size: 0x10)
    EDecalUnlockType SelectedCategory;                                                // 0x0470 (size: 0x1)
    bool bIsActiveThird;                                                              // 0x0471 (size: 0x1)
    bool bIsActiveSecond;                                                             // 0x0472 (size: 0x1)
    bool bIsActivemain;                                                               // 0x0473 (size: 0x1)
    TArray<UWBP_PlatformCustomizationColor_C*> Hb1Colors;                             // 0x0478 (size: 0x10)
    TArray<UWBP_PlatformCustomizationColor_C*> Hb2Colors;                             // 0x0488 (size: 0x10)
    TArray<UWBP_PlatformCustomizationColor_C*> Hb3Colors;                             // 0x0498 (size: 0x10)
    TArray<FCarPaintColorWithIndex> LastUsedColors;                                   // 0x04A8 (size: 0x10)
    TArray<UWrapBox*> GamePadColorsPalet;                                             // 0x04B8 (size: 0x10)
    TArray<UWBP_SavedColor_C*> GamePadSavedColorList;                                 // 0x04C8 (size: 0x10)
    TArray<UWBP_ColorSliders_C*> GamePadColorSliders;                                 // 0x04D8 (size: 0x10)
    int32 GamePadCurrentSegment;                                                      // 0x04E8 (size: 0x4)
    class UWrapBox* GamePadCurrentColorWrap;                                          // 0x04F0 (size: 0x8)
    int32 GamePadCurrentElement;                                                      // 0x04F8 (size: 0x4)

    void GamePadTripleColorUpdateHover();
    void UpdateLastUsedColors();
    void ChangeRecentColorValue(FLinearColor Linear Color);
    void ClickRecentColor(FLinearColor SetColor, bool bMetal, int32 ColorIndex);
    void TripleColorUpdate();
    void FilterDecalsByType(EDecalUnlockType Selection);
    void Setup();
    void SetActiveColor(class UWBP_PlatformCustomizationColor_C* Button, class UPanelWidget* HorizontalBox);
    void Finished_3ECEFF5C4B50957B32EA3D93C7B1E433();
    void Construct();
    void SelectDecal(TSubclassOf<class ADecalToPaint> DecalSelected, EDecalColor DecalType);
    void Destruct();
    void ChangeColor3(FLinearColor Color);
    void ChangeColor2(FLinearColor Color);
    void ChangeColor1(FLinearColor Color);
    void OnColor1Selected(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
    void OnColor2Selected(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
    void OnColor3Selected(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
    void BndEvt__WBP_PlatformDecals_MainColor_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformDecals_SecondColor_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformDecals_ThirdColor_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformDecals_BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ViewColorSlidersMain();
    void ViewSlidersSecond();
    void ViewSlidersThird();
    void BndEvt__WBP_PlatformDecals_WBP_ArrowButton_CategoryLeft_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
    void BndEvt__WBP_PlatformDecals_WBP_ArrowButton_CategoryRight_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
    void BndEvt__WBP_PlatformCustomization_WBP_SavedColor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void BndEvt__WBP_PlatformCustomization_WBP_SavedColor_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void BndEvt__WBP_PlatformCustomization_WBP_SavedColor_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void GamePadClickArrow(bool Left);
    void GamePadSliderBackButton();
    void GamePadNavigate(FString Direction);
    void GamePadSetActiveColor(int32 Index);
    void GamePadSetHoverActiveColor(int32 Index, bool Deactive);
    void GamePadActionClicked();
    void GamePadTurnOffAll();
    void GamePadHoverFirstElement();
    void ExecuteUbergraph_WBP_PlatformDecals(int32 EntryPoint);
    void OnDecalCustomizationUpdated__DelegateSignature(FSavedCarPaint CarCustomization);
    void OnColorSelected__DelegateSignature(FLinearColor Color, int32 Index);
    void OnDecalSelected__DelegateSignature(TSubclassOf<class ADecalToPaint> DecalSelected);
}; // Size: 0x4FC

#endif
