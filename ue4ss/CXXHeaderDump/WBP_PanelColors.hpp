#ifndef UE4SS_SDK_WBP_PanelColors_HPP
#define UE4SS_SDK_WBP_PanelColors_HPP

class UWBP_PanelColors_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0288 (size: 0x8)
    class UColorWallPaperCategoryButton_All_C* AllFilterWallPaper_v2;                 // 0x0290 (size: 0x8)
    class UOverlay* BlockerLVL2;                                                      // 0x0298 (size: 0x8)
    class UOverlay* BlockerLVL3;                                                      // 0x02A0 (size: 0x8)
    class UOverlay* BlockerLVL4;                                                      // 0x02A8 (size: 0x8)
    class UImage* BlockerLvl5;                                                        // 0x02B0 (size: 0x8)
    class UImage* BlockerLvl5_1;                                                      // 0x02B8 (size: 0x8)
    class UImage* BlockerLvl5_2;                                                      // 0x02C0 (size: 0x8)
    class UImage* BlockerLvl5_3;                                                      // 0x02C8 (size: 0x8)
    class UImage* BlockerLvl5_4;                                                      // 0x02D0 (size: 0x8)
    class UOverlay* BlockerLVL6;                                                      // 0x02D8 (size: 0x8)
    class UOverlay* BlockerLVLLast;                                                   // 0x02E0 (size: 0x8)
    class UVerticalBox* BlockerVertical;                                              // 0x02E8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02F0 (size: 0x8)
    class UColorWallPaperCategoryButton_All_C* ColorsFilter_v2;                       // 0x02F8 (size: 0x8)
    class USizeBox* ColorsSpotSizebox;                                                // 0x0300 (size: 0x8)
    class UWrapBox* ColorsWrapBox;                                                    // 0x0308 (size: 0x8)
    class UColorWallPaperCategoryButton_All_C* HalloweenFilterWallPaper_v2;           // 0x0310 (size: 0x8)
    class UHorizontalBox* HorizontalBox_71;                                           // 0x0318 (size: 0x8)
    class UImage* Image_76;                                                           // 0x0320 (size: 0x8)
    class UPC_PS4_bindings_C* PC_PS4_bindings;                                        // 0x0328 (size: 0x8)
    class UScrollBox* ScrollBoxWallpapers;                                            // 0x0330 (size: 0x8)
    class USizeBox* SizeBoxHalloween;                                                 // 0x0338 (size: 0x8)
    class USizeBox* SizeBoxXmas;                                                      // 0x0340 (size: 0x8)
    class USizeBox* SizeBoxXvalentine;                                                // 0x0348 (size: 0x8)
    class UTextBlock* Title_TXT;                                                      // 0x0350 (size: 0x8)
    class UColorWallPaperCategoryButton_All_C* ValentinesFilterWallPaper_v2;          // 0x0358 (size: 0x8)
    class UVerticalBox* WallPaintFilters_Vertical;                                    // 0x0360 (size: 0x8)
    class UColorWallPaperCategoryButton_All_C* WallPaperFilter_v2;                    // 0x0368 (size: 0x8)
    class USizeBox* WallpapersSpotSizebox;                                            // 0x0370 (size: 0x8)
    class UWrapBox* WallPapersValentine;                                              // 0x0378 (size: 0x8)
    class UWrapBox* WallPapersWrap;                                                   // 0x0380 (size: 0x8)
    class UWrapBox* WallPapersXmas;                                                   // 0x0388 (size: 0x8)
    class UColorWallPaperCategoryButton_All_C* XmasFilterWallPaper_v2;                // 0x0390 (size: 0x8)
    bool ForGameProducerIsXmas;                                                       // 0x0398 (size: 0x1)
    TMap<FName, int32> ColorsName;                                                    // 0x03A0 (size: 0x50)
    class AActor* OwnerActor;                                                         // 0x03F0 (size: 0x8)
    class UUserWidget* WidgetParent;                                                  // 0x03F8 (size: 0x8)
    int32 CurrentStationLevel;                                                        // 0x0400 (size: 0x4)
    TArray<UWBP_ButtonColor_C*> ArrayButtonColors;                                    // 0x0408 (size: 0x10)
    int32 keySelected;                                                                // 0x0418 (size: 0x4)
    int32 selectRow;                                                                  // 0x041C (size: 0x4)
    TArray<FPaintingColor> DefaultColors;                                             // 0x0420 (size: 0x10)
    TArray<FPaintingColor> DefaultWallPapers;                                         // 0x0430 (size: 0x10)
    FString TabTag;                                                                   // 0x0440 (size: 0x10)
    TArray<FPaintingColor> XmasWallPapers;                                            // 0x0450 (size: 0x10)
    TArray<FPaintingColor> ValentineWallPapers;                                       // 0x0460 (size: 0x10)
    TArray<UWrapBox*> GamePadFilterArray;                                             // 0x0470 (size: 0x10)
    TArray<UColorWallPaperCategoryButton_All_C*> GamePadCategoryButtons;              // 0x0480 (size: 0x10)
    TArray<USizeBox*> GamePadSizeBoxes;                                               // 0x0490 (size: 0x10)
    int32 GamePadCurrentElement;                                                      // 0x04A0 (size: 0x4)
    int32 GamePadCurrentCategory;                                                     // 0x04A4 (size: 0x4)
    bool GamePadFindLastElement;                                                      // 0x04A8 (size: 0x1)
    bool GamePadOnCategory;                                                           // 0x04A9 (size: 0x1)
    int32 GamePadCurrentCategoryButton;                                               // 0x04AC (size: 0x4)
    bool IsGamepad;                                                                   // 0x04B0 (size: 0x1)
    FWBP_PanelColors_COnClose OnClose;                                                // 0x04B8 (size: 0x10)
    void OnClose(bool IsGamepad);

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnchangedInputDevice(bool IsGamepad, bool ForceCheck);
    void Close();
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ShowColorBlockers();
    void SetupGamepadArrays();
    void CreateColors();
    void SetupFilterReferences();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Decrement Row(bool& IsChanged);
    void IncrementRow(bool& IsChanged);
    void SetHovered(bool IsChanged);
    void Click();
    void decrementsKey(bool& IsChanged);
    void incrementsKey(bool& IsChanged);
    void Construct();
    void OnClickedColor(FLinearColor NewParam, FPaintingColor PaintingColor, class UWBP_ButtonColor_C* ButtonColor);
    void DeconstructAnimation();
    void OnPressedLeft();
    void OnPressedRight();
    void OnPressedDown();
    void OnPressedUp();
    void OnPressed_A();
    void RPM_Event(bool bIsPressed);
    void OnClickCategory(bool Colors, bool SubCategory);
    void Clicked_Event_0(FLinearColor NewParam, FPaintingColor PaintingColor);
    void CustomEvent_1(FLinearColor NewParam, FPaintingColor PaintingColor);
    void AllFiltersWallPaper();
    void HalloweenFilterWallPape();
    void XmasFilterWallPape();
    void BndEvt__WBP_PanelColors_ColorsFilter_v2_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(EDecalUnlockType UnlockType);
    void BndEvt__WBP_PanelColors_WallPaperFilter_v2_K2Node_ComponentBoundEvent_3_OnClickedButton__DelegateSignature(EDecalUnlockType UnlockType);
    void ValentineFilterWallPape();
    void PopulateValentineWallPape(FLinearColor NewParam, FPaintingColor PaintingColor);
    void GamePadPickColor();
    void GamePadColors();
    void GamePadWallPaper();
    void GamePadNavigate(int32 Direction);
    void Show(class AActor* BrushActor, bool IsGamepad);
    void ExecuteUbergraph_WBP_PanelColors(int32 EntryPoint);
    void OnClose__DelegateSignature(bool IsGamepad);
}; // Size: 0x4C8

#endif
