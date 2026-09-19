---@meta

---@class UGSS_ThrowMiniGame_WBP_C : UGSSThrowMiniGame
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
---@field ThrowingScores UThrowMiniGame_Score_WBP_C
local UGSS_ThrowMiniGame_WBP_C = {}

function UGSS_ThrowMiniGame_WBP_C:Construct() end
---@param Actor AActor
function UGSS_ThrowMiniGame_WBP_C:PlayerSpawnedActor(Actor) end
---@param IsNewRecord boolean
---@param ThrowedActor AActor
function UGSS_ThrowMiniGame_WBP_C:CustomEvent_1(IsNewRecord, ThrowedActor) end
---@param EThrow E_ThrowType::Type
---@param IsActive boolean
---@param Time float
---@param NewRecord boolean
---@param ThrowedActor AActor
function UGSS_ThrowMiniGame_WBP_C:UpdateManager(EThrow, IsActive, Time, NewRecord, ThrowedActor) end
---@param ActionName FName
function UGSS_ThrowMiniGame_WBP_C:SetNewThrowAction(ActionName) end
function UGSS_ThrowMiniGame_WBP_C:Destruct() end
function UGSS_ThrowMiniGame_WBP_C:KeybindingsReset() end
---@param Actor AActor
function UGSS_ThrowMiniGame_WBP_C:CustomEvent_0(Actor) end
---@param IsNewRecord boolean
---@param ThrowedActor AActor
function UGSS_ThrowMiniGame_WBP_C:CustomEvent_2(IsNewRecord, ThrowedActor) end
---@param UpdatedTime FTimeStruct
function UGSS_ThrowMiniGame_WBP_C:UpdateHandleActor(UpdatedTime) end
function UGSS_ThrowMiniGame_WBP_C:HideInteraction() end
---@param EntryPoint int32
function UGSS_ThrowMiniGame_WBP_C:ExecuteUbergraph_GSS_ThrowMiniGame_WBP(EntryPoint) end


