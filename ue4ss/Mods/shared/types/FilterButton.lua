---@meta

---@class UFilterButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field Border_0 UBorder
---@field Button_43 UButton
---@field Image_33 UImage
---@field Image_border UImage
---@field Image_Icon UImage
---@field IsChecked boolean
---@field OnClickedFilter FFilterButton_COnClickedFilter
---@field Icon UTexture2D
---@field ['Item Type Category'] EItemTypeCategory
---@field bIsActive boolean
---@field CreatedInMoreInfo boolean
local UFilterButton_C = {}

---@return UWidget
function UFilterButton_C:GetToolTipWidget_0() end
function UFilterButton_C:SetNormal() end
function UFilterButton_C:SetActive() end
---@param IsDesignTime boolean
function UFilterButton_C:PreConstruct(IsDesignTime) end
function UFilterButton_C:BndEvt__FilterButton_Button_43_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UFilterButton_C:BndEvt__FilterButton_Button_43_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UFilterButton_C:BndEvt__FilterButton_Button_43_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UFilterButton_C:RemoteClick() end
---@param Hover boolean
function UFilterButton_C:GamePadHover(Hover) end
---@param IsChecked boolean
function UFilterButton_C:SetState(IsChecked) end
---@param EntryPoint int32
function UFilterButton_C:ExecuteUbergraph_FilterButton(EntryPoint) end
---@param IsChecked boolean
---@param TypeCategory EItemTypeCategory
function UFilterButton_C:OnClickedFilter__DelegateSignature(IsChecked, TypeCategory) end


