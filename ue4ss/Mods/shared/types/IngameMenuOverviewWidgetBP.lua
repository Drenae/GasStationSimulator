---@meta

---@class UIngameMenuOverviewWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AchievementsButton UMainButton_C
---@field DecisionDialogWidgetBP UDecisionDialogWidgetBP_C
---@field GameLogo UImage
---@field Image_73 UImage
---@field LoadButton UMainButton_C
---@field MainMenuButton UMainButton_C
---@field MenuCanvasPanel UCanvasPanel
---@field OptionsButton UMainButton_C
---@field PauseBorder UBorder
---@field PauseBorder_1 UBorder
---@field PauseTitleText UTextBlock
---@field QuitButton UMainButton_C
---@field ResetPlayerPosButton UMainButton_C
---@field ResumeButton UMainButton_C
---@field SaveButton UMainButton_C
---@field SeparatorBorder UBorder
---@field IngameMenuWidget UIngameMenuContainerWidgetBP_C
---@field SaveGameOpened boolean
local UIngameMenuOverviewWidgetBP_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UIngameMenuOverviewWidgetBP_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UIngameMenuOverviewWidgetBP_C:ShowSaveLoadWindow() end
function UIngameMenuOverviewWidgetBP_C:SetGlobalSettings() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UIngameMenuOverviewWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UIngameMenuOverviewWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UIngameMenuOverviewWidgetBP_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UIngameMenuOverviewWidgetBP_C:PreConstruct(IsDesignTime) end
function UIngameMenuOverviewWidgetBP_C:Construct() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__QuitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature() end
function UIngameMenuOverviewWidgetBP_C:OnPressedBack() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__LoadButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__ResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature() end
function UIngameMenuOverviewWidgetBP_C:Destruct() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__SaveButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature() end
function UIngameMenuOverviewWidgetBP_C:ResumeManualCall() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__ResetPlayerPosButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature() end
function UIngameMenuOverviewWidgetBP_C:BndEvt__AchievementsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature() end
---@param EntryPoint int32
function UIngameMenuOverviewWidgetBP_C:ExecuteUbergraph_IngameMenuOverviewWidgetBP(EntryPoint) end


