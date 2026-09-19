---@meta

---@class UTabWidget_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_773 UImage
---@field Tab_Info UOverlay
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
---@field ActorRef AActor
local UTabWidget_C = {}

function UTabWidget_C:Construct() end
---@param ActionName FName
function UTabWidget_C:AtChangedKey(ActionName) end
function UTabWidget_C:Destruct() end
function UTabWidget_C:AtKeybindingsReset() end
function UTabWidget_C:HideUnHide() end
---@param NewUnlockableUIState FUnlockableUIState
function UTabWidget_C:OnNewUnlockableUIStateSet(NewUnlockableUIState) end
function UTabWidget_C:AtLoadWithGamePad() end
---@param EntryPoint int32
function UTabWidget_C:ExecuteUbergraph_TabWidget(EntryPoint) end


