#ifndef UE4SS_SDK_PC_DecorationBase_WBP_HPP
#define UE4SS_SDK_PC_DecorationBase_WBP_HPP

class UPC_DecorationBase_WBP_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0298 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02A0 (size: 0x8)
    class UWidgetAnimation* OnExitHover;                                              // 0x02A8 (size: 0x8)
    class UWidgetAnimation* BuyHover;                                                 // 0x02B0 (size: 0x8)
    class UWidgetAnimation* OnHoverRight;                                             // 0x02B8 (size: 0x8)
    class UWidgetAnimation* OnHoverLeft;                                              // 0x02C0 (size: 0x8)
    class UWidgetAnimation* MoveToNextEnd;                                            // 0x02C8 (size: 0x8)
    class UWidgetAnimation* MoveToNextOpen;                                           // 0x02D0 (size: 0x8)
    class UImage* ArrowBG_IMG;                                                        // 0x02D8 (size: 0x8)
    class UImage* ArrowBG_IMG_1;                                                      // 0x02E0 (size: 0x8)
    class UImage* ArrowExit_ICO_1;                                                    // 0x02E8 (size: 0x8)
    class UImage* ArrowLeft_ICO;                                                      // 0x02F0 (size: 0x8)
    class UImage* ArrowRadialFrameL_IMG;                                              // 0x02F8 (size: 0x8)
    class UImage* ArrowRadialFrameR_IMG;                                              // 0x0300 (size: 0x8)
    class UImage* ArrowRight_ICO;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* BluePrint_Price;                                                // 0x0310 (size: 0x8)
    class UOverlay* BluePrintCost_Overlay;                                            // 0x0318 (size: 0x8)
    class UImage* BuyRadial_IMG;                                                      // 0x0320 (size: 0x8)
    class UImage* BuyRadial_IMG_1;                                                    // 0x0328 (size: 0x8)
    class UImage* BuyText_BG;                                                         // 0x0330 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0338 (size: 0x8)
    class UDecorationManagementContainer_WBP_C* DecoratiomManagementContainer_WBP;    // 0x0340 (size: 0x8)
    class UImage* Description_BG;                                                     // 0x0348 (size: 0x8)
    class UTextBlock* Description_TXT;                                                // 0x0350 (size: 0x8)
    class UOverlay* DescriptionSection_Overlay;                                       // 0x0358 (size: 0x8)
    class UTextBlock* Dolar_TXT;                                                      // 0x0360 (size: 0x8)
    class UTextBlock* Exit_TXT;                                                       // 0x0368 (size: 0x8)
    class UScaleBox* ExitButtonScale;                                                 // 0x0370 (size: 0x8)
    class UGSSButton* GSSButton_103;                                                  // 0x0378 (size: 0x8)
    class UImage* Image;                                                              // 0x0380 (size: 0x8)
    class UImage* Image_30;                                                           // 0x0388 (size: 0x8)
    class UImage* Image_58;                                                           // 0x0390 (size: 0x8)
    class UImage* Image_117;                                                          // 0x0398 (size: 0x8)
    class UImage* Image_1021;                                                         // 0x03A0 (size: 0x8)
    class UTextBlock* Price_TXT;                                                      // 0x03A8 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_2;                                    // 0x03B0 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_3;                                    // 0x03B8 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_4;                                    // 0x03C0 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_5;                                    // 0x03C8 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_6;                                    // 0x03D0 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_7;                                    // 0x03D8 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_8;                                    // 0x03E0 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_9;                                    // 0x03E8 (size: 0x8)
    class UProgressRoad_WBP_C* ProgressRoad_WBP_10;                                   // 0x03F0 (size: 0x8)
    class UWrapBox* ProgressRoad_Wrap;                                                // 0x03F8 (size: 0x8)
    class UDragoButton* REAL_BACK;                                                    // 0x0400 (size: 0x8)
    class UDragoButton* REAL_EXIT;                                                    // 0x0408 (size: 0x8)
    class UDragoButton* REAL_NEXT;                                                    // 0x0410 (size: 0x8)
    class UTextBlock* Sector_TXT;                                                     // 0x0418 (size: 0x8)
    class UHorizontalBox* Switching_HorizontalBox;                                    // 0x0420 (size: 0x8)
    class USpacer* TextSpacer;                                                        // 0x0428 (size: 0x8)
    class UTextBlock* Title_TXT;                                                      // 0x0430 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft;                                       // 0x0438 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveRight;                                      // 0x0440 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x0448 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_1;                                  // 0x0450 (size: 0x8)
    class ADecorationCamera* CurrentDecorationCamera;                                 // 0x0458 (size: 0x8)
    bool StopInteraction;                                                             // 0x0460 (size: 0x1)
    float RestTime;                                                                   // 0x0464 (size: 0x4)
    EDecorationCameraType DecorationCameraType;                                       // 0x0468 (size: 0x1)
    FName Map;                                                                        // 0x046C (size: 0x8)
    bool CameraTransitionFromKey;                                                     // 0x0474 (size: 0x1)
    class ADecorationCamera* PreviousCamera;                                          // 0x0478 (size: 0x8)
    TArray<ADecorationCamera*> DecorationsCamerasUniversal;                           // 0x0480 (size: 0x10)
    TArray<TSoftClassPtr<UGSS_HUD_BaseWidget>> HiddenHudElements;                     // 0x0490 (size: 0x10)
    int32 GamePadCurrentIndex;                                                        // 0x04A0 (size: 0x4)
    int32 GamePadDecorationListIndex;                                                 // 0x04A4 (size: 0x4)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void PC_DecorationBase_WBP_AutoGenFunc(int32 Index);
    void GetNextDecorationCamera(class ADecorationCamera* Cameras, FDecorationMap& OutCamera);
    void Get Next Camera(bool Forward, class ADecorationCamera*& Output);
    void AchievementCheck(FName EntryMap);
    void Check if Enough BPs(int32 NumberOfNeededBuildingBPs, bool& EnoughBPs);
    void RefreshProgressRoad(bool PlayAnimationYes1);
    void Refresh Section Counter();
    void UpdateDescription();
    void Finished_71810AEE48C98C81A533AF8A4FDD20E0();
    void Finished_ECD07A6945A91B14EA1B00929DD63FA5();
    void Construct();
    void MoveToPreviousPage();
    void MoveToNextPage();
    void BndEvt__WBP_DecorationCameraMenago_REAL_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void DisablePostProces();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__REAL_BACK_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__next_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ReavelSection();
    void BndEvt__REAL_NEXT_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__REAL_NEXT_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__REAL_BACK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__REAL_BACK_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__REAL_EXIT_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__REAL_EXIT_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void CustomEscape();
    void BndEvt__PC_DecorationBase_WBP_GSSButton_103_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PC_DecorationBase_WBP_GSSButton_103_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PC_DecorationBase_WBP_GSSButton_103_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void RemoteClickCapsule(class ADecorationCamera* Camera);
    void GamePadBuyDecoration();
    void CustomEvent_0();
    void CheckForShowLevels();
    void ContinueOnCameraDeactivation();
    void ExecuteUbergraph_PC_DecorationBase_WBP(int32 EntryPoint);
}; // Size: 0x4A8

#endif
