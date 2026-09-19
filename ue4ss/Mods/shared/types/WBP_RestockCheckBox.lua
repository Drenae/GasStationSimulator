---@meta

---@class UWBP_RestockCheckBox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BlushChecked UWidgetAnimation
---@field AutofillCheckBox UCheckBox
---@field Image_44 UImage
---@field OuterBorder UBorder
---@field RestockText UTextBlock
---@field OnCheckBoxSet FWBP_RestockCheckBox_COnCheckBoxSet
---@field CanPlayBlushAnimation boolean
---@field WidgetText FText
---@field OuterBorderPadding FMargin
local UWBP_RestockCheckBox_C = {}

---@param IsChecked boolean
---@param Index boolean
---@param InputPin boolean
function UWBP_RestockCheckBox_C:ChangeCheckBoxState(IsChecked, Index, InputPin) end
---@param ShouldPlay boolean
function UWBP_RestockCheckBox_C:TryToPlayBlushAnimation(ShouldPlay) end
---@param IsDesignTime boolean
function UWBP_RestockCheckBox_C:PreConstruct(IsDesignTime) end
---@param IsChecked boolean
function UWBP_RestockCheckBox_C:SetCheckBox(IsChecked) end
---@param bIsChecked boolean
function UWBP_RestockCheckBox_C:BndEvt__WBP_EmployeeRestock_AutofillCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
---@param EntryPoint int32
function UWBP_RestockCheckBox_C:ExecuteUbergraph_WBP_RestockCheckBox(EntryPoint) end
---@param IsChecked boolean
function UWBP_RestockCheckBox_C:OnCheckBoxSet__DelegateSignature(IsChecked) end


