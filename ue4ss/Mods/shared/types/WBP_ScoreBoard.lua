---@meta

---@class UWBP_ScoreBoard_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_65 UImage
---@field Place_txt UTextBlock
---@field PlayerName_TXT UTextBlock
---@field Score UTextBlock
---@field SetPlayerName FText
---@field SetPlace FText
---@field ScoreType EMinigame
---@field ScoreValue int32
---@field SingleScoreSpot boolean
local UWBP_ScoreBoard_C = {}

function UWBP_ScoreBoard_C:Construct() end
---@param Hover boolean
function UWBP_ScoreBoard_C:GamePadHover(Hover) end
---@param EntryPoint int32
function UWBP_ScoreBoard_C:ExecuteUbergraph_WBP_ScoreBoard(EntryPoint) end


