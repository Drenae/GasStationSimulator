---@meta

---@class UGSS_Button_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Junkyard_Contract_Red UWidgetAnimation
---@field Junkyard_ContractUnchecked UWidgetAnimation
---@field JunkyardContractDone UWidgetAnimation
---@field Junkyard_ContractChecked UWidgetAnimation
---@field Hover UWidgetAnimation
---@field GSSButton_95 UGSSButton
---@field Image_436 UImage
---@field NamedSlot_34 UNamedSlot
---@field Overlay_1 UOverlay
---@field ['Desired Size'] FVector2D
---@field Clicked FGSS_Button_WBP_CClicked
---@field Color1 FLinearColor
---@field Color2 FLinearColor
---@field RedDotTags FGameplayTagContainer
---@field RedDotOffset FVector2D
local UGSS_Button_WBP_C = {}

function UGSS_Button_WBP_C:SetDone() end
---@param IsDesignTime boolean
function UGSS_Button_WBP_C:PreConstruct(IsDesignTime) end
function UGSS_Button_WBP_C:BndEvt__GSS_Button_WBP_GSSButton_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UGSS_Button_WBP_C:BndEvt__GSS_Button_WBP_GSSButton_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UGSS_Button_WBP_C:BndEvt__GSS_Button_WBP_GSSButton_95_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param NewUnlockableUIState FUnlockableUIState
function UGSS_Button_WBP_C:UnlockableUIStateSet(NewUnlockableUIState) end
function UGSS_Button_WBP_C:Destruct() end
function UGSS_Button_WBP_C:Construct() end
---@param EntryPoint int32
function UGSS_Button_WBP_C:ExecuteUbergraph_GSS_Button_WBP(EntryPoint) end
function UGSS_Button_WBP_C:Clicked__DelegateSignature() end


