---@meta

---@class UWBP_QuestHolder_C : UQuestHolderWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeAfterQuest UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Image_CommunicationDevice UImage
---@field Image_QuestlineIcon UImage
---@field QuestHolder UOverlay
---@field Quests UVerticalBox
---@field WBP_ChangeQuestlineTip UWBP_ChangeQuestlineTip_C
---@field QuestInfoWidgetInstance UWBP_QuestInfo_C
---@field QuestTipWidgetInstance UWBP_QuestTip_C
---@field CurrentlyShownQuest UQuestBase
---@field AsyncQuestLinesToLoad int32
local UWBP_QuestHolder_C = {}

function UWBP_QuestHolder_C:TryToSetCorrectQuestLineAfterAsyncLoad() end
---@param Loaded UObject
function UWBP_QuestHolder_C:OnLoaded_E23B845745A860261A020F924A4D286B(Loaded) end
---@param QuestFinished UQuestBase
function UWBP_QuestHolder_C:OnQuestFinished(QuestFinished) end
---@param FollowedQuestLine UActiveQuestLine
function UWBP_QuestHolder_C:OnNewQuestLineFollowed(FollowedQuestLine) end
---@param ObjectiveStarted UObjectiveBase
function UWBP_QuestHolder_C:OnObjectiveStarted(ObjectiveStarted) end
---@param NewUnlockableUIState FUnlockableUIState
function UWBP_QuestHolder_C:OnNewUnlockableUIStateSet(NewUnlockableUIState) end
---@param QuestLineStarted UQuestLineBase
function UWBP_QuestHolder_C:OnQuestLineStarted(QuestLineStarted) end
---@param QuestLineFinished UQuestLineBase
function UWBP_QuestHolder_C:OnQuestLineFinished(QuestLineFinished) end
---@param QuestStarted UQuestBase
function UWBP_QuestHolder_C:OnQuestStarted_Event(QuestStarted) end
---@param ObjectiveStarted UObjectiveBase
function UWBP_QuestHolder_C:OnObjectiveStarted_Event(ObjectiveStarted) end
---@param MailClass TSubclassOf<UGSSMail>
function UWBP_QuestHolder_C:OnMailSend(MailClass) end
function UWBP_QuestHolder_C:OnInitialized() end
---@param GameLoaded boolean
function UWBP_QuestHolder_C:TrackLoadedQuestlines(GameLoaded) end
---@param QuestLine UQuestLineBase
function UWBP_QuestHolder_C:UpdateQuestlineImage(QuestLine) end
function UWBP_QuestHolder_C:UpdateCurrentQuestInfo() end
function UWBP_QuestHolder_C:Construct() end
---@param QuestStarted UQuestBase
function UWBP_QuestHolder_C:OnQuestStarted(QuestStarted) end
---@param EntryPoint int32
function UWBP_QuestHolder_C:ExecuteUbergraph_WBP_QuestHolder(EntryPoint) end


