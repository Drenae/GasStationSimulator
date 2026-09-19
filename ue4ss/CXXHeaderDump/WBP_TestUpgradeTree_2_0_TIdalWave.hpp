#ifndef UE4SS_SDK_WBP_TestUpgradeTree_2_0_TIdalWave_HPP
#define UE4SS_SDK_WBP_TestUpgradeTree_2_0_TIdalWave_HPP

class UWBP_TestUpgradeTree_2_0_TIdalWave_C : public UWBP_UpgradesParent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UWidgetAnimation* AS_Scroll;                                                // 0x02A0 (size: 0x8)
    class UWidgetAnimation* PT_Scroll;                                                // 0x02A8 (size: 0x8)
    class UWidgetAnimation* CTT_Scroll;                                               // 0x02B0 (size: 0x8)
    class UWidgetAnimation* BaseScroll;                                               // 0x02B8 (size: 0x8)
    class USizeBox* BaseScroll_TT;                                                    // 0x02C0 (size: 0x8)
    class UOverlay* BlockerOverlayCurrentOwned;                                       // 0x02C8 (size: 0x8)
    class UOverlay* BlockerOverlayOwned;                                              // 0x02D0 (size: 0x8)
    class UButtonDLCUpgrades_WBP_C* ButtonDLCUpgrades_Base;                           // 0x02D8 (size: 0x8)
    class UButtonDLCUpgrades_WBP_C* ButtonDLCUpgrades_PT;                             // 0x02E0 (size: 0x8)
    class UTextBlock* CarWashLvl_TXT;                                                 // 0x02E8 (size: 0x8)
    class UHorizontalBox* CostHorizontal;                                             // 0x02F0 (size: 0x8)
    class UOverlay* DetailsInfo;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* GasStationLvl_TXT;                                              // 0x0300 (size: 0x8)
    class UTextBlock* IceCreamLvl_TXT;                                                // 0x0308 (size: 0x8)
    class UHorizontalBox* IceCreamStandLvl;                                           // 0x0310 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0320 (size: 0x8)
    class UImage* Image_95;                                                           // 0x0328 (size: 0x8)
    class UImage* Image_204;                                                          // 0x0330 (size: 0x8)
    class UImage* Image_205;                                                          // 0x0338 (size: 0x8)
    class UImage* Image_327;                                                          // 0x0340 (size: 0x8)
    class UImage* Image_363;                                                          // 0x0348 (size: 0x8)
    class UImage* Image_photo;                                                        // 0x0350 (size: 0x8)
    class UGSSButton* LevelUpButtonMain;                                              // 0x0358 (size: 0x8)
    class UDragoButton* LevelUpButtonRedMain;                                         // 0x0360 (size: 0x8)
    class UCanvasPanel* MainCanvasPanel;                                              // 0x0368 (size: 0x8)
    class UOverlay* MainCardUpgradeButtons;                                           // 0x0370 (size: 0x8)
    class UVerticalBox* MoreInfo_Horizontal;                                          // 0x0378 (size: 0x8)
    class UMoreInfoButton_C* MoreInfoButton_C_2;                                      // 0x0380 (size: 0x8)
    class UOverlay* MovableOverlayBase;                                               // 0x0388 (size: 0x8)
    class UOverlay* MovableOverlayPT;                                                 // 0x0390 (size: 0x8)
    class UOverlay* Overlay_2;                                                        // 0x0398 (size: 0x8)
    class UTextBlock* PartySpotLevel_TXT;                                             // 0x03A0 (size: 0x8)
    class UHorizontalBox* PartySpotLvl;                                               // 0x03A8 (size: 0x8)
    class UHorizontalBox* PartyTimeBuildings;                                         // 0x03B0 (size: 0x8)
    class UTextBlock* PricteStructure_TXT;                                            // 0x03B8 (size: 0x8)
    class UTextBlock* PricteStructure_TXT_1;                                          // 0x03C0 (size: 0x8)
    class USizeBox* PT_DLC_TT;                                                        // 0x03C8 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x03D0 (size: 0x8)
    class UHorizontalBox* Scuba;                                                      // 0x03D8 (size: 0x8)
    class UTextBlock* ScubaLevel;                                                     // 0x03E0 (size: 0x8)
    class UVerticalBox* Segments_Vertical;                                            // 0x03E8 (size: 0x8)
    class UHorizontalBox* Shower;                                                     // 0x03F0 (size: 0x8)
    class UTextBlock* ShowerLEvel;                                                    // 0x03F8 (size: 0x8)
    class UTextBlock* StructureLevel_TXT;                                             // 0x0400 (size: 0x8)
    class UTextBlock* StructureName_TXT;                                              // 0x0408 (size: 0x8)
    class UHorizontalBox* Surfing;                                                    // 0x0410 (size: 0x8)
    class UTextBlock* SurfingLevel;                                                   // 0x0418 (size: 0x8)
    class UTechTreeWidget* TechTreeBase;                                              // 0x0420 (size: 0x8)
    class UTechTreeWidget* TechTreePT;                                                // 0x0428 (size: 0x8)
    class UTextBlock* TextBlock_unlocks;                                              // 0x0430 (size: 0x8)
    class UHorizontalBox* TidalBuildings;                                             // 0x0438 (size: 0x8)
    class UTextBlock* ToiletLevel;                                                    // 0x0440 (size: 0x8)
    class UVerticalBox* Unlocks;                                                      // 0x0448 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0450 (size: 0x8)
    class UTextBlock* WarehouseLvl_TXT;                                               // 0x0458 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButton;                                   // 0x0460 (size: 0x8)
    class UHorizontalBox* WC;                                                         // 0x0468 (size: 0x8)
    class UTextBlock* WorkshopLvl_TXT;                                                // 0x0470 (size: 0x8)
    class UTechnologyAsset* CurrentTechAsset;                                         // 0x0478 (size: 0x8)
    class UWidgetAnimation* AnimationGoFrom;                                          // 0x0480 (size: 0x8)
    class UWidgetAnimation* AnimationGoTo;                                            // 0x0488 (size: 0x8)
    class UBP_TechTreeManager_C* BP Tech Tree Manager;                                // 0x0490 (size: 0x8)
    class UTechnologyAsset* Previous Technology To Unlock;                            // 0x0498 (size: 0x8)
    bool LMB_Down;                                                                    // 0x04A0 (size: 0x1)
    TArray<UOverlay*> MovableOverlays;                                                // 0x04A8 (size: 0x10)
    class UOverlay* CurrentOverlayToMove;                                             // 0x04B8 (size: 0x8)
    bool FromDestroy;                                                                 // 0x04C0 (size: 0x1)
    FText RedButtonText;                                                              // 0x04C8 (size: 0x18)
    FVector2D PreviousMousePosition;                                                  // 0x04E0 (size: 0x8)
    bool bClickedInUpgradeTree;                                                       // 0x04E8 (size: 0x1)
    TArray<FVector2D> DefaultOverlayTranslations;                                     // 0x04F0 (size: 0x10)
    TArray<UTechNodeWidget*> GamePadTechNodes;                                        // 0x0500 (size: 0x10)
    class UTTTechNode* GamePadCurrentTechNode;                                        // 0x0510 (size: 0x8)
    class UTechNodeWidget* GamePadCurrentWidget;                                      // 0x0518 (size: 0x8)
    FVector2D GamePadThumbStickDirection;                                             // 0x0520 (size: 0x8)
    int32 GamePadMoveDirectionValue;                                                  // 0x0528 (size: 0x4)
    float GamePadMoveOffsetY;                                                         // 0x052C (size: 0x4)
    float GamePadMoveOffsetX;                                                         // 0x0530 (size: 0x4)
    class UTechnologyAsset* GamePadTechNodeToCheck;                                   // 0x0538 (size: 0x8)
    bool GamePadLasCheckedNodeEnabled;                                                // 0x0540 (size: 0x1)
    bool GamePadLastMoveFromThumbstick;                                               // 0x0541 (size: 0x1)
    FVector2D GamePadLastButtonNavigation;                                            // 0x0544 (size: 0x8)
    bool GamePadThumbstickMoved;                                                      // 0x054C (size: 0x1)
    int32 GamePadCurrentSection;                                                      // 0x0550 (size: 0x4)
    int32 GamePadCurrentDLCbutton;                                                    // 0x0554 (size: 0x4)
    float Treshhold;                                                                  // 0x0558 (size: 0x4)

    void OnGamepadConnected(bool IsGamepadConnected);
    void GamePadMoveOffsetCalculate(float NodeOffset, FVector2D& MoveOffset);
    void MoveTechNodesOverlay(int32 DirectionIndex);
    float GetScaledViewportHalfSize(bool XAxis);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Game Pad Navigate DLCbuttons(bool Down);
    void Center On Last Upgraded Gas Station();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void CenterOnLastUpgradedGasStation();
    void CheckAchievement();
    void SetButtonsREFs();
    void RefreshUpgrades(class UTechTreeWidget* TechTree);
    void SetUpVisibleDLC();
    void SetUpNeeds(bool money, bool Quest, bool BuildingLevel, bool Items);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void MapOutOfBoundaries(FVector2D Vector2D, bool& Out);
    void Finished_139005D3460843DAB958408D7111623A();
    void Finished_431D5CB541DB50A4444A85BC3BF68E1E();
    void TopMenuHandle(FKeyEvent KeyEvent);
    void Construct();
    void OnTechnologyUnlockStateChanged(class UTTTechNode* TechNode, bool IsUnLocked);
    void BndEvt__WBP_TestUpgradeTree_2_0_LevelUpButtonMain_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void SwitchAnimations(class UWidgetAnimation* AnimationToSet);
    void UnBindAssignedTechTree();
    void Destruct();
    void BndEvt__WBP_TestUpgradeTree_2_0_LevelUpButtonRedMain_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BindCheckForCanBeUpgraded();
    void HightlightSpecificUpgrade(class UTechnologyAsset* TechnologyToHightLight);
    void OnMoneyReceived(const float LeftMoney);
    void SetLMBState(bool bInLmbDown);
    void OnTechSelectedHideUpgradeButton(bool HideUggradeButton);
    void CustomMoveUpgrades(FVector2D PreviousPosition);
    void BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_WBP_K2Node_ComponentBoundEvent_8_ClickEvent__DelegateSignature(class UTechnologyTree* TechTree, int32 OverlayIndex);
    void BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_PT_K2Node_ComponentBoundEvent_0_ClickEvent__DelegateSignature(class UTechnologyTree* TechTree, int32 OverlayIndex);
    void BndEvt__WBP_TestUpgradeTree_2_0_MoreInfoButton_C_2_K2Node_ComponentBoundEvent_11_ClickEvent__DelegateSignature();
    void RefreshassetToUnlock(class UTechnologyAsset* TechAsset);
    void SetButtonsNormal();
    void GamePadClickGreenButton();
    void GamePadClickRedUpgradeButton();
    void CustomHideMoreInfo();
    void GamePadNavigateTechNodes(int32 Direction);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void CustomEvent_0();
    void OnTabChanged();
    void OnTabChangedToAnother();
    void ExecuteUbergraph_WBP_TestUpgradeTree_2_0_TIdalWave(int32 EntryPoint);
}; // Size: 0x55C

#endif
