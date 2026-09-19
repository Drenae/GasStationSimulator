---@meta

---@class UOptionsActionBinder_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ActionButton UButton
---@field DisplayNameText UTextBlock
---@field GamepadButtonImage UImage
---@field KeyText UTextBlock
---@field OuterBorder UBorder
---@field InputName FName
---@field CurrentActionMapping FInputActionKeyMapping
---@field IsAxisMapping boolean
---@field CurrentAxisMapping FInputAxisKeyMapping
---@field AxisScale float
---@field SelectedKey FInputChord
---@field LastSelectedKey FInputChord
---@field bAllowKeyChangeInput boolean
---@field OnKeyChanged FOptionsActionBinder_COnKeyChanged
---@field OnKeyInit FOptionsActionBinder_COnKeyInit
---@field IsGamepadBinding boolean
---@field DecisionDialogWidget UDecisionDialogWidgetBP_C
---@field OldActionMapping FInputActionKeyMapping
---@field OldAxisMapping FInputAxisKeyMapping
---@field OptionsActionBinderBgColor FLinearColor
---@field OptionsActionBinderHightlightColor FLinearColor
---@field GamepadKeys TArray<UGamepadKey_C>
---@field OptionsActionBinderIconColor FLinearColor
---@field bIsInEditMode boolean
---@field bIsModifierKeyPressed boolean
---@field ModifierKey FKey
---@field ModifierCooldownTimerHandle FTimerHandle
---@field KeyCategory FName
---@field InputEqual boolean
---@field KeyModifier FText
---@field ForceShift boolean
local UOptionsActionBinder_C = {}

---@param B UObject
---@param GamePadPlaystation UTexture2D
function UOptionsActionBinder_C:GetPSGamepadButtonImage(B, GamePadPlaystation) end
---@param Texture UTexture2D
function UOptionsActionBinder_C:SetGamepadButtonImage(Texture) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UOptionsActionBinder_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param InKey FKey
---@param bIsShift boolean
---@param bIsCtrl boolean
---@param bIsAlt boolean
---@param bIsCmd boolean
function UOptionsActionBinder_C:GetModifierKey(InKey, bIsShift, bIsCtrl, bIsAlt, bIsCmd) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UOptionsActionBinder_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param bIsAllowed boolean
function UOptionsActionBinder_C:SetAllowMenuNavigation(bIsAllowed) end
---@param InKey FKey
---@param bIsBlacklisted boolean
function UOptionsActionBinder_C:IsBlacklistedKey(InKey, bIsBlacklisted) end
---@param InInputChord FInputChord
---@param bIsWaitingForInput boolean
function UOptionsActionBinder_C:SetKeyTextOrIcon(InInputChord, bIsWaitingForInput) end
function UOptionsActionBinder_C:ShowGamepadIcon() end
---@param InNewKey FInputChord
---@return boolean
function UOptionsActionBinder_C:CheckIfNotSameKey(InNewKey) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UOptionsActionBinder_C:OnPreviewMouseButtonDown(MyGeometry, MouseEvent) end
---@param bRemoveOld boolean
function UOptionsActionBinder_C:RebindInput(bRemoveOld) end
function UOptionsActionBinder_C:ShowRebindDialog() end
function UOptionsActionBinder_C:SetCurrentAxisMapping() end
function UOptionsActionBinder_C:SetCurrentActionMapping() end
---@param InInputChord FInputChord
---@param bIsGamepad boolean
---@param bIsAlreadyInUse boolean
---@param OldActionMapping FInputActionKeyMapping
---@param OldAxisMapping FInputAxisKeyMapping
function UOptionsActionBinder_C:IsKeyAlreadyBound(InInputChord, bIsGamepad, bIsAlreadyInUse, OldActionMapping, OldAxisMapping) end
function UOptionsActionBinder_C:SetGlobalSettings() end
function UOptionsActionBinder_C:SetupDisplayNameText() end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UOptionsActionBinder_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param IsHovered boolean
function UOptionsActionBinder_C:SetHoverEffect(IsHovered) end
---@param InInputChord FInputChord
function UOptionsActionBinder_C:ChangeInputBinding(InInputChord) end
function UOptionsActionBinder_C:SetupInputBinding() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UOptionsActionBinder_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UOptionsActionBinder_C:OnPressedSelect() end
function UOptionsActionBinder_C:OnPressedBack() end
function UOptionsActionBinder_C:Construct() end
function UOptionsActionBinder_C:BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
---@param InInputChord FInputChord
function UOptionsActionBinder_C:OnEndKeyChange(InInputChord) end
function UOptionsActionBinder_C:OnStartKeyChange() end
function UOptionsActionBinder_C:BndEvt__ActionButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UOptionsActionBinder_C:OnPressedLeft() end
function UOptionsActionBinder_C:OnPressedRight() end
function UOptionsActionBinder_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UOptionsActionBinder_C:PreConstruct(IsDesignTime) end
function UOptionsActionBinder_C:OnRebindAccept() end
function UOptionsActionBinder_C:OnRebindDecline() end
function UOptionsActionBinder_C:OnCancelKeyChange() end
function UOptionsActionBinder_C:OnLeaveEditMode() end
function UOptionsActionBinder_C:OnModifierKeyCooldownStart() end
function UOptionsActionBinder_C:OnModifierKeyCooldownEnd() end
---@param EntryPoint int32
function UOptionsActionBinder_C:ExecuteUbergraph_OptionsActionBinder(EntryPoint) end
function UOptionsActionBinder_C:OnKeyInit__DelegateSignature() end
function UOptionsActionBinder_C:OnKeyChanged__DelegateSignature() end


