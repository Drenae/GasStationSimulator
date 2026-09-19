---@meta

---@class UIceCreamMinigame_C : UGSSWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Action7_S USpacer
---@field CanvasPanel_0 UCanvasPanel
---@field ControllsHorizontal UVerticalBox
---@field IcecreamNavigation_OnlyPad UOverlay
---@field IceCreamOrder_WBP UIceCreamOrder_WBP_C
---@field Interaction_F UWBP_KeyBindedAction_C
---@field LPM_Key UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field MinigameSpecial_01 UWBP_KeyBindedAction_C
---@field Nav_S USpacer
---@field NavDown_Key UWBP_KeyBindedAction_C
---@field NavLeft_Key UWBP_KeyBindedAction_C
---@field NavRight_Key UWBP_KeyBindedAction_C
---@field NavUp_Key UWBP_KeyBindedAction_C
---@field RPM_Key UWBP_KeyBindedAction_C
---@field AICharacter AAICharacterBase
---@field InfoWidget UUserWidget
---@field PlayerCharacter AGSSPlayerCharacter
---@field CursorWidget UWBP_CursorWidgetHand_C
local UIceCreamMinigame_C = {}

---@param NewVisiblity boolean
function UIceCreamMinigame_C:SetCursorVisibility(NewVisiblity) end
function UIceCreamMinigame_C:SetCustomCursor() end
---@param InputName FName
function UIceCreamMinigame_C:OnKeybindingChanged_F(InputName) end
function UIceCreamMinigame_C:Construct() end
---@param ActionName FName
function UIceCreamMinigame_C:CustomEvent_0(ActionName) end
function UIceCreamMinigame_C:OnKeybindReset() end
---@param bNewGamepadMode boolean
function UIceCreamMinigame_C:OnGamepadModeToggled(bNewGamepadMode) end
function UIceCreamMinigame_C:Destruct() end
---@param EntryPoint int32
function UIceCreamMinigame_C:ExecuteUbergraph_IceCreamMinigame(EntryPoint) end


