---@meta

---@class UDotSwitcher_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Button_55 UButton
---@field Image_active UImage
---@field Image_normal UImage
---@field WidgetSwitcher_0 UWidgetSwitcher
---@field Click FDotSwitcher_WBP_CClick
---@field Newsfeed UWBP_Newsfeed_C
---@field Index int32
local UDotSwitcher_WBP_C = {}

function UDotSwitcher_WBP_C:SetNormal() end
function UDotSwitcher_WBP_C:SetActive() end
function UDotSwitcher_WBP_C:Construct() end
function UDotSwitcher_WBP_C:BndEvt__DotSwitcher_WBP_Button_55_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() end
function UDotSwitcher_WBP_C:ChangeNews() end
---@param EntryPoint int32
function UDotSwitcher_WBP_C:ExecuteUbergraph_DotSwitcher_WBP(EntryPoint) end
function UDotSwitcher_WBP_C:Click__DelegateSignature() end


