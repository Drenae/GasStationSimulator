---@meta

---@class UGamepadKey_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GamepadButton UButton
---@field GamepadButtonImage UImage
---@field GamepadButtonText UTextBlock
---@field KeyTexture UTexture2D
---@field KeyGamepad FKey
---@field GamepadButtonBgColor FLinearColor
---@field GamepadButtonHighlightColor FLinearColor
local UGamepadKey_C = {}

---@param B UObject
---@param GamePadPlaystation UTexture2D
function UGamepadKey_C:GetPSGamepadButtonImage(B, GamePadPlaystation) end
---@param Texture UTexture2D
function UGamepadKey_C:SetGamepadTexture(Texture) end
---@param bHighlight boolean
function UGamepadKey_C:Highlight(bHighlight) end
---@param Texture UTexture2D
function UGamepadKey_C:SetTexture(Texture) end
---@param InText FText
function UGamepadKey_C:SetText(InText) end
function UGamepadKey_C:SetGlobalSettings() end
---@param IsDesignTime boolean
function UGamepadKey_C:PreConstruct(IsDesignTime) end
function UGamepadKey_C:OnGlobalSettingsApply() end
---@param EntryPoint int32
function UGamepadKey_C:ExecuteUbergraph_GamepadKey(EntryPoint) end


