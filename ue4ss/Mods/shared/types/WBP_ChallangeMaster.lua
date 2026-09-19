---@meta

---@class UWBP_ChallangeMaster_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeAfterQuest UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field SpawnedQuest UModular_Quest_C
---@field Quest TMap<UGSSQuest, UUserWidget>
---@field ActiveText FText
---@field ChallengeSubwidgets TArray<UWBP_ChallengesPosition_C>
---@field ChallengeVertical UVerticalBox
---@field IsCreatedForPC boolean
---@field MoneyPositionREF UWBP_ChallengesPosition_C
---@field QuestChallengeGroup TArray<FQuestChallenge>
---@field TimeHolder UVerticalBox
---@field TimeText FText
---@field RewardText FText
---@field IsAfterGameChallenge boolean
---@field NoTimer boolean
local UWBP_ChallangeMaster_C = {}

---@param Vis ESlateVisibility
function UWBP_ChallangeMaster_C:SetVisiblityCUstom(Vis) end
function UWBP_ChallangeMaster_C:UpdateTimer() end
---@param TimeLeft float
function UWBP_ChallangeMaster_C:TimerCalculation(TimeLeft) end
function UWBP_ChallangeMaster_C:UpdateAfterGameChallenge() end
---@param Type EGSS_Stat
---@param FoundWidget UWBP_ChallengesPosition_C
function UWBP_ChallangeMaster_C:GetChallengeWidgetToUpdate(Type, FoundWidget) end
function UWBP_ChallangeMaster_C:Construct() end
---@param QuestRef UGSSQuest
UWBP_ChallangeMaster_C['Challange Started'] = function(self, QuestRef) end
---@param ChallengeType EGSS_Stat
---@param NewAmount int32
---@param IsPartDone boolean
function UWBP_ChallangeMaster_C:ObjectiveUpdated(ChallengeType, NewAmount, IsPartDone) end
---@param QuestRef UGSSQuest
UWBP_ChallangeMaster_C['Challenge Completed'] = function(self, QuestRef) end
---@param ChallengeInfo FQuestChallenge
function UWBP_ChallangeMaster_C:PostGameChallengeStarted(ChallengeInfo) end
---@param bSuccess boolean
---@param HappyAward int32
function UWBP_ChallangeMaster_C:PostGameChallengeCompleted(bSuccess, HappyAward) end
---@param TimeLeft float
function UWBP_ChallangeMaster_C:PostGameChallengeTimerUpdate(TimeLeft) end
---@param Objective UChallengeObjective
function UWBP_ChallangeMaster_C:ObjectiveChallengeCompleted_Event_0(Objective) end
---@param Objective UChallengeObjective
function UWBP_ChallangeMaster_C:ObjectiveChallengeStarted(Objective) end
---@param EntryPoint int32
function UWBP_ChallangeMaster_C:ExecuteUbergraph_WBP_ChallangeMaster(EntryPoint) end


