---@meta

---@class UIntroWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnyKeyPulse UWidgetAnimation
---@field FadeGameLogo UWidgetAnimation
---@field FadeMenuScene UWidgetAnimation
---@field FadeCompanyLogo UWidgetAnimation
---@field CompanyLogoImage UImage
---@field GameTitleLogoImage UImage
---@field GradientUnderlay UImage
---@field bIsReady boolean
---@field bIsGameLogoShown boolean
---@field bIsMenuSceneShown boolean
---@field bIsIntroReadyEnd boolean
local UIntroWidgetBP_C = {}

---@param InAnimation UWidgetAnimation
function UIntroWidgetBP_C:StopIntroAnimation(InAnimation) end
---@param InAnimation UWidgetAnimation
---@param LoopAnimation boolean
function UIntroWidgetBP_C:PlayIntroAnimation(InAnimation, LoopAnimation) end
---@param bIsAtEnd boolean
function UIntroWidgetBP_C:JumpToNextPart(bIsAtEnd) end
function UIntroWidgetBP_C:OnCompanyLogoBegin() end
function UIntroWidgetBP_C:OnCompanyLogoEnd() end
function UIntroWidgetBP_C:OnGameLogoEnd() end
function UIntroWidgetBP_C:OnGameLogoBegin() end
function UIntroWidgetBP_C:OnFadeMenuSceneBegin() end
function UIntroWidgetBP_C:OnFadeMenuSceneEnd() end
function UIntroWidgetBP_C:Construct() end
function UIntroWidgetBP_C:OnPressedAnyKey() end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UIntroWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UIntroWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param EntryPoint int32
function UIntroWidgetBP_C:ExecuteUbergraph_IntroWidgetBP(EntryPoint) end


