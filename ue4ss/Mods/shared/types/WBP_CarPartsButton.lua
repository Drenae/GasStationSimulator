---@meta

---@class UWBP_CarPartsButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnim UWidgetAnimation
---@field Button_43 UButton
---@field Image_19 UImage
---@field TextBlock_Name UTextBlock
---@field Name FText
---@field PartTypes TArray<EJunkyardCarPartType>
---@field Clicked FWBP_CarPartsButton_CClicked
---@field bIsActive boolean
local UWBP_CarPartsButton_C = {}

function UWBP_CarPartsButton_C:SetNormal() end
function UWBP_CarPartsButton_C:SetActive() end
---@param IsDesignTime boolean
function UWBP_CarPartsButton_C:PreConstruct(IsDesignTime) end
function UWBP_CarPartsButton_C:BndEvt__WBP_CarPartsButton_Button_43_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_CarPartsButton_C:BndEvt__WBP_CarPartsButton_Button_43_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_CarPartsButton_C:BndEvt__WBP_CarPartsButton_Button_43_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_CarPartsButton_C:ExecuteUbergraph_WBP_CarPartsButton(EntryPoint) end
function UWBP_CarPartsButton_C:Clicked__DelegateSignature() end


