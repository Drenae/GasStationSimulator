---@meta

---@class UMainMenuContainerWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DecisionDialogWidget_NewGame UDecisionDialogWidgetBP_C
---@field DecisionDialogWidget_QuitGame UDecisionDialogWidgetBP_C
---@field DLC_Widget UDLC_Widget_C
---@field IntroWidgetBP UIntroWidgetBP_C
---@field MainMenuOverviewWidgetBP UMainMenuOverviewWidgetBP_C
---@field MenuCanvasPanel UCanvasPanel
---@field OptionsMenuWidgetBP UOptionsMenuContainerWidgetBP_C
---@field SaveMenuWidget USampleMenuWidgetBP_C
---@field VersionID UTextBlock
---@field WBP_MapSelection UWBP_MapSelection_C
---@field CheckGamepad FTimerHandle
local UMainMenuContainerWidgetBP_C = {}

---@param bIsVisible boolean
function UMainMenuContainerWidgetBP_C:ShowLoadingScreen(bIsVisible) end
function UMainMenuContainerWidgetBP_C:PlayBGM() end
function UMainMenuContainerWidgetBP_C:RunBenchmark() end
function UMainMenuContainerWidgetBP_C:StartNewGame() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UMainMenuContainerWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UMainMenuContainerWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UMainMenuContainerWidgetBP_C:Construct() end
function UMainMenuContainerWidgetBP_C:BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature() end
function UMainMenuContainerWidgetBP_C:BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_1_DecisionDecline__DelegateSignature() end
function UMainMenuContainerWidgetBP_C:BndEvt__MainMenuContainerWidgetBP_DecisionDialogWidget_NewGame_K2Node_ComponentBoundEvent_2_DecisionAccept__DelegateSignature() end
function UMainMenuContainerWidgetBP_C:BndEvt__MainMenuContainerWidgetBP_DecisionDialogWidget_NewGame_K2Node_ComponentBoundEvent_3_DecisionDecline__DelegateSignature() end
function UMainMenuContainerWidgetBP_C:OnInitialized() end
function UMainMenuContainerWidgetBP_C:RefreshBindings() end
function UMainMenuContainerWidgetBP_C:Destruct() end
function UMainMenuContainerWidgetBP_C:CheckGamepadType() end
---@param EntryPoint int32
function UMainMenuContainerWidgetBP_C:ExecuteUbergraph_MainMenuContainerWidgetBP(EntryPoint) end


