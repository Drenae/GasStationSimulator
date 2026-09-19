---@meta

---@class UWBP_ExhibitionPanel_C : UExhibitionSpotWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field UpDetails UWidgetAnimation
---@field OnDetailsBack UWidgetAnimation
---@field OnDetailsClicked UWidgetAnimation
---@field FadeOut UWidgetAnimation
---@field FadeIn UWidgetAnimation
---@field OnHoverExit UWidgetAnimation
---@field OnHoverLeftButton UWidgetAnimation
---@field OnHoverRightButton UWidgetAnimation
---@field OnHoverBack UWidgetAnimation
---@field OnHover UWidgetAnimation
---@field ActiveSale UOverlay
---@field ArrowExit_ICO_1 UImage
---@field BackButton UGSSButton
---@field CarName_Text UTextBlock
---@field CarPrice_TXT UTextBlock
---@field ChangeCarsView_Horizostal UHorizontalBox
---@field ConfirmSellButton UButton
---@field ConfirmSoldButton UButton
---@field ConfirmSoldOverlay UOverlay
---@field DeleteSale_Button UButton
---@field DeleteSaleOverlay UOverlay
---@field Details_text UTextBlock
---@field DetailsButton UGSSButton
---@field DetailsIcon UImage
---@field Exit_TXT UTextBlock
---@field Fade UImage
---@field Fee_Horizontal UHorizontalBox
---@field FeeInfo_TXT UTextBlock
---@field FinalPrice_TXT UTextBlock
---@field FinalPrice_TXT_1 UTextBlock
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_6 UImage
---@field Image_47 UImage
---@field Image_55 UImage
---@field Image_249 UImage
---@field Image_292 UImage
---@field Interest_Vertical UVerticalBox
---@field Interest_Vertical_1 UVerticalBox
---@field InterestValue_percent UTextBlock
---@field InterestValue_percent_2 UTextBlock
---@field InterestValue_TXT UTextBlock
---@field InterestValue_TXT_1 UTextBlock
---@field LeftButton UButton
---@field Main2VerticalBox UVerticalBox
---@field MainVertical UVerticalBox
---@field MiniGames_Tutorial_Fame UMiniGames_Tutorial_C
---@field Price_Slider USlider
---@field Reset_Button UButton
---@field RightButton UButton
---@field Sale_Overlay UOverlay
---@field SellPriceValue_TXT UTextBlock
---@field TextBlock_466 UTextBlock
---@field TimeLeft_Horizontal UHorizontalBox
---@field TopInfor_Vertical UVerticalBox
---@field Tutorials_holder UOverlay
---@field ViewersCount_Text UTextBlock
---@field WBP_CarWreckTooltip UWBP_CarWreckTooltip_C
---@field WBP_CarWreckTooltip_1 UWBP_CarWreckTooltip_C
---@field WBP_KeyHint_LeftTrigger UWBP_KeyHint_C
---@field WBP_KeyHint_RightTrigger UWBP_KeyHint_C
---@field WBP_KeyHint_Up_ButtonBottom UWBP_KeyHint_C
---@field WBP_KeyHint_Up_ButtonBottom_1 UWBP_KeyHint_C
---@field WBP_KeyHint_Up_ButtonLeft UWBP_KeyHint_C
---@field WBP_KeyHint_Up_ButtonLeft_1 UWBP_KeyHint_C
---@field WBP_KeyHint_Up_ButtonLeft_2 UWBP_KeyHint_C
---@field WBP_KeyHint_Up_ButtonLeft_3 UWBP_KeyHint_C
---@field WBP_KeyHint_Up_ButtonTop UWBP_KeyHint_C
---@field WBP_KeyHint_Up_LeftShoulder UWBP_KeyHint_C
---@field WBP_KeyHint_Up_RightShoulder UWBP_KeyHint_C
---@field WidgetSwitcher_0 UWidgetSwitcher
---@field CurrentCar AJunkyardCarWreckCustomizable
---@field CurrentCarSellPrice float
---@field CurrentExhibitionSpotSlot AExhibitionSpotSlot
---@field bTutorialFInished boolean
---@field bIsExpanded boolean
---@field bTutorial6 boolean
---@field bSliderValueChanged boolean
---@field TutorialIndex int32
---@field CurrentAmount int32
---@field ['Old Amount'] int32
---@field ['Max Ammount'] int32
---@field SaleFee int32
---@field ['Slider Value'] float
---@field IsGamepadNavigationLimited boolean
---@field GamepadUnlockedKeys TMap<FKey, boolean>
---@field IsBindedNextTutorial boolean
---@field IsLeftHold boolean
---@field IsRightHolded boolean
---@field InputMultiplier float
local UWBP_ExhibitionPanel_C = {}

---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UWBP_ExhibitionPanel_C:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_ExhibitionPanel_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param Input FKeyEvent
---@param IsAllowed boolean
function UWBP_ExhibitionPanel_C:IsNavigationAllowed(Input, IsAllowed) end
function UWBP_ExhibitionPanel_C:UnlockGamepadNavigation() end
---@param UnlockedKeys TArray<FKey>
function UWBP_ExhibitionPanel_C:LimitGamepadNavigation(UnlockedKeys) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_ExhibitionPanel_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UWBP_ExhibitionPanel_C:HintsVisibility(Visible) end
---@param Increase boolean
function UWBP_ExhibitionPanel_C:GamePadChangeSliderValue(Increase) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_ExhibitionPanel_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param ReturnValue1 float
function UWBP_ExhibitionPanel_C:GetUncleTax(ReturnValue1) end
---@param Content UWidget
---@param Widget UWidget
UWBP_ExhibitionPanel_C['Add Tut to Overlay'] = function(self, Content, Widget) end
function UWBP_ExhibitionPanel_C:TutorialEnd() end
function UWBP_ExhibitionPanel_C:Tutorial6() end
function UWBP_ExhibitionPanel_C:Tutorial5_1() end
function UWBP_ExhibitionPanel_C:Tutorial5() end
---@param Value float
function UWBP_ExhibitionPanel_C:Tutorial4(Value) end
function UWBP_ExhibitionPanel_C:Tutorial3() end
function UWBP_ExhibitionPanel_C:Tutorial2() end
function UWBP_ExhibitionPanel_C:SetDefaultValues() end
function UWBP_ExhibitionPanel_C:UpdateActiveSale() end
function UWBP_ExhibitionPanel_C:SetPopupSettingsWidget() end
function UWBP_ExhibitionPanel_C:Finished_CA7844E04EB141459E39BB87D7A47258() end
function UWBP_ExhibitionPanel_C:Finished_A0BAC7ED4C8A6E07413D0FA1E77A539E() end
function UWBP_ExhibitionPanel_C:Finished_8867CFF5427EF1F6E272F68237936AF5() end
function UWBP_ExhibitionPanel_C:Construct() end
function UWBP_ExhibitionPanel_C:BndEvt__ExhibitionPanel_ExhibitionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param Value float
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_Price_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(Value) end
---@param InCarWreck AJunkyardCarWreckCustomizable
function UWBP_ExhibitionPanel_C:SetCarPrice(InCarWreck) end
function UWBP_ExhibitionPanel_C:HideSaleSettingsWindow() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_ConfirmSellButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_LeftButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_LeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_RightButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_RightButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_BackButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_Reset_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_Reset_Button_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature() end
---@param bShow boolean
---@param PickedCar AJunkyardCarWreckCustomizable
function UWBP_ExhibitionPanel_C:ShowHideCarCloseView(bShow, PickedCar) end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_RightButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_LeftButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature() end
---@param UpdatedTime FTimeStruct
function UWBP_ExhibitionPanel_C:OnGameTimeUpdated(UpdatedTime) end
---@param SaleSlot FSaleSlot
---@param bCarSold boolean
function UWBP_ExhibitionPanel_C:OnSaleFinished(SaleSlot, bCarSold) end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_ConfirmSoldButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:SetActiveSaleBinding() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_Reset_Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_DeleteSale_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:CustomEscape() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_DetailsButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ExhibitionPanel_C:BndEvt__WBP_ExhibitionPanel_Price_Slider_K2Node_ComponentBoundEvent_16_OnMouseCaptureEndEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_ExhibitionPanel_C:PreConstruct(IsDesignTime) end
function UWBP_ExhibitionPanel_C:GamePadDeleteSale() end
function UWBP_ExhibitionPanel_C:GamePadConfirmSale() end
function UWBP_ExhibitionPanel_C:GamePadClickDetails() end
---@param Left boolean
function UWBP_ExhibitionPanel_C:GamePadClickArrowButton(Left) end
function UWBP_ExhibitionPanel_C:GamePadReset() end
function UWBP_ExhibitionPanel_C:GamePadConfirmSold() end
---@param Value float
function UWBP_ExhibitionPanel_C:GamePadCustomValueChanged(Value) end
function UWBP_ExhibitionPanel_C:CustomEvent_0() end
function UWBP_ExhibitionPanel_C:Destruct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_ExhibitionPanel_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_ExhibitionPanel_C:ExecuteUbergraph_WBP_ExhibitionPanel(EntryPoint) end


