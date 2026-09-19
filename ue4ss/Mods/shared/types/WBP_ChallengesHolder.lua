---@meta

---@class UWBP_ChallengesHolder_C : UWBP_ChallangeMaster_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ChallengelPositionsHolder UVerticalBox
---@field HandGold_Image UImage
---@field Image_124 UImage
---@field Image_311 UImage
---@field Image_313 UImage
---@field Image_385 UImage
---@field Image_479 UImage
---@field PopularityRewardOverlay UOverlay
---@field RewardTextChild UTextBlock
---@field TimeTextChild UTextBlock
---@field VolcanoGold_Image UImage
---@field SpawnedQuest_0 UModular_Quest_C
---@field Quest_0 TMap<UGSSQuest, UUserWidget>
---@field ChallengeSubwidgets_0 TArray<UWBP_ChallengesPosition_C>
local UWBP_ChallengesHolder_C = {}

---@param Vis ESlateVisibility
function UWBP_ChallengesHolder_C:SetVisiblityCUstom(Vis) end
function UWBP_ChallengesHolder_C:UpdateTimer() end
function UWBP_ChallengesHolder_C:UpdateAfterGameChallenge() end
function UWBP_ChallengesHolder_C:Construct() end
---@param EntryPoint int32
function UWBP_ChallengesHolder_C:ExecuteUbergraph_WBP_ChallengesHolder(EntryPoint) end


