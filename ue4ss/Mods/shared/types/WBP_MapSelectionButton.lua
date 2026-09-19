---@meta

---@class UWBP_MapSelectionButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHover UWidgetAnimation
---@field BG_Image UImage
---@field Button_22 UButton
---@field FlowerSlot UNamedSlot
---@field Image UImage
---@field Logo_Image UImage
---@field MainPhoto UImage
---@field MapDescription_Text UTextBlock
---@field Icon UTexture2D
---@field MapName FText
---@field MapToOpen FName
---@field OnMapSelected FWBP_MapSelectionButton_COnMapSelected
---@field RequiredDlc EDLCName
---@field DLC_Logo UTexture2D
local UWBP_MapSelectionButton_C = {}

---@param IsDesignTime boolean
function UWBP_MapSelectionButton_C:PreConstruct(IsDesignTime) end
function UWBP_MapSelectionButton_C:BndEvt__WBP_MapSelectionButton_Button_22_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_MapSelectionButton_C:BndEvt__WBP_MapSelectionButton_Button_22_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_MapSelectionButton_C:BndEvt__WBP_MapSelectionButton_Button_22_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param Hover boolean
function UWBP_MapSelectionButton_C:GamePadHover(Hover) end
function UWBP_MapSelectionButton_C:GamePadClick() end
---@param EntryPoint int32
function UWBP_MapSelectionButton_C:ExecuteUbergraph_WBP_MapSelectionButton(EntryPoint) end
---@param MapToOpen FName
function UWBP_MapSelectionButton_C:OnMapSelected__DelegateSignature(MapToOpen) end


