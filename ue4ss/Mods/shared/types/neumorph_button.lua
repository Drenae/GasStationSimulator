---@meta

---@class Uneumorph_button_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PressedAnim UWidgetAnimation
---@field HoverAnim UWidgetAnimation
---@field Button_38 UButton
---@field GamePadHover_IMG UImage
---@field Image UImage
---@field Image_0 UImage
---@field SelectSaveHint UWBP_KeyHint_C
---@field TextBlock_58 UTextBlock
---@field ['In Text'] FText
---@field Color1 FLinearColor
---@field Color2 FLinearColor
---@field ButtonClicked Fneumorph_button_CButtonClicked
---@field SoundIndex int32
---@field ButtonHover Fneumorph_button_CButtonHover
---@field ShouldPlaySound boolean
---@field UseCustomSound boolean
---@field CustomSound USoundBase
local Uneumorph_button_C = {}

function Uneumorph_button_C:PlayButtonSound() end
---@param IsDesignTime boolean
function Uneumorph_button_C:PreConstruct(IsDesignTime) end
function Uneumorph_button_C:BndEvt__neumorph_button_Button_38_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function Uneumorph_button_C:BndEvt__neumorph_button_Button_38_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function Uneumorph_button_C:BndEvt__neumorph_button_Button_38_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param Hover boolean
function Uneumorph_button_C:GamePadHover(Hover) end
function Uneumorph_button_C:GamePadClick() end
---@param New_Text FText
Uneumorph_button_C['Set Text'] = function(self, New_Text) end
---@param EntryPoint int32
function Uneumorph_button_C:ExecuteUbergraph_neumorph_button(EntryPoint) end
function Uneumorph_button_C:ButtonHover__DelegateSignature() end
function Uneumorph_button_C:ButtonClicked__DelegateSignature() end


