---@meta

---@class UFuelMiniGame_Score_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NewScore UWidgetAnimation
---@field LAST_Score_TXT UTextBlock
---@field Under_01_TXT UTextBlock
---@field Time float
---@field Record float
---@field Strike int32
---@field Last float
local UFuelMiniGame_Score_C = {}

function UFuelMiniGame_Score_C:Construct() end
function UFuelMiniGame_Score_C:UpdateScore() end
---@param EntryPoint int32
function UFuelMiniGame_Score_C:ExecuteUbergraph_FuelMiniGame_Score(EntryPoint) end


