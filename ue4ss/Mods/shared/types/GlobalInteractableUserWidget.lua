---@meta

---@class UGlobalInteractableUserWidget_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MainColor FLinearColor
---@field HighlightColor FLinearColor
---@field MainFont FSlateFontInfo
---@field SmallTitleFont FSlateFontInfo
---@field SelectSound USoundCue
---@field BackSound USoundCue
---@field HoverSound USoundCue
---@field ChangeSound USoundCue
---@field SliderSound USoundCue
---@field HighlightExtraColor FLinearColor
---@field MediumTitleFont FSlateFontInfo
---@field LargeTitleFont FSlateFontInfo
---@field ValueFont FSlateFontInfo
---@field OnlyUppercase boolean
---@field MenuBackgroundColor FLinearColor
---@field WidgetBackgroundColor FLinearColor
---@field SymbolColor FLinearColor
---@field BackgroundMusic USoundCue
---@field bIsGamepadBeingUsed boolean
---@field OnChangeInputDeviceUI FGlobalInteractableUserWidget_COnChangeInputDeviceUI
---@field bIsMenu boolean
---@field bIsActiveMenu boolean
---@field KeybindingsUp TArray<FKey>
---@field KeybindingsDown TArray<FKey>
---@field KeybindingsLeft TArray<FKey>
---@field KeybindingsRight TArray<FKey>
---@field KeybindingsSelect TArray<FKey>
---@field KeybindingsBack TArray<FKey>
---@field bAllowNavigation boolean
---@field bIsNavigationCooledDown boolean
---@field CooldownTimerHandle FTimerHandle
---@field PressedKey FKey
---@field bPlayFadeAnimations boolean
---@field PlayFadeAnimationLength float
---@field SubtleColor FLinearColor
---@field KeybindingsReset TArray<FKey>
---@field KeybindingsExtra TArray<FKey>
---@field bIntroLogosSkippable boolean
---@field DecisionButtonColor FLinearColor
---@field SliderBackgroundColor FLinearColor
local UGlobalInteractableUserWidget_C = {}

---@param IsGamepad boolean
function UGlobalInteractableUserWidget_C:SetProperCursor(IsGamepad) end
---@param MainFont FSlateFontInfo
---@param SmallTitleFont FSlateFontInfo
---@param MediumTitleFont FSlateFontInfo
---@param LargeTitleFont FSlateFontInfo
---@param ValueFont FSlateFontInfo
---@param OnlyUppercase boolean
function UGlobalInteractableUserWidget_C:GetGlobalFontsWithExec(MainFont, SmallTitleFont, MediumTitleFont, LargeTitleFont, ValueFont, OnlyUppercase) end
---@param MainColor FLinearColor
---@param HighlightColor FLinearColor
---@param HighlightExtraColor FLinearColor
---@param MenuBackgroundColor FLinearColor
---@param WidgetBackgroundColor FLinearColor
---@param SymbolColor FLinearColor
---@param SubtleColor FLinearColor
---@param DecisionButtonColor FLinearColor
---@param SliderBackgroundColor FLinearColor
function UGlobalInteractableUserWidget_C:GetGlobalColorsWithExec(MainColor, HighlightColor, HighlightExtraColor, MenuBackgroundColor, WidgetBackgroundColor, SymbolColor, SubtleColor, DecisionButtonColor, SliderBackgroundColor) end
---@param bIsGamepadBeingUsed boolean
function UGlobalInteractableUserWidget_C:SetIsGamepadBeingUsed(bIsGamepadBeingUsed) end
function UGlobalInteractableUserWidget_C:SetGlobalSettingsMenuKeybindings() end
function UGlobalInteractableUserWidget_C:SetGlobalSettingsFonts() end
function UGlobalInteractableUserWidget_C:SetGlobalSettingsSounds() end
function UGlobalInteractableUserWidget_C:SetGlobalSettingsColors() end
function UGlobalInteractableUserWidget_C:SetGlobalSettingsGeneral() end
---@param bIsGamepadBeingUsed boolean
function UGlobalInteractableUserWidget_C:GetIsGamepadBeingUsed(bIsGamepadBeingUsed) end
---@param bIsMenu boolean
function UGlobalInteractableUserWidget_C:GetIsMenu(bIsMenu) end
---@param bIsMenu boolean
function UGlobalInteractableUserWidget_C:SetIsMenu(bIsMenu) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UGlobalInteractableUserWidget_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param bAllowNavigation boolean
function UGlobalInteractableUserWidget_C:GetAllowNavigation(bAllowNavigation) end
---@param bAllowNavigation boolean
function UGlobalInteractableUserWidget_C:SetAllowNavigation(bAllowNavigation) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UGlobalInteractableUserWidget_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param bIsActiveMenu boolean
function UGlobalInteractableUserWidget_C:GetIsActiveMenu(bIsActiveMenu) end
---@param bIsActiveMenu boolean
function UGlobalInteractableUserWidget_C:SetActiveMenu(bIsActiveMenu) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UGlobalInteractableUserWidget_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UGlobalInteractableUserWidget_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param bIsGamepadBeingUsed boolean
function UGlobalInteractableUserWidget_C:GetCurrentInputDeviceUI(bIsGamepadBeingUsed) end
---@param InKey FKey
---@param bIsMouseInput boolean
function UGlobalInteractableUserWidget_C:SetCurrentInputDeviceUI(InKey, bIsMouseInput) end
function UGlobalInteractableUserWidget_C:SetGlobalVariableValues() end
---@param MainColor FLinearColor
---@param HighlightColor FLinearColor
---@param HighlightExtraColor FLinearColor
---@param MenuBackgroundColor FLinearColor
---@param WidgetBackgroundColor FLinearColor
---@param SymbolColor FLinearColor
---@param SubtleColor FLinearColor
---@param DecisionButtonColor FLinearColor
---@param SliderBackgroundColor FLinearColor
function UGlobalInteractableUserWidget_C:GetGlobalColors(MainColor, HighlightColor, HighlightExtraColor, MenuBackgroundColor, WidgetBackgroundColor, SymbolColor, SubtleColor, DecisionButtonColor, SliderBackgroundColor) end
---@param SelectSound USoundCue
---@param BackSound USoundCue
---@param HoverSound USoundCue
---@param ChangeSound USoundCue
---@param SliderSound USoundCue
---@param BackgroundMusic USoundCue
function UGlobalInteractableUserWidget_C:GetGlobalSounds(SelectSound, BackSound, HoverSound, ChangeSound, SliderSound, BackgroundMusic) end
---@param MainFont FSlateFontInfo
---@param SmallTitleFont FSlateFontInfo
---@param MediumTitleFont FSlateFontInfo
---@param LargeTitleFont FSlateFontInfo
---@param ValueFont FSlateFontInfo
---@param OnlyUppercase boolean
function UGlobalInteractableUserWidget_C:GetGlobalFonts(MainFont, SmallTitleFont, MediumTitleFont, LargeTitleFont, ValueFont, OnlyUppercase) end
---@param bPlayFadeAnimations boolean
---@param PlayFadeAnimationLength float
---@param bIntroLogosSkippable boolean
function UGlobalInteractableUserWidget_C:GetGlobalGeneralData(bPlayFadeAnimations, PlayFadeAnimationLength, bIntroLogosSkippable) end
---@param TextObject UTextBlock
---@param Font FSlateFontInfo
---@param Color FLinearColor
function UGlobalInteractableUserWidget_C:SetTextAppearence(TextObject, Font, Color) end
function UGlobalInteractableUserWidget_C:OnGlobalSettingsApply() end
function UGlobalInteractableUserWidget_C:OnPressedAnyKey() end
---@param IsDesignTime boolean
function UGlobalInteractableUserWidget_C:PreConstruct(IsDesignTime) end
function UGlobalInteractableUserWidget_C:OnPressedUp() end
function UGlobalInteractableUserWidget_C:OnPressedDown() end
function UGlobalInteractableUserWidget_C:OnPressedRight() end
function UGlobalInteractableUserWidget_C:OnPressedLeft() end
function UGlobalInteractableUserWidget_C:OnPressedSelect() end
function UGlobalInteractableUserWidget_C:OnPressedBack() end
function UGlobalInteractableUserWidget_C:OnPressedReset() end
function UGlobalInteractableUserWidget_C:OnPressedExtra() end
function UGlobalInteractableUserWidget_C:OnNavigationCooldownStart() end
function UGlobalInteractableUserWidget_C:OnNavigationCooldownEnd() end
---@param EntryPoint int32
function UGlobalInteractableUserWidget_C:ExecuteUbergraph_GlobalInteractableUserWidget(EntryPoint) end
---@param bIsGamepadBeingUsed boolean
function UGlobalInteractableUserWidget_C:OnChangeInputDeviceUI__DelegateSignature(bIsGamepadBeingUsed) end


