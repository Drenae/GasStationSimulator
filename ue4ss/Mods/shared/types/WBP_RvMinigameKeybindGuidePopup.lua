---@meta

---@class UWBP_RvMinigameKeybindGuidePopup_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Show UWidgetAnimation
---@field MOVE_RIGHT UWBP_KeyBindedAction_C
---@field Press_TXT UTextBlock
---@field SofixOfAction_TXT UTextBlock
---@field ActionMappingToDisplay FName
---@field ActionSofixText FText
---@field ActionPrefixText FText
local UWBP_RvMinigameKeybindGuidePopup_C = {}

---@param IsDesignTime boolean
function UWBP_RvMinigameKeybindGuidePopup_C:PreConstruct(IsDesignTime) end
function UWBP_RvMinigameKeybindGuidePopup_C:Construct() end
function UWBP_RvMinigameKeybindGuidePopup_C:SetUpHintInformation() end
function UWBP_RvMinigameKeybindGuidePopup_C:KeyBindReset() end
---@param ActionName FName
function UWBP_RvMinigameKeybindGuidePopup_C:KeyBindChange(ActionName) end
function UWBP_RvMinigameKeybindGuidePopup_C:Destruct() end
UWBP_RvMinigameKeybindGuidePopup_C['Show Pop Up'] = function(self, ) end
UWBP_RvMinigameKeybindGuidePopup_C['Hide Pop Up'] = function(self, ) end
---@param EntryPoint int32
function UWBP_RvMinigameKeybindGuidePopup_C:ExecuteUbergraph_WBP_RvMinigameKeybindGuidePopup(EntryPoint) end


