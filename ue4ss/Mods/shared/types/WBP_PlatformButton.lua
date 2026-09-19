---@meta

---@class UWBP_PlatformButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnim UWidgetAnimation
---@field GSSButton_31 UGSSButton
---@field Image_33 UImage
---@field Image_Icon UImage
---@field TextBlock_Name UTextBlock
---@field Name FText
---@field Icon UTexture2D
---@field bIsActive boolean
---@field Clicked FWBP_PlatformButton_CClicked
local UWBP_PlatformButton_C = {}

function UWBP_PlatformButton_C:SetNormal() end
function UWBP_PlatformButton_C:SetActive() end
---@param IsDesignTime boolean
function UWBP_PlatformButton_C:PreConstruct(IsDesignTime) end
function UWBP_PlatformButton_C:BndEvt__WBP_PlatformButton_GSSButton_31_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformButton_C:BndEvt__WBP_PlatformButton_GSSButton_31_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformButton_C:BndEvt__WBP_PlatformButton_GSSButton_31_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
---@param Hover boolean
function UWBP_PlatformButton_C:GamePadHover(Hover) end
---@param EntryPoint int32
function UWBP_PlatformButton_C:ExecuteUbergraph_WBP_PlatformButton(EntryPoint) end
---@param Button UWBP_PlatformButton_C
function UWBP_PlatformButton_C:Clicked__DelegateSignature(Button) end


