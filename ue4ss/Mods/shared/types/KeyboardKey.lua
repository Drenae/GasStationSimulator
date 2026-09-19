---@meta

---@class UKeyboardKey_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field KeyButton UButton
---@field KeyImage UImage
---@field KeyTexture UTexture2D
---@field MappedKey FKey
---@field KeySize FVector2D
---@field OnHoveredKeyboardKey FKeyboardKey_COnHoveredKeyboardKey
---@field KeyboardKeyBgColor FLinearColor
---@field KeyboardKeyHighlightColor FLinearColor
---@field KeyboardKeyExtraHightlightColor FLinearColor
---@field bIsHighlighted boolean
local UKeyboardKey_C = {}

function UKeyboardKey_C:SetGlobalSettings() end
---@param bHighlight boolean
---@param bFocusHighlight boolean
function UKeyboardKey_C:Highlight(bHighlight, bFocusHighlight) end
function UKeyboardKey_C:BndEvt__KeyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UKeyboardKey_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UKeyboardKey_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UKeyboardKey_C:ExecuteUbergraph_KeyboardKey(EntryPoint) end
---@param InKey FKey
function UKeyboardKey_C:OnHoveredKeyboardKey__DelegateSignature(InKey) end


