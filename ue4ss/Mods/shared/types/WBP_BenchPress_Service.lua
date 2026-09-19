---@meta

---@class UWBP_BenchPress_Service_C : URvMinigameWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RightArrowSuccessAnim UWidgetAnimation
---@field LeftArrowSuccessAnim UWidgetAnimation
---@field RightArrowAnim UWidgetAnimation
---@field LeftArrowAnim UWidgetAnimation
---@field WaitingForStart UWidgetAnimation
---@field StartGame UWidgetAnimation
---@field RotateWarning UWidgetAnimation
---@field ArrowLeftSuccess UImage
---@field ArrowRightSuccess UImage
---@field background UImage
---@field Counter_Repetitions_TXT UTextBlock
---@field Icon UImage
---@field Image UImage
---@field Image_1 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_Bar_Lifting UImage
---@field Image_Bar_Player UImage
---@field Image_Barbell UImage
---@field KeyHint_Background UImage
---@field KeyHint_Background_1 UImage
---@field KeyHint_Background_2 UImage
---@field KeyHint_Background_3 UImage
---@field KeyHint_BendLeft UWBP_KeyBindedAction_C
---@field KeyHint_BendLeft_1 UWBP_KeyBindedAction_C
---@field KeyHint_BendRight UWBP_KeyBindedAction_C
---@field KeyHint_Mouse UImage
---@field KeyHint_MoveDown UWBP_KeyBindedAction_C
---@field KeyHint_MoveUp UWBP_KeyBindedAction_C
---@field LeftArrowContent UOverlay
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field Notification_Perfect UWBP_RvMinigameActionNotification_C
---@field Overlay_BarHolder UOverlay
---@field PanicBar_ProgressBar UProgressBar
---@field PressStart_Overlay UOverlay
---@field RightArrowContent UOverlay
---@field RMB UWBP_KeyBindedAction_C
---@field StartGameGamePadHint_Horizontal UHorizontalBox
---@field TextBlock_Start UTextBlock
---@field TextBlock_Start_3 UTextBlock
---@field TextBlock_Timer UTextBlock
---@field WBP_KeyHint_LeftAnalog UImage
---@field WBP_KeyHint_LeftAnalog_1 UImage
---@field WBP_KeyHint_LeftThumbstick UWBP_KeyHint_C
---@field WBP_RvMinigameActionNotification UWBP_RvMinigameActionNotification_C
---@field WBP_RvMinigameKeybindGuidePopup UWBP_RvMinigameKeybindGuidePopup_C
---@field bIncrease boolean
---@field RepsCount int32
---@field bMinigameActive boolean
---@field TimeLeft float
---@field TiltTime float
---@field CurrentRotateCount int32
---@field bRotateRight boolean
---@field bWPressed boolean
---@field bSPressed boolean
---@field bAPressed boolean
---@field bDPressed boolean
---@field BenchPressSettings UBenchPressSettings
---@field SpawnedBarbellREF ABP_BarbellForBench_C
---@field BarSpeed float
---@field BarTiltSpeed float
---@field BarSizeY float
---@field CurrentUpMove float
---@field CurrentTilt float
---@field PanicBarBaseProgress float
---@field CurrentPanicBarProgress float
---@field PlayerBarSpeed float
---@field PlayerTiltSpeed float
---@field CustomerOnBenchREF AAICharacterBase
---@field StartRotationTimerHandler FTimerHandle
---@field AtGameStartStartRotateTimer FTimerHandle
---@field ['Cached Angle'] float
---@field ['Cached Left Arrow Visibility'] ESlateVisibility
---@field ['Cached Right Arrow Visibility'] ESlateVisibility
local UWBP_BenchPress_Service_C = {}

---@param InRange boolean
function UWBP_BenchPress_Service_C:LiftBarOverMaxValue(InRange) end
---@param InFocusEvent FFocusEvent
function UWBP_BenchPress_Service_C:OnFocusLost(InFocusEvent) end
---@return float
function UWBP_BenchPress_Service_C:GetCooldownPercentageBonus() end
function UWBP_BenchPress_Service_C:StartRotating() end
---@param RotateValue float
function UWBP_BenchPress_Service_C:RotateBarbell(RotateValue) end
---@param MaxValue float
function UWBP_BenchPress_Service_C:GetMaxValue(MaxValue) end
---@param bOutOfBounds boolean
function UWBP_BenchPress_Service_C:IsOutOfBounds(bOutOfBounds) end
function UWBP_BenchPress_Service_C:RefreshRepCount() end
---@param bUp boolean
---@param DeltaTime float
function UWBP_BenchPress_Service_C:MovePlayerBar(bUp, DeltaTime) end
function UWBP_BenchPress_Service_C:Finished_569C5AEC4EA3665C0640749119E78D58() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_BenchPress_Service_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_BenchPress_Service_C:CustomEscape() end
---@param ServiceTag FGameplayTag
---@param TargetServiceSpot ARvGuestServiceSpot
---@param Difficulty EGuestServiceDifficulty
function UWBP_BenchPress_Service_C:StartMiniGame(ServiceTag, TargetServiceSpot, Difficulty) end
function UWBP_BenchPress_Service_C:PlayerStartMinigame() end
---@param bNewGamepadMode boolean
function UWBP_BenchPress_Service_C:OnDeviceChanged(bNewGamepadMode) end
---@param bSuccess boolean
---@param ExperienceData FRVServiceExperienceData
function UWBP_BenchPress_Service_C:EndMinigame(bSuccess, ExperienceData) end
function UWBP_BenchPress_Service_C:ShowGamepadHints() end
function UWBP_BenchPress_Service_C:KeyBindReset() end
---@param ActionName FName
function UWBP_BenchPress_Service_C:KeyBindChanged(ActionName) end
function UWBP_BenchPress_Service_C:Destruct() end
---@param bOpen boolean
function UWBP_BenchPress_Service_C:SetTutorialOpened(bOpen) end
function UWBP_BenchPress_Service_C:AtGameStartStartRotating() end
UWBP_BenchPress_Service_C['Cache Arrows Visibility'] = function(self, ) end
---@param EntryPoint int32
function UWBP_BenchPress_Service_C:ExecuteUbergraph_WBP_BenchPress_Service(EntryPoint) end


