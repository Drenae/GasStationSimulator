---@meta

---@class UWBP_FuelPriceBoardWidget_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MinMaxPrice UWidgetAnimation
---@field ActivePrice UTextBlock
---@field DefaultPrice UTextBlock
---@field DefaultPriceBox UHorizontalBox
---@field DefaultPriceInfo UVerticalBox
---@field DragoResetButton UDragoButton
---@field ExitButtonOverlay UOverlay
---@field HitBlockOverlay UOverlay
---@field Image_82 UImage
---@field Image_236 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field MaxPriceReached UTextBlock
---@field MinMaxOverlay UOverlay
---@field MinPriceReached UTextBlock
---@field NumberText1 UTextBlock
---@field NumberText2 UTextBlock
---@field NumberText3 UTextBlock
---@field PC_ExitButton_WBP UPC_ExitButton_WBP_C
---@field PriceLimitsInfo UVerticalBox
---@field SetDragoButton UDragoButton
---@field TopSegment_SizeBox USizeBox
---@field TrafficInfluenceBox UHorizontalBox
---@field TrafficStatsButton UDragoButton
---@field WBP_KeyHint_BottomButtonUpload_1 UWBP_KeyHint_C
---@field WBP_Number1 UWBP_SingleFuelPriceBoardText_C
---@field WBP_Number2 UWBP_SingleFuelPriceBoardText_C
---@field WBP_Number3 UWBP_SingleFuelPriceBoardText_C
---@field FuelSellPrice float
---@field FuelPriceDigits TArray<int32>
---@field CurrentNumberText UTextBlock
---@field PreviousDigitValue int32
---@field ['Fuel Type'] EFuelMagazine
---@field ['Is Active'] boolean
---@field ['Price Board Ref'] AFuelPriceBoard
---@field PriceUpdateHourText FText
---@field TrafficStats UPC_TrafficStatsBoard_WBP_C
---@field GamepadKeyIndex int32
---@field ['Tutorial Opened'] boolean
---@field LastSize FVector2D
---@field ManagmentCamera UCameraComponent
---@field StartingCameraLocation FVector
local UWBP_FuelPriceBoardWidget_C = {}

---@param IsActive boolean
function UWBP_FuelPriceBoardWidget_C:ChangeSignVisibility(IsActive) end
---@param Selection int32
function UWBP_FuelPriceBoardWidget_C:UnhooverElement(Selection) end
function UWBP_FuelPriceBoardWidget_C:HooverFirstElement() end
---@param UnhooverPrevious boolean
---@param PreviousIndex int32
function UWBP_FuelPriceBoardWidget_C:HooverPriceboardElement(UnhooverPrevious, PreviousIndex) end
---@param Direction int32
function UWBP_FuelPriceBoardWidget_C:ChangeActiveButton(Direction) end
function UWBP_FuelPriceBoardWidget_C:HandleApplyButton() end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_FuelPriceBoardWidget_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_FuelPriceBoardWidget_C:ApplyPrice() end
function UWBP_FuelPriceBoardWidget_C:ResetPrice() end
---@param IsEnabled boolean
function UWBP_FuelPriceBoardWidget_C:EnableSetbutton(IsEnabled) end
---@param IsEnabled boolean
function UWBP_FuelPriceBoardWidget_C:EnableResetButton(IsEnabled) end
---@param FuelPrice float
---@param IsWithinLimits boolean
function UWBP_FuelPriceBoardWidget_C:GetFuelPriceFromDigits(FuelPrice, IsWithinLimits) end
---@param bIsActive boolean
function UWBP_FuelPriceBoardWidget_C:SetActive(bIsActive) end
---@param Index int32
---@param NewValue int32
---@param SettingFromFloat boolean
---@param DoAnimation boolean
function UWBP_FuelPriceBoardWidget_C:SetPriceDigit(Index, NewValue, SettingFromFloat, DoAnimation) end
---@param FuelPrice float
---@param DoAnimation boolean
function UWBP_FuelPriceBoardWidget_C:SetFuelPriceFromFloat(FuelPrice, DoAnimation) end
---@param Index int32
function UWBP_FuelPriceBoardWidget_C:IncreasePriceDigit(Index) end
---@param Index int32
function UWBP_FuelPriceBoardWidget_C:DecreasePriceDigit(Index) end
---@param FuelType EFuelMagazine
---@param PriceBoardRef AFuelPriceBoard
function UWBP_FuelPriceBoardWidget_C:Init(FuelType, PriceBoardRef) end
function UWBP_FuelPriceBoardWidget_C:ShowMinMaxPopup() end
function UWBP_FuelPriceBoardWidget_C:UpdateActivePrice() end
function UWBP_FuelPriceBoardWidget_C:Destruct() end
---@param FuelType EFuelMagazine
---@param NewPrice float
---@param ActionInstigator UObject
function UWBP_FuelPriceBoardWidget_C:OnFuelDisplayPriceUpdated(FuelType, NewPrice, ActionInstigator) end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_WBP_Number2_K2Node_ComponentBoundEvent_9_OnDownArrow__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_WBP_Number3_K2Node_ComponentBoundEvent_10_OnDownArrow__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_WBP_Number4_K2Node_ComponentBoundEvent_11_OnDownArrow__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_WBP_Number2_K2Node_ComponentBoundEvent_13_OnUpArrow__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_WBP_Number3_K2Node_ComponentBoundEvent_14_OnUpArrow__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_WBP_Number4_K2Node_ComponentBoundEvent_15_OnUpArrow__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:UpdateResetButtonVisibility() end
function UWBP_FuelPriceBoardWidget_C:ResetToCurrentDisplayValue() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_TrafficStatsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:OnDigitPressed() end
function UWBP_FuelPriceBoardWidget_C:UpdateSetButtonVisibility() end
---@param Activate boolean
function UWBP_FuelPriceBoardWidget_C:ActivateHitBlockOverlay(Activate) end
function UWBP_FuelPriceBoardWidget_C:UnlockOverlay() end
function UWBP_FuelPriceBoardWidget_C:CreateTrafficStats() end
function UWBP_FuelPriceBoardWidget_C:SetPrice() end
function UWBP_FuelPriceBoardWidget_C:ResetPriceUsed() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_DragoResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_SetDragoButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:BndEvt__WBP_FuelPriceBoardWidget_PC_ExitButton_WBP_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature() end
function UWBP_FuelPriceBoardWidget_C:CloseMinigame() end
---@param HidePartOfUI boolean
function UWBP_FuelPriceBoardWidget_C:SetupInteraction(HidePartOfUI) end
function UWBP_FuelPriceBoardWidget_C:PositionManagementCamera() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_FuelPriceBoardWidget_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_FuelPriceBoardWidget_C:SetupAsNonInteractable() end
---@param EntryPoint int32
function UWBP_FuelPriceBoardWidget_C:ExecuteUbergraph_WBP_FuelPriceBoardWidget(EntryPoint) end


