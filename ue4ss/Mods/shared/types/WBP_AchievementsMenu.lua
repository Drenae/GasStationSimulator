---@meta

---@class UWBP_AchievementsMenu_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Achievement_Slot_1 UAchievement_Slot_C
---@field Achievement_Slot_2 UAchievement_Slot_C
---@field Achievement_Slot_3 UAchievement_Slot_C
---@field AchiWrapBox UWrapBox
---@field BackButton UNavigationKeyButton_C
---@field MenuCanvasPanel UCanvasPanel
---@field MenuTitleText UTextBlock
---@field RightBorder UBorder
---@field ScrollBox UScrollBox
---@field OnClickedBack FWBP_AchievementsMenu_COnClickedBack
local UWBP_AchievementsMenu_C = {}

function UWBP_AchievementsMenu_C:CreateAchivements() end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UWBP_AchievementsMenu_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UWBP_AchievementsMenu_C:OnPressedBack() end
function UWBP_AchievementsMenu_C:BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
function UWBP_AchievementsMenu_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UWBP_AchievementsMenu_C:PreConstruct(IsDesignTime) end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UWBP_AchievementsMenu_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
function UWBP_AchievementsMenu_C:OnPressedUp() end
function UWBP_AchievementsMenu_C:OnPressedDown() end
---@param bIsGamepadBeingUsed boolean
function UWBP_AchievementsMenu_C:OnChangeInputDeviceMenuUI(bIsGamepadBeingUsed) end
---@param EntryPoint int32
function UWBP_AchievementsMenu_C:ExecuteUbergraph_WBP_AchievementsMenu(EntryPoint) end
function UWBP_AchievementsMenu_C:OnClickedBack__DelegateSignature() end


