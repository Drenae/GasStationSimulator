---@meta

---@class UUI_PhotoMode_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FocusUnderClick UWidgetAnimation
---@field OpenPhotoMode UWidgetAnimation
---@field NotificationScreenshotTaken UWidgetAnimation
---@field Aperture UUI_Selector_C
---@field APM_SizeMenu USizeBox
---@field Autofocus UUI_Checkbox_C
---@field BorderScreenshotTaken UBorder
---@field Brightness UUI_Slider_C
---@field btn_CameraTab UUI_TabButton_C
---@field btn_ColorBalanceTab UUI_TabButton_C
---@field btn_DepthOfFieldTab UUI_TabButton_C
---@field btn_DisplayTab UUI_TabButton_C
---@field btn_FiltersTab UUI_TabButton_C
---@field btn_FramesTab UUI_TabButton_C
---@field btn_LogoTab UUI_TabButton_C
---@field btn_ScreenEffectsTab UUI_TabButton_C
---@field ['Buttons-Border'] UBorder
---@field CameraDistance UUI_Slider_C
---@field CameraRoll UUI_Slider_C
---@field CanvasScreenshotTaken UCanvasPanel
---@field CaptureMouseArea UImage
---@field CenterGrid_1 UImage
---@field CharacterRotation UUI_Checkbox_C
---@field ChromaticAberrationIntensity UUI_Slider_C
---@field ChromaticAberrationOffset UUI_Slider_C
---@field ColorBalanceBlue UUI_Slider_C
---@field ColorBalanceGreen UUI_Slider_C
---@field ColorBalanceIntensity UUI_Slider_C
---@field ColorBalanceOptions UVerticalBox
---@field ColorBalanceRed UUI_Slider_C
---@field ColorBalanceSelector UUI_Selector_C
---@field ColorGradingMode UWidgetSwitcher
---@field Command_Album UUI_CommandButton_C
---@field Command_ChangeTab UUI_CommandButton_C
---@field Command_Close UUI_CommandButton_C
---@field Command_Close_1 UUI_CommandButton_C
---@field Command_Down UUI_CommandButton_C
---@field Command_FreeCamera UUI_CommandButton_C
---@field Command_HideUI UUI_CommandButton_C
---@field Command_Left UUI_CommandButton_C
---@field Command_Mouse UUI_CommandButton_C
---@field Command_Pause UUI_CommandButton_C
---@field Command_Reset UUI_CommandButton_C
---@field Command_Right UUI_CommandButton_C
---@field Command_Swap UUI_CommandButton_C
---@field Command_TakePicture UUI_CommandButton_C
---@field Command_Up UUI_CommandButton_C
---@field Divisor UImage
---@field FieldOfView UUI_Slider_C
---@field FilmGrain UUI_Slider_C
---@field Filter UUI_Selector_C
---@field FocusDistance UUI_Slider_C
---@field FocusDistanceTxt UTextBlock
---@field FocusDistanceTxt_1 UTextBlock
---@field FocusRegion UOverlay
---@field FrameBlue UUI_Slider_C
---@field FrameGreen UUI_Slider_C
---@field FrameRed UUI_Slider_C
---@field FrameSelector UUI_Selector_C
---@field FrameSize UUI_Slider_C
---@field Grid UUI_Checkbox_C
---@field GRIDAutofocus UCanvasPanel
---@field HideCharacter UUI_Checkbox_C
---@field Image_34 UImage
---@field Image_211 UImage
---@field img_PhotoModeIsOn UImage
---@field imgFocusRegion UImage
---@field ['Info-Border'] UBorder
---@field LogoAngle UUI_Slider_C
---@field LogoHorizontalAlignment UUI_Slider_C
---@field LogoSelector UUI_Selector_C
---@field LogoSize UUI_Slider_C
---@field LogoVerticalAlignment UUI_Slider_C
---@field LUTIntensity UUI_Slider_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field MotionBlur UUI_Slider_C
---@field ['MoveCameraKeys-CanvasPanel'] UCanvasPanel
---@field PhotoModeIsOnHidedMenu UCanvasPanel
---@field PhotoModeWidget UWidgetSwitcher
---@field PhotoResolution UUI_Selector_C
---@field PreviewPhoto UImage
---@field Rendering UUI_Selector_C
---@field SensorWidth UUI_Slider_C
---@field Sharpness UUI_Slider_C
---@field Slider_SimplifiedContrast UUI_Slider_C
---@field Slider_SimplifiedGamma UUI_Slider_C
---@field Slider_SimplifiedSaturation UUI_Slider_C
---@field TakePhoto_HorizontalBox UHorizontalBox
---@field Temperature UUI_Slider_C
---@field TextBlock_192 UTextBlock
---@field TextPhotoModeIsOn UTextBlock
---@field Tint UUI_Slider_C
---@field TutorialsOverlay UOverlay
---@field VerticalBox_381 UVerticalBox
---@field Vignette UUI_Slider_C
---@field WBP_PressForTutorial UWBP_PressForTutorial_C
---@field WidgetSwitcherPM UWidgetSwitcher
---@field CurrentGenericWidgetElement UWidget
---@field CurrentTab int32
---@field LastTabIndex int32
---@field bUsingFreeCamera boolean
---@field FreeCameraActor ABP_FreeCamera_C
---@field FreeCameraComponent UCameraComponent
---@field EditedCameraRoll FRotator
---@field EditedCameraFOV float
---@field ED_FreeCameraFOV FUI_PhotoMode_CED_FreeCameraFOV
---@field ED_FreeCameraRotation FUI_PhotoMode_CED_FreeCameraRotation
---@field bShowingMouseCursor boolean
---@field bMenuHidden boolean
---@field CurrentGenericWidgetParent UWidget
---@field bCanFocus boolean
---@field GalleryReference UUI_Gallery_C
---@field PhotoModeComponentReference UBPC_PhotoMode_C
---@field ['bShowPhotoModeIsOnWarning?'] boolean
---@field bIsTakingPhoto boolean
---@field CommonSliders TArray<UUI_Slider_C>
---@field SelectorSliders TArray<UUI_Selector_C>
---@field CommonCheckboxes TArray<UUI_Checkbox_C>
---@field bUsingAutofocus boolean
---@field PlayerMeshes TMap<UMeshComponent, ECollisionResponse>
---@field LogoWeightedBlend FWeightedBlendable
---@field FrameWeightedBlend FWeightedBlendable
---@field FrameToAdd FWeightedBlendable
---@field bCanTakePhoto boolean
---@field LogoDynamicMaterial UMaterialInstanceDynamic
---@field FrameDynamicMaterial UMaterialInstanceDynamic
---@field ScreenshotResolution FIntPoint
---@field PostProcessMaterialToAdd FWeightedBlendable
---@field bHighResFunction boolean
---@field CommonButtons TArray<UUI_TabButton_C>
---@field ['bShowGrid?'] boolean
---@field bWithUI boolean
---@field DefaultUserScreenResolution FIntPoint
---@field bKeyboardInput boolean
---@field bGamepadInput boolean
---@field bUpDownIsNowLeftRight boolean
---@field LastControlRotation FRotator
---@field bCanUpdateMouseWheel boolean
---@field CameraLocation FVector
---@field CameraDistanceTAL float
---@field FOV float
---@field Roll FRotator
---@field LastKeyPressed FKey
---@field CameraMoveDelta float
---@field LastScreenshotPath FString
---@field LastScreenshotName FString
---@field LastThumbnailPath FString
---@field LastThumbnailName FString
---@field bTurnToCamera boolean
---@field PlayerRotationBackup FRotator
---@field ScreenshotManagerRef ABP_ScreenshotManager_C
---@field CurrentLogo UTexture
---@field bIsCurrentLogoSRGB boolean
---@field SharpnessMaterial UMaterialInstanceDynamic
---@field FocusPoint ABP_FocusPoint_C
---@field FocusOnClick boolean
---@field CustomMotionBlur UMaterialInstanceDynamic
---@field BorderNames TArray<FText>
---@field CurrentActiveCamera int32
---@field JunkyardPhotoPlatform ABP_JUnkyardPhotoPlatform_C
---@field CurrentHightlightedActor AActor
local UUI_PhotoMode_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUI_PhotoMode_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param Resolution FIntPoint
UUI_PhotoMode_C['Get Photo Resolution'] = function(self, Resolution) end
---@return ESlateVisibility
UUI_PhotoMode_C['Get Focus Region Visibility'] = function(self, ) end
---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UUI_PhotoMode_C:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end
---@param bIsHitValid boolean
---@param PostProcess FPostProcessSettings
---@param Distance float
UUI_PhotoMode_C['Set Focus Distance'] = function(self, bIsHitValid, PostProcess, Distance) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_PhotoMode_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param bSRGB boolean
UUI_PhotoMode_C['Update Logo Color'] = function(self, bSRGB) end
---@return ESlateVisibility
function UUI_PhotoMode_C:ShowHideCharacterRotation() end
---@return FText
function UUI_PhotoMode_C:getScreenshotTitle() end
---@return float
function UUI_PhotoMode_C:getAdjustedWorldDeltaSeconds() end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUI_PhotoMode_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@return ESlateVisibility
function UUI_PhotoMode_C:HideMenu() end
---@return ESlateVisibility
function UUI_PhotoMode_C:UpDownCameraGamepadVisibility() end
---@return ESlateVisibility
function UUI_PhotoMode_C:LeftRightCameraGamepadVisibility() end
---@return ESlateVisibility
function UUI_PhotoMode_C:SwapOptionGamepadVisibility() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_PhotoMode_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@return ESlateVisibility
function UUI_PhotoMode_C:FocusDistanceVisibility() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_PhotoMode_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param TargetArray TArray<FWeightedBlendable>
---@param Item FWeightedBlendable
function UUI_PhotoMode_C:RemoveMaterialFromCamera(TargetArray, Item) end
---@return ESlateVisibility
function UUI_PhotoMode_C:GridVisibility() end
---@return FText
function UUI_PhotoMode_C:GetFocusDistance() end
---@return ESlateVisibility
function UUI_PhotoMode_C:ShowHidePhotoModeIsOnWarning() end
---@return ESlateVisibility
function UUI_PhotoMode_C:OpenGalleryButtonVisibility() end
---@return ESlateVisibility
function UUI_PhotoMode_C:TakePictureButtonVisibility() end
---@return ESlateVisibility
UUI_PhotoMode_C['Up Down Left Right Buttons Visibility'] = function(self, ) end
---@return ESlateVisibility
function UUI_PhotoMode_C:MoveButtonVisibility() end
---@return ESlateVisibility
function UUI_PhotoMode_C:ShowHideMouseButtonVisibility() end
---@return ESlateVisibility
function UUI_PhotoMode_C:FreeCameraButtonVisibility() end
---@return FText
function UUI_PhotoMode_C:ShowHideMouseTxtButton() end
---@return FText
function UUI_PhotoMode_C:CameraModeTxt() end
---@param TabIndex int32
---@param ButtonToNotModify UUI_TabButton_C
function UUI_PhotoMode_C:ActiveTab(TabIndex, ButtonToNotModify) end
---@param Index int32
function UUI_PhotoMode_C:SetMenuIcons(Index) end
---@param Loaded UObject
function UUI_PhotoMode_C:OnLoaded_82A7579942174F38FE2AD9A2E247AA34(Loaded) end
---@param PhotoData FS_PhotosData
function UUI_PhotoMode_C:SendPhotoData(PhotoData) end
---@param IsDesignTime boolean
function UUI_PhotoMode_C:PreConstruct(IsDesignTime) end
function UUI_PhotoMode_C:Construct() end
function UUI_PhotoMode_C:Initialize() end
---@param Key FKey
function UUI_PhotoMode_C:GetAnyKey(Key) end
---@param TabIndex int32
function UUI_PhotoMode_C:ChangeTab(TabIndex) end
---@param WidgetItem UWidget
function UUI_PhotoMode_C:Focus(WidgetItem) end
---@param InFocusEvent FFocusEvent
function UUI_PhotoMode_C:OnRemovedFromFocusPath(InFocusEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUI_PhotoMode_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UUI_PhotoMode_C:OnMouseLeave(MouseEvent) end
function UUI_PhotoMode_C:Dispatchers() end
function UUI_PhotoMode_C:OnDestruct() end
---@param DeltaTime float
function UUI_PhotoMode_C:InterpolationUpdater(DeltaTime) end
---@param RotationValue FRotator
function UUI_PhotoMode_C:ChangeFreeCameraRotation(RotationValue) end
---@param FOVValue float
function UUI_PhotoMode_C:ChangeFreeCameraFOV(FOVValue) end
function UUI_PhotoMode_C:BndEvt__Command_ChangeTab_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature() end
---@param Index int32
function UUI_PhotoMode_C:SetFocusBasedOnTab(Index) end
---@param TabIndex int32
---@param CommonButtonPressed UUI_TabButton_C
function UUI_PhotoMode_C:TabToOpen(TabIndex, CommonButtonPressed) end
function UUI_PhotoMode_C:BndEvt__Command_Mouse_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:ShowMouse() end
function UUI_PhotoMode_C:ResetShowMouseCursor() end
function UUI_PhotoMode_C:BndEvt__Command_HideUI_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:OpenFreeCamera() end
function UUI_PhotoMode_C:OnCameraStopped() end
function UUI_PhotoMode_C:OnCameraMoved() end
function UUI_PhotoMode_C:BndEvt__Command_FreeCamera_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:CloseFreeCamera() end
function UUI_PhotoMode_C:BndEvt__Command_Close_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:BndEvt__Command_Reset_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_0_ResetDispatcher__DelegateSignature() end
function UUI_PhotoMode_C:BndEvt__Command_Down_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:BndEvt__Command_Up_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:BndEvt__Command_Right_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:BndEvt__Command_Left_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:MakeScreenshot() end
---@param Save_New_Photo_Title FString
---@param Save_New_Photo_Photo_Full_Path FString
---@param Save_New_Photo_Thumbnail_Full_Path FString
UUI_PhotoMode_C['Register Photo'] = function(self, Save_New_Photo_Title, Save_New_Photo_Photo_Full_Path, Save_New_Photo_Thumbnail_Full_Path) end
function UUI_PhotoMode_C:BndEvt__CommandButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:BlockScreenshot() end
function UUI_PhotoMode_C:Screenshot() end
function UUI_PhotoMode_C:MakeScreenshotRender() end
function UUI_PhotoMode_C:MakeRegister() end
function UUI_PhotoMode_C:MakeThumbnail() end
function UUI_PhotoMode_C:BndEvt__Command_Album_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature() end
function UUI_PhotoMode_C:ResetKeyboardIcons() end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__FieldOfView_K2Node_ComponentBoundEvent_8_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__CameraRoll_K2Node_ComponentBoundEvent_7_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param Value boolean
function UUI_PhotoMode_C:BndEvt__Grid_K2Node_ComponentBoundEvent_6_OnCheckboxValueChanged__DelegateSignature(Value) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__MotionBlur_K2Node_ComponentBoundEvent_13_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param Value boolean
function UUI_PhotoMode_C:BndEvt__Autofocus_K2Node_ComponentBoundEvent_5_OnCheckboxValueChanged__DelegateSignature(Value) end
function UUI_PhotoMode_C:SetFocusOnClick() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUI_PhotoMode_C:Tick(MyGeometry, InDeltaTime) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_PhotoMode_C:BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_32_OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_18_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_16_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_15_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_17_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__Slider_SimplifiedGamma_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__Slider_SimplifiedContrast_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__Slider_SimplifiedSaturation_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_PhotoMode_C:BndEvt__LogoSelector_K2Node_ComponentBoundEvent_27_OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__LogoVerticalAlignment_K2Node_ComponentBoundEvent_26_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__LogoSize_K2Node_ComponentBoundEvent_25_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__LogoAngle_K2Node_ComponentBoundEvent_23_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__LogoHorizontalAlignment_K2Node_ComponentBoundEvent_24_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_PhotoMode_C:BndEvt__Filter_K2Node_ComponentBoundEvent_31_OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_9_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_PhotoMode_C:BndEvt__Rendering_K2Node_ComponentBoundEvent_30_OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_PhotoMode_C:BndEvt__FrameSelector_K2Node_ComponentBoundEvent_29_OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__FrameSize_K2Node_ComponentBoundEvent_22_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__FrameRed_K2Node_ComponentBoundEvent_21_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__FrameGreen_K2Node_ComponentBoundEvent_20_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__FrameBlue_K2Node_ComponentBoundEvent_19_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__Brightness_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__Tint_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__Temperature_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__Vignette_K2Node_ComponentBoundEvent_14_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__FilmGrain_K2Node_ComponentBoundEvent_12_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_11_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_10_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__BlueCorrection_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_PhotoMode_C:BndEvt__Aperture_K2Node_ComponentBoundEvent_33_OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__SensorWidth_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__FocusDistance_K2Node_ComponentBoundEvent_1_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
function UUI_PhotoMode_C:ResetColorGrading() end
---@param SliderValue float
---@param bReset boolean
function UUI_PhotoMode_C:BndEvt__CameraDistance_K2Node_ComponentBoundEvent_6_OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end
---@param Delta float
function UUI_PhotoMode_C:CameraDistanceMouseWheel(Delta) end
---@param Value float
function UUI_PhotoMode_C:CameraLeftRight(Value) end
---@param Value float
function UUI_PhotoMode_C:CameraUpDown(Value) end
---@param Value boolean
function UUI_PhotoMode_C:BndEvt__HideCharacter_K2Node_ComponentBoundEvent_4_OnCheckboxValueChanged__DelegateSignature(Value) end
---@param Value boolean
function UUI_PhotoMode_C:BndEvt__CharacterRotation_K2Node_ComponentBoundEvent_3_OnCheckboxValueChanged__DelegateSignature(Value) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_PhotoMode_C:BndEvt__PhotoResolution_K2Node_ComponentBoundEvent_28_OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
function UUI_PhotoMode_C:OnFreenCameraEnd() end
---@param FreeCameraReference ABP_FreeCamera_C
function UUI_PhotoMode_C:OnFreeCameraStart(FreeCameraReference) end
---@param EntryPoint int32
function UUI_PhotoMode_C:ExecuteUbergraph_UI_PhotoMode(EntryPoint) end
---@param RotationValue FRotator
function UUI_PhotoMode_C:ED_FreeCameraRotation__DelegateSignature(RotationValue) end
---@param FOVValue float
function UUI_PhotoMode_C:ED_FreeCameraFOV__DelegateSignature(FOVValue) end


