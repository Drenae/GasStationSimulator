---@meta

---@class USoundOnOff_button_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field Button_53 UButton
---@field Image_67 UImage
---@field Image_149 UImage
---@field Overlay_2 UOverlay
---@field TextBlock_130 UTextBlock
---@field bIsSoundOn boolean
---@field AirportManagerREF UAirportManager_C
---@field CommunicationDevice ABP_CommunicationDevice_C
local USoundOnOff_button_C = {}

function USoundOnOff_button_C:SoundOff() end
function USoundOnOff_button_C:SoundOn() end
function USoundOnOff_button_C:Construct() end
function USoundOnOff_button_C:BndEvt__SoundOnOff_button_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function USoundOnOff_button_C:BndEvt__SoundOnOff_button_Button_53_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function USoundOnOff_button_C:BndEvt__SoundOnOff_button_Button_53_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function USoundOnOff_button_C:GamePadClickSound() end
---@param EntryPoint int32
function USoundOnOff_button_C:ExecuteUbergraph_SoundOnOff_button(EntryPoint) end


