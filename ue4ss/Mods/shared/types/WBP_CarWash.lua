---@meta

---@class UWBP_CarWash_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControllsHorizontal UVerticalBox
---@field InvalidationBox_0 UInvalidationBox
---@field LMB_Clean UWBP_KeyBindedAction_C
---@field LSHIFT_SeeDirt UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field PrefixTXT UTextBlock
---@field RMB_ChangeCap UWBP_KeyBindedAction_C
---@field ScrollingGamePad UOverlay
---@field ScrollingKeyBoard UOverlay
---@field ZOOM_ChangeCap UWBP_KeyBindedAction_C
---@field ZOOM_ChangeCap_1 UWBP_KeyBindedAction_C
---@field ZOOM_ChangeCap_2 UWBP_KeyBindedAction_C
---@field PistolRef ACarWashPistol
local UWBP_CarWash_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_CarWash_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param ActionName FName
function UWBP_CarWash_C:OnKeyChanged(ActionName) end
function UWBP_CarWash_C:OnKeyReset() end
function UWBP_CarWash_C:Construct() end
function UWBP_CarWash_C:Destruct() end
function UWBP_CarWash_C:OnTab() end
---@param EntryPoint int32
function UWBP_CarWash_C:ExecuteUbergraph_WBP_CarWash(EntryPoint) end


