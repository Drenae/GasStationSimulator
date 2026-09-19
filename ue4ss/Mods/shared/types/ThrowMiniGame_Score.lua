---@meta

---@class UThrowMiniGame_Score_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RecordAnim UWidgetAnimation
---@field Basketball_LastScoreOverlay UOverlay
---@field Basketball_LongestScore UOverlay
---@field Image_123 UImage
---@field Image_147 UImage
---@field Image_195 UImage
---@field Image_395 UImage
---@field LAST_DISTANCE_TXT UTextBlock
---@field LONGEST_DISTANCE_TXT UTextBlock
---@field STRIKE_SCORE_TXT UTextBlock
---@field ThrowingScoreDistance UOverlay
---@field TrashLastScore UOverlay
---@field TrashLongestDistance UOverlay
---@field NewRecord boolean
---@field ThrowedActor AActor
---@field CurrentDistance float
local UThrowMiniGame_Score_C = {}

function UThrowMiniGame_Score_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UThrowMiniGame_Score_C:Tick(MyGeometry, InDeltaTime) end
function UThrowMiniGame_Score_C:Destruct() end
function UThrowMiniGame_Score_C:AchievementCheck() end
---@param EntryPoint int32
function UThrowMiniGame_Score_C:ExecuteUbergraph_ThrowMiniGame_Score(EntryPoint) end


