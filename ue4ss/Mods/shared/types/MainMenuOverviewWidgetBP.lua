---@meta

---@class UMainMenuOverviewWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ContinueButton UMainButton_C
---@field DLCButton UMainButton_C
---@field GameLogo UImage
---@field LoadGameButton UMainButton_C
---@field MainButtonsVerticalBox UVerticalBox
---@field MainMenuBorder UBorder
---@field MenuCanvasPanel UCanvasPanel
---@field NewGameButton UMainButton_C
---@field Newsfeed UWBP_Newsfeed_C
---@field OptionsButton UMainButton_C
---@field PrologIMG UImage
---@field QuitButton UMainButton_C
---@field SeparatorBorder UBorder
---@field WBP_AdvertIconNew UWBP_AdvertIcon_C
---@field WBP_NewsButton_Facebook UWBP_NewsButton_C
---@field WBP_NewsButton_Instagram UWBP_NewsButton_C
---@field WBP_NewsButton_X UWBP_NewsButton_C
---@field WBP_NewsButton_YT UWBP_NewsButton_C
---@field WBP_NewsButtonDiscord UWBP_NewsButton_C
---@field MainMenuWidget UMainMenuContainerWidgetBP_C
---@field LoadedLevelName FName
---@field NewVar_0 FSavedSlotStruct
---@field bCanBeLoaded boolean
---@field MapSelectionWIdget UWBP_MapSelection_C
---@field ['Level Name'] FName
---@field PopupTimer FTimerHandle
---@field bShowAdvertPopupWhenNavigatedTo boolean
---@field bShouldRebuildNavigationOnWhenNavigatedTo boolean
---@field BlockTimer FTimerHandle
local UMainMenuOverviewWidgetBP_C = {}

function UMainMenuOverviewWidgetBP_C:ResetGraphicsSettings() end
---@param Array TArray<EDLCName>
---@param DisactivatedDLCs TArray<EDLCName>
UMainMenuOverviewWidgetBP_C['Check DLCCompability'] = function(self, Array, DisactivatedDLCs) end
function UMainMenuOverviewWidgetBP_C:BackButtonHandling() end
function UMainMenuOverviewWidgetBP_C:SetGlobalSettings() end
---@param Decision UDecisionDialogWidgetBP_C
function UMainMenuOverviewWidgetBP_C:ShowDecisionDialog(Decision) end
function UMainMenuOverviewWidgetBP_C:BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:BndEvt__NewGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UMainMenuOverviewWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UMainMenuOverviewWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UMainMenuOverviewWidgetBP_C:OnPressedBack() end
function UMainMenuOverviewWidgetBP_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UMainMenuOverviewWidgetBP_C:PreConstruct(IsDesignTime) end
function UMainMenuOverviewWidgetBP_C:Construct() end
---@param bIsContinueButtonEnabled boolean
function UMainMenuOverviewWidgetBP_C:ToggleContinueButton(bIsContinueButtonEnabled) end
function UMainMenuOverviewWidgetBP_C:BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:UpdateContinueButton() end
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_DLCButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature() end
---@param MapToOpen FName
function UMainMenuOverviewWidgetBP_C:OnMapSelected(MapToOpen) end
function UMainMenuOverviewWidgetBP_C:StartNewGame() end
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButtonDiscord_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_Facebook_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_Instagram_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_Mail_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_X_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature() end
function UMainMenuOverviewWidgetBP_C:OnInitialized() end
---@param IsEnabled boolean
function UMainMenuOverviewWidgetBP_C:RebuildNavigation(IsEnabled) end
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_AdvertIconNew_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature() end
---@param AdvertIcon UWBP_AdvertIcon_C
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_AdvertIconNew_K2Node_ComponentBoundEvent_12_OnNewPopupRequested__DelegateSignature(AdvertIcon) end
---@param NewEnabled boolean
function UMainMenuOverviewWidgetBP_C:BndEvt__MainMenuOverviewWidgetBP_WBP_AdvertIconNew_K2Node_ComponentBoundEvent_13_OnAdvertIconEnabled__DelegateSignature(NewEnabled) end
---@param EntryPoint int32
function UMainMenuOverviewWidgetBP_C:ExecuteUbergraph_MainMenuOverviewWidgetBP(EntryPoint) end


