---@meta

---@class UWBP_MinigameMarshalWands_C : UMinigameMarshalWandsWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DataCanvasPanel UCanvasPanel
---@field Image_102 UImage
---@field Image_border UImage
---@field Image_plane UImage
---@field Interaction_F UWBP_KeyBindedAction_C
---@field LMB UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field MinigameTimer UTextBlock
---@field MoveRight_Both UWBP_KeyBindedAction_C
---@field MoveRight_KeyboardOnly UWBP_KeyBindedAction_C
---@field PlaneStateTXT UTextBlock
---@field ProgressBar_62 UProgressBar
---@field Slider USlider
---@field Slider_59 USlider
---@field SPACE UWBP_KeyBindedAction_C
---@field SteerSeparator_TXT UTextBlock
---@field Turn_KeyboardOnly UWBP_KeyBindedAction_C
---@field Turn_PadOnly UWBP_KeyBindedAction_C
---@field bIsShownOnStart boolean
local UWBP_MinigameMarshalWands_C = {}

---@param Position float
---@param Angle float
function UWBP_MinigameMarshalWands_C:MoveImage(Position, Angle) end
---@return float
function UWBP_MinigameMarshalWands_C:GetValue_1() end
---@return float
function UWBP_MinigameMarshalWands_C:GetValue_0() end
---@return float
function UWBP_MinigameMarshalWands_C:GetPercent_0() end
function UWBP_MinigameMarshalWands_C:Construct() end
---@param bSuccessfull boolean
function UWBP_MinigameMarshalWands_C:OnMarshalWandsMinigameFinished_Event(bSuccessfull) end
function UWBP_MinigameMarshalWands_C:UpdateWidgetValues() end
function UWBP_MinigameMarshalWands_C:OnMarshalWandsMinigameStarted_Event() end
function UWBP_MinigameMarshalWands_C:OnMarshalWandsMinigameRestarted_Event() end
function UWBP_MinigameMarshalWands_C:Destruct() end
---@param ActionName FName
function UWBP_MinigameMarshalWands_C:KeyBindChanged(ActionName) end
function UWBP_MinigameMarshalWands_C:KeyBindReset() end
UWBP_MinigameMarshalWands_C['On Minigame Tutorial Widget Closed'] = function(self, ) end
UWBP_MinigameMarshalWands_C['OnMinigame Widget Opened'] = function(self, ) end
---@param EntryPoint int32
function UWBP_MinigameMarshalWands_C:ExecuteUbergraph_WBP_MinigameMarshalWands(EntryPoint) end


