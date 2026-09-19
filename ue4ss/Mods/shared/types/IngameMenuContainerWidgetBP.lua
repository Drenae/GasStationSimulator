---@meta

---@class UIngameMenuContainerWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DecisionDialogWidgetBP UDecisionDialogWidgetBP_C
---@field IngameMenuOverviewWidgetBP UIngameMenuOverviewWidgetBP_C
---@field MenuCanvasPanel UCanvasPanel
---@field OptionsMenuWidgetBP UOptionsMenuContainerWidgetBP_C
---@field SaveMenuWidget USampleMenuWidgetBP_C
---@field WBP_AchievementsMenu UWBP_AchievementsMenu_C
local UIngameMenuContainerWidgetBP_C = {}

function UIngameMenuContainerWidgetBP_C:ShowDecisionDialog() end
function UIngameMenuContainerWidgetBP_C:ResumeGame() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UIngameMenuContainerWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UIngameMenuContainerWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UIngameMenuContainerWidgetBP_C:Construct() end
function UIngameMenuContainerWidgetBP_C:Destruct() end
function UIngameMenuContainerWidgetBP_C:BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature() end
function UIngameMenuContainerWidgetBP_C:BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_6_DecisionDecline__DelegateSignature() end
---@param EntryPoint int32
function UIngameMenuContainerWidgetBP_C:ExecuteUbergraph_IngameMenuContainerWidgetBP(EntryPoint) end


