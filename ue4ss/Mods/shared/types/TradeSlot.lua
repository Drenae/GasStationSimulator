---@meta

---@class UTradeSlot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverButton UWidgetAnimation
---@field MouseEnterAnim UWidgetAnimation
---@field AddAnim UWidgetAnimation
---@field ActionButtonOnTable UButton
---@field Amount_button_minus UAmount_button_C
---@field Amount_button_plus UAmount_button_C
---@field Amount_Slider USlider
---@field ContentOverlay UOverlay
---@field Image UImage
---@field Image_65 UImage
---@field Item_ICON UImage
---@field ItemName_TXT UTextBlock
---@field ItemValue_SpingBox USpinBox
---@field MainOverlay UOverlay
---@field ProgressBar_62 UProgressBar
---@field TextBlock UTextBlock
---@field VerticalBox_select_amount UVerticalBox
---@field WBP_KeyHint_Up_RightShoulder UWBP_KeyHint_C
---@field IsEmpty boolean
---@field IsPlayerItem boolean
---@field Item TSubclassOf<AItem>
---@field IndexThatMoved int32
---@field ParenRef UAirStripTrade_Test_C
---@field ['Trade Value'] float
---@field ['Max Ammount'] int32
---@field GeneratedItem FGeneratedItem
---@field CurrentAmount int32
---@field ItemTradingBoost ETradingBoosts
---@field bIsTutorial boolean
---@field bIsTequilaTutorialItem boolean
---@field ItemName FText
---@field ItemIcon TSoftObjectPtr<UTexture2D>
---@field ItemClass TSoftClassPtr<AItem>
---@field ['Old Amount'] int32
local UTradeSlot_C = {}

---@param Visible boolean
function UTradeSlot_C:HintsVisibility(Visible) end
function UTradeSlot_C:UpdateMainWidget() end
---@return float
function UTradeSlot_C:GetPercent_0() end
function UTradeSlot_C:Finished_5244035D417B0E4AD439EDA878793CE4() end
---@param InValue float
---@param CommitMethod ETextCommit::Type
function UTradeSlot_C:BndEvt__TradeSlot_SpinBox_85_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature(InValue, CommitMethod) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UTradeSlot_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UTradeSlot_C:OnMouseLeave(MouseEvent) end
---@param IndexThatMovedIt int32
---@param Parent UAirStripTrade_Test_C
---@param IsPlayerItem boolean
---@param TradeValue float
---@param MaxAmmount int32
---@param TradingBoost ETradingBoosts
---@param ItemName FText
---@param ItemIcon TSoftObjectPtr<UTexture2D>
---@param ItemClass TSoftClassPtr<AItem>
function UTradeSlot_C:UpdateAfterAction(IndexThatMovedIt, Parent, IsPlayerItem, TradeValue, MaxAmmount, TradingBoost, ItemName, ItemIcon, ItemClass) end
function UTradeSlot_C:BndEvt__TradeSlot_ActionButtonOnTable_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UTradeSlot_C:BndEvt__TradeSlot_Amount_button_K2Node_ComponentBoundEvent_2_ClickAmountChange__DelegateSignature() end
function UTradeSlot_C:BndEvt__TradeSlot_Amount_button_1_K2Node_ComponentBoundEvent_1_ClickAmountChange__DelegateSignature() end
function UTradeSlot_C:BndEvt__TradeSlot_ActionButtonOnTable_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UTradeSlot_C:BndEvt__TradeSlot_ActionButtonOnTable_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() end
function UTradeSlot_C:BndEvt__TradeSlot_Amount_Slider_K2Node_ComponentBoundEvent_7_OnControllerCaptureEndEvent__DelegateSignature() end
function UTradeSlot_C:BndEvt__TradeSlot_Amount_Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature() end
---@param Value float
function UTradeSlot_C:BndEvt__TradeSlot_Amount_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(Value) end
function UTradeSlot_C:GamePadClick() end
---@param Hover boolean
function UTradeSlot_C:GamePadHover(Hover) end
---@param Increase boolean
function UTradeSlot_C:GamePadClickAmount(Increase) end
function UTradeSlot_C:Construct() end
function UTradeSlot_C:Destruct() end
function UTradeSlot_C:CustomEvent_0() end
---@param EntryPoint int32
function UTradeSlot_C:ExecuteUbergraph_TradeSlot(EntryPoint) end


