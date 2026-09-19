---@meta

---@class UTradeItem_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NoItemsAlert UWidgetAnimation
---@field TutorialAnim UWidgetAnimation
---@field LostDelivery UWidgetAnimation
---@field StealAnim UWidgetAnimation
---@field ClickAnimPilots UWidgetAnimation
---@field ClickAnimPlayers UWidgetAnimation
---@field Hover UWidgetAnimation
---@field ActionButton UButton
---@field Image UImage
---@field Image_0 UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_242 UImage
---@field Image_arrow UImage
---@field Image_blocker UImage
---@field Image_delivery_lost UImage
---@field Image_hot_suff UImage
---@field Image_Roundabout UImage
---@field Image_steal UImage
---@field ItemAmount_TXT UTextBlock
---@field ItemIcon_IMG UImage
---@field ItemName_TXT UTextBlock
---@field Overlay_1 UOverlay
---@field Overlay_hot_stuff UOverlay
---@field Overlay_Steal UOverlay
---@field TextBlock_alert UTextBlock
---@field WBP_KeyHint_Up_RightShoulder UWBP_KeyHint_C
---@field ClickAdd FTradeItem_CClickAdd
---@field IsPlayerItem boolean
---@field TradeBoost ETradingBoosts
---@field Index int32
---@field IsMovedToTable boolean
---@field CurrentPickedValue int32
---@field MaxAmount int32
---@field TradeValue float
---@field ParentREF UAirStripTrade_Test_C
---@field bIsTutorial boolean
---@field ItemName FText
---@field ItemIcon TSoftObjectPtr<UTexture2D>
---@field ItemClass TSoftClassPtr<AItem>
local UTradeItem_C = {}

---@return UWidget
function UTradeItem_C:GetToolTipWidget_0() end
function UTradeItem_C:Finished_A66A9E7444CDB2973E04749CB96C5776() end
function UTradeItem_C:Finished_C235ACBF4A402ECE6896AAB3F2C9EB08() end
function UTradeItem_C:BndEvt__TradeItem_Button_57_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UTradeItem_C:BndEvt__TradeItem_Button_57_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UTradeItem_C:BndEvt__TradeItem_Button_57_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UTradeItem_C:Construct() end
---@param Hover boolean
function UTradeItem_C:GamePadHover(Hover) end
function UTradeItem_C:GamePadClick() end
---@param EntryPoint int32
function UTradeItem_C:ExecuteUbergraph_TradeItem(EntryPoint) end
function UTradeItem_C:ClickAdd__DelegateSignature() end


