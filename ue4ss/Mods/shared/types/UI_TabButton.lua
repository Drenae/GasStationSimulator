---@meta

---@class UUI_TabButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field Border_Image UImage
---@field Button UButton
---@field TabToOpen int32
---@field PhotoModeWidgetRef UUI_PhotoMode_C
---@field TabIcon UObject
---@field ButtonSize FVector2D
---@field ButtonSizeWhenSelected FVector2D
---@field SelectedTabColor FSlateColor
---@field UnselectedTabColor FSlateColor
local UUI_TabButton_C = {}

---@param PhotoModeWidgetRef UUI_PhotoMode_C
function UUI_TabButton_C:Initialize(PhotoModeWidgetRef) end
function UUI_TabButton_C:SetSelectedTabStyle() end
function UUI_TabButton_C:SetUnselectedTabStyle() end
function UUI_TabButton_C:BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UUI_TabButton_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UUI_TabButton_C:ExecuteUbergraph_UI_TabButton(EntryPoint) end


