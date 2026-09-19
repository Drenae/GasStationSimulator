---@meta

---@class UCashing_Minigame_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TickAnim UWidgetAnimation
---@field PlusScan UWidgetAnimation
---@field MinusScan UWidgetAnimation
---@field Xanimation UWidgetAnimation
---@field WaitingAnimation UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field ScoreAnimation UWidgetAnimation
---@field ActionPrefixLook UTextBlock
---@field ActionPrefixLook_1 UTextBlock
---@field ActionPrefixLook_2 UTextBlock
---@field ControllsHorizontal UVerticalBox
---@field E_ROTATE_Right UWBP_KeyBindedAction_C
---@field GamePadLook UImage
---@field GamePadPickUpAndMove UOverlay
---@field Interaction_F UWBP_KeyBindedAction_C
---@field InvalidationBox_0 UInvalidationBox
---@field InvalidationBox_1 UInvalidationBox
---@field InvalidationBox_2 UInvalidationBox
---@field InvalidationBox_3 UInvalidationBox
---@field MiniGame_Notification UMiniGame_Notification_C
---@field Minigame_SpecialAction_01 UWBP_KeyBindedAction_C
---@field Minigame_SpecialAction_01_2nd UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field PressKeyOverlay UOverlay
---@field Q_ROTATE_Left UWBP_KeyBindedAction_C
---@field RPM UWBP_KeyBindedAction_C
---@field SlashTXT UTextBlock
---@field TXT_AvgTime UTextBlock
---@field TXT_ITEMS_LEFT UTextBlock
---@field TXT_PERFECT_COMBO UTextBlock
---@field TXT_SUCCESS UTextBlock
---@field TXT_TotalProducts UTextBlock
---@field Time float
---@field Record float
---@field Strike int32
---@field Last float
local UCashing_Minigame_C = {}

---@param bStartMinigame boolean
function UCashing_Minigame_C:ModifyOverlay(bStartMinigame) end
function UCashing_Minigame_C:PlayProductFailX() end
---@param bSuccess boolean
function UCashing_Minigame_C:ProductAnimation(bSuccess) end
---@param NewTime float
function UCashing_Minigame_C:UpdateAverageTime(NewTime) end
---@param TotalProducts int32
---@param TotalSuccess int32
function UCashing_Minigame_C:UpdateTotalTexts(TotalProducts, TotalSuccess) end
---@param NewStrikeAmount int32
function UCashing_Minigame_C:Update_TXT_StrikeCombo(NewStrikeAmount) end
---@param NewItemsLeft int32
UCashing_Minigame_C['Update TXT Items Left'] = function(self, NewItemsLeft) end
---@param NewSuccess int32
function UCashing_Minigame_C:Update_TXT_Success(NewSuccess) end
---@param bShow boolean
function UCashing_Minigame_C:ShowShiftButton(bShow) end
function UCashing_Minigame_C:Destruct() end
function UCashing_Minigame_C:CreateTutorial() end
---@param ActionName FName
function UCashing_Minigame_C:KeyBindChanged(ActionName) end
function UCashing_Minigame_C:KeyBindReset() end
function UCashing_Minigame_C:Construct() end
---@param EntryPoint int32
function UCashing_Minigame_C:ExecuteUbergraph_Cashing_Minigame(EntryPoint) end


