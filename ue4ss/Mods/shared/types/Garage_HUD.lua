---@meta

---@class UGarage_HUD_C : UGarageHUDBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BateryGamePadHint UOverlay
---@field ControllsHorizontalMain UVerticalBox
---@field ControllsMinigameHorizontal UVerticalBox
---@field FixingActionNameTXT UTextBlock
---@field HighlightActionKey UWBP_KeyBindedAction_C
---@field HintBatery UOverlay
---@field HintCoolant UOverlay
---@field HintMirror UOverlay
---@field HintMirrorFluid UOverlay
---@field HintScratch UOverlay
---@field HintSparkPlug UOverlay
---@field HintWheel UOverlay
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_50 UImage
---@field Image_66 UImage
---@field Image_80 UImage
---@field Image_186 UImage
---@field InvalidationBox_0 UInvalidationBox
---@field LPM_Batery UWBP_KeyBindedAction_C
---@field LPM_Coolant UWBP_KeyBindedAction_C
---@field LPM_Mirror UWBP_KeyBindedAction_C
---@field LPM_MirrorsFluid UWBP_KeyBindedAction_C
---@field LPM_Scratch UWBP_KeyBindedAction_C
---@field LPM_SparkPlug UWBP_KeyBindedAction_C
---@field LPM_SparkPlug2 UWBP_KeyBindedAction_C
---@field LPM_Wheel UWBP_KeyBindedAction_C
---@field MainCanvas UCanvasPanel
---@field MinigameWidgetsHolder UCanvasPanel
---@field Minut UTextBlock
---@field MirrorGamePadHint UOverlay
---@field MoreInfoActionKey UWBP_KeyBindedAction_C
---@field MoveToPolishImage UImage
---@field NeededItemTXT UTextBlock
---@field NotificationTextHorizontal UHorizontalBox
---@field RMB_Coolant UWBP_KeyBindedAction_C
---@field RMB_SparkPlug UWBP_KeyBindedAction_C
---@field RPM_MirrorsFluid UWBP_KeyBindedAction_C
---@field ScratchGamePadHint UOverlay
---@field Sec UTextBlock
---@field WBP_GenericGarageScore UWBP_GenericGarageScore_C
---@field WheelGamePadHint UOverlay
---@field Widget1 UCanvasPanel
---@field Vehicle AGSSWheeledVehicle
---@field GarageRef AGarage
---@field InfoWidget UUserWidget
---@field PrzykladowyINT int32
---@field OneOfGamesAreStillOn boolean
---@field CurrentActiveWidget UWBP_GenericGarageScore_C
---@field GarageTutorialREF UMiniGames_Tutorial_C
---@field OneTimeTutDone boolean
---@field CurrentInstigator AActor
local UGarage_HUD_C = {}

---@param Instigator AActor
function UGarage_HUD_C:StartCountingAnimation(Instigator) end
function UGarage_HUD_C:UpdateValues() end
function UGarage_HUD_C:Construct() end
---@param CarLiftReference ACarLift
---@param CarReference AGSSWheeledVehicle
function UGarage_HUD_C:OnGameStarted(CarLiftReference, CarReference) end
function UGarage_HUD_C:Destruct() end
---@param CarLiftReference ACarLift
---@param CarReference AGSSWheeledVehicle
function UGarage_HUD_C:OnGarageGameFinishs(CarLiftReference, CarReference) end
---@param MinigameType EGarageMinigame
function UGarage_HUD_C:OnMinigameStarted(MinigameType) end
---@param MinigameType EGarageMinigame
---@param bSuccess boolean
function UGarage_HUD_C:OnMinigameEnded(MinigameType, bSuccess) end
---@param CarLiftReference ACarLift
function UGarage_HUD_C:OnCarLiftVolumeChange(CarLiftReference) end
function UGarage_HUD_C:OnGarageLeft() end
function UGarage_HUD_C:OnGarageEnter() end
---@param ActionName FName
function UGarage_HUD_C:OnKeybindingChanged(ActionName) end
function UGarage_HUD_C:OnKeybindingReset() end
---@param bShow boolean
function UGarage_HUD_C:Show(bShow) end
---@param GameType EGarageMinigame
---@param bMinigameStarted boolean
function UGarage_HUD_C:SwitchHints(GameType, bMinigameStarted) end
---@param TargetActor AActor
---@param Fixed boolean
function UGarage_HUD_C:CustomEvent_0(TargetActor, Fixed) end
---@param TypeOfBrokenPart EGarageNotification
function UGarage_HUD_C:NotificationOfBroken(TypeOfBrokenPart) end
function UGarage_HUD_C:Create() end
---@param EntryPoint int32
function UGarage_HUD_C:ExecuteUbergraph_Garage_HUD(EntryPoint) end


