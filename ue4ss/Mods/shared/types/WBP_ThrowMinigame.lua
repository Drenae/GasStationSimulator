---@meta

---@class UWBP_ThrowMinigame_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Canvas_Panel_Area UCanvasPanel
---@field ConnectingTxt_1 UTextBlock
---@field GamePadIcon USizeBox
---@field Icon_IMG UImage
---@field Icon_IMG_1 UImage
---@field Image UImage
---@field Interaction UScaleBox
---@field MouseIcon_Sizer USizeBox
---@field PREFIX_TXT_1 UTextBlock
---@field ScoresOverlay UOverlay
---@field SOFIX_TXT_1 UTextBlock
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
---@field IsActive boolean
---@field SpawnedActor AActor
---@field Time float
---@field CanCreate boolean
---@field ThrowType E_ThrowType::Type
---@field NewRecord boolean
---@field ThrowedActor AActor
---@field ThrowingScores UThrowMiniGame_Score_C
local UWBP_ThrowMinigame_C = {}

function UWBP_ThrowMinigame_C:Construct() end
---@param Actor AActor
function UWBP_ThrowMinigame_C:PlayerSpawnedActor(Actor) end
---@param IsNewRecord boolean
---@param ThrowedActor AActor
function UWBP_ThrowMinigame_C:CustomEvent_1(IsNewRecord, ThrowedActor) end
---@param EThrow E_ThrowType::Type
---@param IsActive boolean
---@param Time float
---@param NewRecord boolean
---@param ThrowedActor AActor
function UWBP_ThrowMinigame_C:UpdateManager(EThrow, IsActive, Time, NewRecord, ThrowedActor) end
---@param ActionName FName
function UWBP_ThrowMinigame_C:SetNewThrowAction(ActionName) end
function UWBP_ThrowMinigame_C:Destruct() end
function UWBP_ThrowMinigame_C:KeybindingsReset() end
---@param Actor AActor
function UWBP_ThrowMinigame_C:CustomEvent_0(Actor) end
---@param IsNewRecord boolean
---@param ThrowedActor AActor
function UWBP_ThrowMinigame_C:CustomEvent_2(IsNewRecord, ThrowedActor) end
---@param UpdatedTime FTimeStruct
function UWBP_ThrowMinigame_C:UpdateHandleActor(UpdatedTime) end
function UWBP_ThrowMinigame_C:HideInteraction() end
---@param EntryPoint int32
function UWBP_ThrowMinigame_C:ExecuteUbergraph_WBP_ThrowMinigame(EntryPoint) end


