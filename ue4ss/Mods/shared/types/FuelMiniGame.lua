---@meta

---@class UFuelMiniGame_C : UFuelMinigameWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TurboAnim UWidgetAnimation
---@field CanvasPanel_Area UCanvasPanel
---@field ControllsHorizontal UVerticalBox
---@field FUEL_AIR_CLOCK UFUEL_AIR_CLOCK_C
---@field Fuel_Place_Holder UFuel_Place_Holder_C
---@field FuelMiniGame_Score UFuelMiniGame_Score_C
---@field Image_278 UImage
---@field InvalidationBox_2 UInvalidationBox
---@field InvalidationBox_4 UInvalidationBox
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field PressKeyOverlay UOverlay
---@field SHIFT_INTERACTION UWBP_KeyBindedAction_C
---@field StartFuelingInfoPad UOverlay
---@field WBP_BuyFuelNotification UWBP_BuyFuelNotification_C
---@field Instigator ACharacter
---@field CurrentFuel float
---@field AICharacter AAICharacterBase
---@field TargetFuel float
---@field FuelMultiply float
---@field FuelStation AFuelStation
---@field Boost UPC_Notification_TT_C
---@field ooo UPC_Notification_TT_C
---@field LoopFuel UAudioComponent
---@field Timer FTimerHandle
---@field Tip UMiniGames_Tutorial_C
---@field BuyFuelOnScreen boolean
---@field IsFueling boolean
---@field TimeSinceStart float
---@field FuelPistol AFuelPistolBase
---@field FinishedMinigame boolean
local UFuelMiniGame_C = {}

---@param TargetDifference float
function UFuelMiniGame_C:FuelFinished_AchievementEvent(TargetDifference) end
function UFuelMiniGame_C:Interacted_Minigame() end
function UFuelMiniGame_C:Interacted_PC() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UFuelMiniGame_C:Tick(MyGeometry, InDeltaTime) end
function UFuelMiniGame_C:Construct() end
function UFuelMiniGame_C:StopTurbo() end
---@param On boolean
function UFuelMiniGame_C:TurboSpeed(On) end
function UFuelMiniGame_C:StopFuel() end
function UFuelMiniGame_C:CustomEvent_1() end
function UFuelMiniGame_C:Destruct() end
function UFuelMiniGame_C:CustomEvent_2() end
function UFuelMiniGame_C:CreateTutorial() end
---@param ActionName FName
function UFuelMiniGame_C:KeyBindChanged(ActionName) end
function UFuelMiniGame_C:OnGamePadUpdate() end
---@param CurrentFuelAmount float
function UFuelMiniGame_C:OnFuelUpdate(CurrentFuelAmount) end
function UFuelMiniGame_C:SPACE() end
function UFuelMiniGame_C:StopFuelingLPM() end
---@param AngerState EChunchumanchuAnger
---@param Value float
---@param ValueChanged float
function UFuelMiniGame_C:OnChunchumanchuAngerChange(AngerState, Value, ValueChanged) end
function UFuelMiniGame_C:ForceStopFuel() end
---@param EntryPoint int32
function UFuelMiniGame_C:ExecuteUbergraph_FuelMiniGame(EntryPoint) end


