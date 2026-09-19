#ifndef UE4SS_SDK_UI_PhotoMode_HPP
#define UE4SS_SDK_UI_PhotoMode_HPP

class UUI_PhotoMode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FocusUnderClick;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* OpenPhotoMode;                                            // 0x0270 (size: 0x8)
    class UWidgetAnimation* NotificationScreenshotTaken;                              // 0x0278 (size: 0x8)
    class UUI_Selector_C* Aperture;                                                   // 0x0280 (size: 0x8)
    class USizeBox* APM_SizeMenu;                                                     // 0x0288 (size: 0x8)
    class UUI_Checkbox_C* Autofocus;                                                  // 0x0290 (size: 0x8)
    class UBorder* BorderScreenshotTaken;                                             // 0x0298 (size: 0x8)
    class UUI_Slider_C* Brightness;                                                   // 0x02A0 (size: 0x8)
    class UUI_TabButton_C* btn_CameraTab;                                             // 0x02A8 (size: 0x8)
    class UUI_TabButton_C* btn_ColorBalanceTab;                                       // 0x02B0 (size: 0x8)
    class UUI_TabButton_C* btn_DepthOfFieldTab;                                       // 0x02B8 (size: 0x8)
    class UUI_TabButton_C* btn_DisplayTab;                                            // 0x02C0 (size: 0x8)
    class UUI_TabButton_C* btn_FiltersTab;                                            // 0x02C8 (size: 0x8)
    class UUI_TabButton_C* btn_FramesTab;                                             // 0x02D0 (size: 0x8)
    class UUI_TabButton_C* btn_LogoTab;                                               // 0x02D8 (size: 0x8)
    class UUI_TabButton_C* btn_ScreenEffectsTab;                                      // 0x02E0 (size: 0x8)
    class UBorder* Buttons-Border;                                                    // 0x02E8 (size: 0x8)
    class UUI_Slider_C* CameraDistance;                                               // 0x02F0 (size: 0x8)
    class UUI_Slider_C* CameraRoll;                                                   // 0x02F8 (size: 0x8)
    class UCanvasPanel* CanvasScreenshotTaken;                                        // 0x0300 (size: 0x8)
    class UImage* CaptureMouseArea;                                                   // 0x0308 (size: 0x8)
    class UImage* CenterGrid_1;                                                       // 0x0310 (size: 0x8)
    class UUI_Checkbox_C* CharacterRotation;                                          // 0x0318 (size: 0x8)
    class UUI_Slider_C* ChromaticAberrationIntensity;                                 // 0x0320 (size: 0x8)
    class UUI_Slider_C* ChromaticAberrationOffset;                                    // 0x0328 (size: 0x8)
    class UUI_Slider_C* ColorBalanceBlue;                                             // 0x0330 (size: 0x8)
    class UUI_Slider_C* ColorBalanceGreen;                                            // 0x0338 (size: 0x8)
    class UUI_Slider_C* ColorBalanceIntensity;                                        // 0x0340 (size: 0x8)
    class UVerticalBox* ColorBalanceOptions;                                          // 0x0348 (size: 0x8)
    class UUI_Slider_C* ColorBalanceRed;                                              // 0x0350 (size: 0x8)
    class UUI_Selector_C* ColorBalanceSelector;                                       // 0x0358 (size: 0x8)
    class UWidgetSwitcher* ColorGradingMode;                                          // 0x0360 (size: 0x8)
    class UUI_CommandButton_C* Command_Album;                                         // 0x0368 (size: 0x8)
    class UUI_CommandButton_C* Command_ChangeTab;                                     // 0x0370 (size: 0x8)
    class UUI_CommandButton_C* Command_Close;                                         // 0x0378 (size: 0x8)
    class UUI_CommandButton_C* Command_Close_1;                                       // 0x0380 (size: 0x8)
    class UUI_CommandButton_C* Command_Down;                                          // 0x0388 (size: 0x8)
    class UUI_CommandButton_C* Command_FreeCamera;                                    // 0x0390 (size: 0x8)
    class UUI_CommandButton_C* Command_HideUI;                                        // 0x0398 (size: 0x8)
    class UUI_CommandButton_C* Command_Left;                                          // 0x03A0 (size: 0x8)
    class UUI_CommandButton_C* Command_Mouse;                                         // 0x03A8 (size: 0x8)
    class UUI_CommandButton_C* Command_Pause;                                         // 0x03B0 (size: 0x8)
    class UUI_CommandButton_C* Command_Reset;                                         // 0x03B8 (size: 0x8)
    class UUI_CommandButton_C* Command_Right;                                         // 0x03C0 (size: 0x8)
    class UUI_CommandButton_C* Command_Swap;                                          // 0x03C8 (size: 0x8)
    class UUI_CommandButton_C* Command_TakePicture;                                   // 0x03D0 (size: 0x8)
    class UUI_CommandButton_C* Command_Up;                                            // 0x03D8 (size: 0x8)
    class UImage* Divisor;                                                            // 0x03E0 (size: 0x8)
    class UUI_Slider_C* FieldOfView;                                                  // 0x03E8 (size: 0x8)
    class UUI_Slider_C* FilmGrain;                                                    // 0x03F0 (size: 0x8)
    class UUI_Selector_C* Filter;                                                     // 0x03F8 (size: 0x8)
    class UUI_Slider_C* FocusDistance;                                                // 0x0400 (size: 0x8)
    class UTextBlock* FocusDistanceTxt;                                               // 0x0408 (size: 0x8)
    class UTextBlock* FocusDistanceTxt_1;                                             // 0x0410 (size: 0x8)
    class UOverlay* FocusRegion;                                                      // 0x0418 (size: 0x8)
    class UUI_Slider_C* FrameBlue;                                                    // 0x0420 (size: 0x8)
    class UUI_Slider_C* FrameGreen;                                                   // 0x0428 (size: 0x8)
    class UUI_Slider_C* FrameRed;                                                     // 0x0430 (size: 0x8)
    class UUI_Selector_C* FrameSelector;                                              // 0x0438 (size: 0x8)
    class UUI_Slider_C* FrameSize;                                                    // 0x0440 (size: 0x8)
    class UUI_Checkbox_C* Grid;                                                       // 0x0448 (size: 0x8)
    class UCanvasPanel* GRIDAutofocus;                                                // 0x0450 (size: 0x8)
    class UUI_Checkbox_C* HideCharacter;                                              // 0x0458 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0460 (size: 0x8)
    class UImage* Image_211;                                                          // 0x0468 (size: 0x8)
    class UImage* img_PhotoModeIsOn;                                                  // 0x0470 (size: 0x8)
    class UImage* imgFocusRegion;                                                     // 0x0478 (size: 0x8)
    class UBorder* Info-Border;                                                       // 0x0480 (size: 0x8)
    class UUI_Slider_C* LogoAngle;                                                    // 0x0488 (size: 0x8)
    class UUI_Slider_C* LogoHorizontalAlignment;                                      // 0x0490 (size: 0x8)
    class UUI_Selector_C* LogoSelector;                                               // 0x0498 (size: 0x8)
    class UUI_Slider_C* LogoSize;                                                     // 0x04A0 (size: 0x8)
    class UUI_Slider_C* LogoVerticalAlignment;                                        // 0x04A8 (size: 0x8)
    class UUI_Slider_C* LUTIntensity;                                                 // 0x04B0 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x04B8 (size: 0x8)
    class UUI_Slider_C* MotionBlur;                                                   // 0x04C0 (size: 0x8)
    class UCanvasPanel* MoveCameraKeys-CanvasPanel;                                   // 0x04C8 (size: 0x8)
    class UCanvasPanel* PhotoModeIsOnHidedMenu;                                       // 0x04D0 (size: 0x8)
    class UWidgetSwitcher* PhotoModeWidget;                                           // 0x04D8 (size: 0x8)
    class UUI_Selector_C* PhotoResolution;                                            // 0x04E0 (size: 0x8)
    class UImage* PreviewPhoto;                                                       // 0x04E8 (size: 0x8)
    class UUI_Selector_C* Rendering;                                                  // 0x04F0 (size: 0x8)
    class UUI_Slider_C* SensorWidth;                                                  // 0x04F8 (size: 0x8)
    class UUI_Slider_C* Sharpness;                                                    // 0x0500 (size: 0x8)
    class UUI_Slider_C* Slider_SimplifiedContrast;                                    // 0x0508 (size: 0x8)
    class UUI_Slider_C* Slider_SimplifiedGamma;                                       // 0x0510 (size: 0x8)
    class UUI_Slider_C* Slider_SimplifiedSaturation;                                  // 0x0518 (size: 0x8)
    class UHorizontalBox* TakePhoto_HorizontalBox;                                    // 0x0520 (size: 0x8)
    class UUI_Slider_C* Temperature;                                                  // 0x0528 (size: 0x8)
    class UTextBlock* TextBlock_192;                                                  // 0x0530 (size: 0x8)
    class UTextBlock* TextPhotoModeIsOn;                                              // 0x0538 (size: 0x8)
    class UUI_Slider_C* Tint;                                                         // 0x0540 (size: 0x8)
    class UOverlay* TutorialsOverlay;                                                 // 0x0548 (size: 0x8)
    class UVerticalBox* VerticalBox_381;                                              // 0x0550 (size: 0x8)
    class UUI_Slider_C* Vignette;                                                     // 0x0558 (size: 0x8)
    class UWBP_PressForTutorial_C* WBP_PressForTutorial;                              // 0x0560 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcherPM;                                          // 0x0568 (size: 0x8)
    class UWidget* CurrentGenericWidgetElement;                                       // 0x0570 (size: 0x8)
    int32 CurrentTab;                                                                 // 0x0578 (size: 0x4)
    int32 LastTabIndex;                                                               // 0x057C (size: 0x4)
    bool bUsingFreeCamera;                                                            // 0x0580 (size: 0x1)
    class ABP_FreeCamera_C* FreeCameraActor;                                          // 0x0588 (size: 0x8)
    class UCameraComponent* FreeCameraComponent;                                      // 0x0590 (size: 0x8)
    FRotator EditedCameraRoll;                                                        // 0x0598 (size: 0xC)
    float EditedCameraFOV;                                                            // 0x05A4 (size: 0x4)
    FUI_PhotoMode_CED_FreeCameraFOV ED_FreeCameraFOV;                                 // 0x05A8 (size: 0x10)
    void ED_FreeCameraFOV(float FOVValue);
    FUI_PhotoMode_CED_FreeCameraRotation ED_FreeCameraRotation;                       // 0x05B8 (size: 0x10)
    void ED_FreeCameraRotation(FRotator RotationValue);
    bool bShowingMouseCursor;                                                         // 0x05C8 (size: 0x1)
    bool bMenuHidden;                                                                 // 0x05C9 (size: 0x1)
    class UWidget* CurrentGenericWidgetParent;                                        // 0x05D0 (size: 0x8)
    bool bCanFocus;                                                                   // 0x05D8 (size: 0x1)
    class UUI_Gallery_C* GalleryReference;                                            // 0x05E0 (size: 0x8)
    class UBPC_PhotoMode_C* PhotoModeComponentReference;                              // 0x05E8 (size: 0x8)
    bool bShowPhotoModeIsOnWarning?;                                                  // 0x05F0 (size: 0x1)
    bool bIsTakingPhoto;                                                              // 0x05F1 (size: 0x1)
    TArray<UUI_Slider_C*> CommonSliders;                                              // 0x05F8 (size: 0x10)
    TArray<UUI_Selector_C*> SelectorSliders;                                          // 0x0608 (size: 0x10)
    TArray<UUI_Checkbox_C*> CommonCheckboxes;                                         // 0x0618 (size: 0x10)
    bool bUsingAutofocus;                                                             // 0x0628 (size: 0x1)
    TMap<UMeshComponent*, TEnumAsByte<ECollisionResponse>> PlayerMeshes;              // 0x0630 (size: 0x50)
    FWeightedBlendable LogoWeightedBlend;                                             // 0x0680 (size: 0x10)
    FWeightedBlendable FrameWeightedBlend;                                            // 0x0690 (size: 0x10)
    FWeightedBlendable FrameToAdd;                                                    // 0x06A0 (size: 0x10)
    bool bCanTakePhoto;                                                               // 0x06B0 (size: 0x1)
    class UMaterialInstanceDynamic* LogoDynamicMaterial;                              // 0x06B8 (size: 0x8)
    class UMaterialInstanceDynamic* FrameDynamicMaterial;                             // 0x06C0 (size: 0x8)
    FIntPoint ScreenshotResolution;                                                   // 0x06C8 (size: 0x8)
    FWeightedBlendable PostProcessMaterialToAdd;                                      // 0x06D0 (size: 0x10)
    bool bHighResFunction;                                                            // 0x06E0 (size: 0x1)
    TArray<UUI_TabButton_C*> CommonButtons;                                           // 0x06E8 (size: 0x10)
    bool bShowGrid?;                                                                  // 0x06F8 (size: 0x1)
    bool bWithUI;                                                                     // 0x06F9 (size: 0x1)
    FIntPoint DefaultUserScreenResolution;                                            // 0x06FC (size: 0x8)
    bool bKeyboardInput;                                                              // 0x0704 (size: 0x1)
    bool bGamepadInput;                                                               // 0x0705 (size: 0x1)
    bool bUpDownIsNowLeftRight;                                                       // 0x0706 (size: 0x1)
    FRotator LastControlRotation;                                                     // 0x0708 (size: 0xC)
    bool bCanUpdateMouseWheel;                                                        // 0x0714 (size: 0x1)
    FVector CameraLocation;                                                           // 0x0718 (size: 0xC)
    float CameraDistanceTAL;                                                          // 0x0724 (size: 0x4)
    float FOV;                                                                        // 0x0728 (size: 0x4)
    FRotator Roll;                                                                    // 0x072C (size: 0xC)
    FKey LastKeyPressed;                                                              // 0x0738 (size: 0x18)
    float CameraMoveDelta;                                                            // 0x0750 (size: 0x4)
    FString LastScreenshotPath;                                                       // 0x0758 (size: 0x10)
    FString LastScreenshotName;                                                       // 0x0768 (size: 0x10)
    FString LastThumbnailPath;                                                        // 0x0778 (size: 0x10)
    FString LastThumbnailName;                                                        // 0x0788 (size: 0x10)
    bool bTurnToCamera;                                                               // 0x0798 (size: 0x1)
    FRotator PlayerRotationBackup;                                                    // 0x079C (size: 0xC)
    class ABP_ScreenshotManager_C* ScreenshotManagerRef;                              // 0x07A8 (size: 0x8)
    class UTexture* CurrentLogo;                                                      // 0x07B0 (size: 0x8)
    bool bIsCurrentLogoSRGB;                                                          // 0x07B8 (size: 0x1)
    class UMaterialInstanceDynamic* SharpnessMaterial;                                // 0x07C0 (size: 0x8)
    class ABP_FocusPoint_C* FocusPoint;                                               // 0x07C8 (size: 0x8)
    bool FocusOnClick;                                                                // 0x07D0 (size: 0x1)
    class UMaterialInstanceDynamic* CustomMotionBlur;                                 // 0x07D8 (size: 0x8)
    TArray<FText> BorderNames;                                                        // 0x07E0 (size: 0x10)
    int32 CurrentActiveCamera;                                                        // 0x07F0 (size: 0x4)
    class ABP_JUnkyardPhotoPlatform_C* JunkyardPhotoPlatform;                         // 0x07F8 (size: 0x8)
    class AActor* CurrentHightlightedActor;                                           // 0x0800 (size: 0x8)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Get Photo Resolution(FIntPoint& Resolution);
    ESlateVisibility Get Focus Region Visibility();
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    void Set Focus Distance(bool bIsHitValid, FPostProcessSettings& PostProcess, float Distance);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Update Logo Color(bool bSRGB);
    ESlateVisibility ShowHideCharacterRotation();
    FText getScreenshotTitle();
    float getAdjustedWorldDeltaSeconds();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    ESlateVisibility HideMenu();
    ESlateVisibility UpDownCameraGamepadVisibility();
    ESlateVisibility LeftRightCameraGamepadVisibility();
    ESlateVisibility SwapOptionGamepadVisibility();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    ESlateVisibility FocusDistanceVisibility();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void RemoveMaterialFromCamera(const TArray<FWeightedBlendable>& TargetArray, const FWeightedBlendable& Item);
    ESlateVisibility GridVisibility();
    FText GetFocusDistance();
    ESlateVisibility ShowHidePhotoModeIsOnWarning();
    ESlateVisibility OpenGalleryButtonVisibility();
    ESlateVisibility TakePictureButtonVisibility();
    ESlateVisibility Up Down Left Right Buttons Visibility();
    ESlateVisibility MoveButtonVisibility();
    ESlateVisibility ShowHideMouseButtonVisibility();
    ESlateVisibility FreeCameraButtonVisibility();
    FText ShowHideMouseTxtButton();
    FText CameraModeTxt();
    void ActiveTab(int32 TabIndex, class UUI_TabButton_C* ButtonToNotModify);
    void SetMenuIcons(int32 Index);
    void OnLoaded_82A7579942174F38FE2AD9A2E247AA34(class UObject* Loaded);
    void SendPhotoData(FS_PhotosData PhotoData);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Initialize();
    void GetAnyKey(FKey Key);
    void ChangeTab(int32 TabIndex);
    void Focus(const class UWidget*& WidgetItem);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Dispatchers();
    void OnDestruct();
    void InterpolationUpdater(float DeltaTime);
    void ChangeFreeCameraRotation(FRotator RotationValue);
    void ChangeFreeCameraFOV(float FOVValue);
    void BndEvt__Command_ChangeTab_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
    void SetFocusBasedOnTab(int32 Index);
    void TabToOpen(int32 TabIndex, class UUI_TabButton_C* CommonButtonPressed);
    void BndEvt__Command_Mouse_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
    void ShowMouse();
    void ResetShowMouseCursor();
    void BndEvt__Command_HideUI_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
    void OpenFreeCamera();
    void OnCameraStopped();
    void OnCameraMoved();
    void BndEvt__Command_FreeCamera_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
    void CloseFreeCamera();
    void BndEvt__Command_Close_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature();
    void BndEvt__Command_Reset_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();
    void BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_0_ResetDispatcher__DelegateSignature();
    void BndEvt__Command_Down_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
    void BndEvt__Command_Up_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
    void BndEvt__Command_Right_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
    void BndEvt__Command_Left_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
    void MakeScreenshot();
    void Register Photo(FString Save New Photo Title, FString Save New Photo Photo Full Path, FString Save New Photo Thumbnail Full Path);
    void BndEvt__CommandButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
    void BlockScreenshot();
    void Screenshot();
    void MakeScreenshotRender();
    void MakeRegister();
    void MakeThumbnail();
    void BndEvt__Command_Album_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
    void ResetKeyboardIcons();
    void BndEvt__FieldOfView_K2Node_ComponentBoundEvent_8_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__CameraRoll_K2Node_ComponentBoundEvent_7_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Grid_K2Node_ComponentBoundEvent_6_OnCheckboxValueChanged__DelegateSignature(bool Value);
    void BndEvt__MotionBlur_K2Node_ComponentBoundEvent_13_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Autofocus_K2Node_ComponentBoundEvent_5_OnCheckboxValueChanged__DelegateSignature(bool Value);
    void SetFocusOnClick();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_32_OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_18_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_16_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_15_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_17_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Slider_SimplifiedGamma_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Slider_SimplifiedContrast_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Slider_SimplifiedSaturation_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__LogoSelector_K2Node_ComponentBoundEvent_27_OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void BndEvt__LogoVerticalAlignment_K2Node_ComponentBoundEvent_26_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__LogoSize_K2Node_ComponentBoundEvent_25_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__LogoAngle_K2Node_ComponentBoundEvent_23_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__LogoHorizontalAlignment_K2Node_ComponentBoundEvent_24_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Filter_K2Node_ComponentBoundEvent_31_OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_9_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Rendering_K2Node_ComponentBoundEvent_30_OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void BndEvt__FrameSelector_K2Node_ComponentBoundEvent_29_OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void BndEvt__FrameSize_K2Node_ComponentBoundEvent_22_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__FrameRed_K2Node_ComponentBoundEvent_21_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__FrameGreen_K2Node_ComponentBoundEvent_20_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__FrameBlue_K2Node_ComponentBoundEvent_19_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Brightness_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Tint_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Temperature_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Vignette_K2Node_ComponentBoundEvent_14_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__FilmGrain_K2Node_ComponentBoundEvent_12_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_11_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_10_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__BlueCorrection_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__Aperture_K2Node_ComponentBoundEvent_33_OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void BndEvt__SensorWidth_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void BndEvt__FocusDistance_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void ResetColorGrading();
    void BndEvt__CameraDistance_K2Node_ComponentBoundEvent_6_OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
    void CameraDistanceMouseWheel(float Delta);
    void CameraLeftRight(float Value);
    void CameraUpDown(float Value);
    void BndEvt__HideCharacter_K2Node_ComponentBoundEvent_4_OnCheckboxValueChanged__DelegateSignature(bool Value);
    void BndEvt__CharacterRotation_K2Node_ComponentBoundEvent_3_OnCheckboxValueChanged__DelegateSignature(bool Value);
    void BndEvt__PhotoResolution_K2Node_ComponentBoundEvent_28_OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void OnFreenCameraEnd();
    void OnFreeCameraStart(class ABP_FreeCamera_C* FreeCameraReference);
    void ExecuteUbergraph_UI_PhotoMode(int32 EntryPoint);
    void ED_FreeCameraRotation__DelegateSignature(FRotator RotationValue);
    void ED_FreeCameraFOV__DelegateSignature(float FOVValue);
}; // Size: 0x808

#endif
