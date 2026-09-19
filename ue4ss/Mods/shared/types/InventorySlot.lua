---@meta

---@class UInventorySlot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NoStock UWidgetAnimation
---@field OnHovAll UWidgetAnimation
---@field OnHov10 UWidgetAnimation
---@field OnHov5 UWidgetAnimation
---@field AddPercentButton UDragoButton
---@field AirstripIcon UImage
---@field CurrentProductPercent_TXT_2 UTextBlock
---@field GamePadPlace10_IMG UImage
---@field GamePadPlace10_IMG_1 UImage
---@field GamePadPlace5_IMG UImage
---@field GamePadPlace5_IMG_1 UImage
---@field GamePadPlaceAll_IMG UImage
---@field Hovering_IMG UImage
---@field HoverVizualTrigger UDragoButton
---@field Image_58 UImage
---@field Image_105 UImage
---@field Image_198 UImage
---@field Image_207 UImage
---@field Item_ICON UImage
---@field Name UTextBlock
---@field Place10_TXT UTextBlock
---@field Place10Button UDragoButton
---@field Place5_TXT UTextBlock
---@field Place5_TXT_1 UTextBlock
---@field Place5Button UDragoButton
---@field PlaceAll_Button UDragoButton
---@field ProgressSegmentColor UImage
---@field QuantityInventory UTextBlock
---@field RemovePercentbutton UDragoButton
---@field ShelfQuantity UHorizontalBox
---@field ShelfQuantityAmount UTextBlock
---@field SlotSwitcher UWidgetSwitcher
---@field VerticalBox UVerticalBox
---@field WBP_KeyHint_LeftButton UWBP_KeyHint_C
---@field WBP_KeyHint_LeftButton_1 UWBP_KeyHint_C
---@field ItemClass TSubclassOf<AItem>
---@field OnClicked FInventorySlot_COnClicked
---@field Shelf AShelf
---@field AmountItemToPut int32
---@field UserWidget UUserWidget
---@field OnHover UWidgetAnimation
---@field IsUnHover boolean
---@field ButtonArray TArray<UDragoButton>
---@field NewVar_0 boolean
---@field ButtonMap TMap<int32, int32>
---@field selectRowButton int32
---@field KeySelectedButton int32
---@field ActiveInventory UInventoryComponent
---@field IsRefillment boolean
---@field GradientColor FLinearColor
---@field OnRestockValueChanged FInventorySlot_COnRestockValueChanged
---@field WarehouseInventory UInventoryComponent
---@field AirstripInventory UInventoryComponent
---@field OnPlaced FInventorySlot_COnPlaced
---@field OnNoEnoughStock FInventorySlot_COnNoEnoughStock
local UInventorySlot_C = {}

---@param IsSlotActive boolean
function UInventorySlot_C:ShowGamepadHints(IsSlotActive) end
---@param Success boolean
function UInventorySlot_C:PutItems(Success) end
---@param Max int32
function UInventorySlot_C:TryToPutItems(Max) end
---@param Ceiling int32
function UInventorySlot_C:CalculateItemsToPut(Ceiling) end
function UInventorySlot_C:PlayNoStockAnimation() end
---@param ItemV1 TSoftClassPtr<AItem>
---@param ItemV2 TSoftClassPtr<AItem>
---@param CanPut boolean
function UInventorySlot_C:CheckTequilla(ItemV1, ItemV2, CanPut) end
---@param Condition boolean
function UInventorySlot_C:SetHovered(Condition) end
---@param newIndex int32
function UInventorySlot_C:GetActualIndex(newIndex) end
---@param IsChanged boolean
function UInventorySlot_C:decrementsKey(IsChanged) end
---@param IsChanged boolean
function UInventorySlot_C:incrementsKey(IsChanged) end
---@param IsChanged boolean
UInventorySlot_C['Decrement Row'] = function(self, IsChanged) end
---@param IsChanged boolean
function UInventorySlot_C:IncrementRow(IsChanged) end
function UInventorySlot_C:Click() end
---@param IsHovered boolean
UInventorySlot_C['On Hover'] = function(self, IsHovered) end
function UInventorySlot_C:RefreshSlot() end
function UInventorySlot_C:BndEvt__Place10Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__Place10Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__HoverVizualTrigger_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__HoverVizualTrigger_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__PlaceAll_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__PlaceAll_Button_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__InventorySlot_Place5Button_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__InventorySlot_Place10Button_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__InventorySlot_PlaceAll_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param Index int32
function UInventorySlot_C:GamePadClickButton(Index) end
---@param Index int32
---@param Active boolean
function UInventorySlot_C:GamePadHoverSlot(Index, Active) end
---@param IsRefilling boolean
function UInventorySlot_C:SwitchInventorySlotView(IsRefilling) end
function UInventorySlot_C:BndEvt__Place5Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__InventorySlot_AddPercentButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature() end
function UInventorySlot_C:BndEvt__InventorySlot_RemovePercentbutton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UInventorySlot_C:PreConstruct(IsDesignTime) end
---@param EnableButtons boolean
function UInventorySlot_C:EnableRestockingButtons(EnableButtons) end
function UInventorySlot_C:OnInitialized() end
function UInventorySlot_C:BndEvt__Place5Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UInventorySlot_C:Construct() end
---@param Add boolean
function UInventorySlot_C:GamePadPercentButtonClick(Add) end
---@param EntryPoint int32
function UInventorySlot_C:ExecuteUbergraph_InventorySlot(EntryPoint) end
function UInventorySlot_C:OnNoEnoughStock__DelegateSignature() end
function UInventorySlot_C:OnPlaced__DelegateSignature() end
---@param Slot UInventorySlot_C
---@param Value float
function UInventorySlot_C:OnRestockValueChanged__DelegateSignature(Slot, Value) end
---@param InventorySlot UInventorySlot_C
---@param IsRemoved boolean
function UInventorySlot_C:OnClicked__DelegateSignature(InventorySlot, IsRemoved) end


