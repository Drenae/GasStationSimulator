---@meta

---@class UWBP_HideQuestHolderHint_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field FollowNextQuestLineTip UHorizontalBox
---@field LeftText UTextBlock
---@field ProgressBar UImage
---@field RightText UTextBlock
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
---@field ProgressBarImage UMaterialInstanceDynamic
---@field UpdatingProgressBar boolean
---@field ProgressBarTime float
---@field ProgressBarCurrentTime float
local UWBP_HideQuestHolderHint_C = {}

---@param ActionName FName
function UWBP_HideQuestHolderHint_C:KeyBindChanged(ActionName) end
function UWBP_HideQuestHolderHint_C:KeyBindReset() end
function UWBP_HideQuestHolderHint_C:OnInitialized() end
function UWBP_HideQuestHolderHint_C:Destruct() end
---@param InteractionTime float
function UWBP_HideQuestHolderHint_C:StartProgressBar(InteractionTime) end
---@param InteractionSuccesfull boolean
function UWBP_HideQuestHolderHint_C:EndProgressBar(InteractionSuccesfull) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_HideQuestHolderHint_C:Tick(MyGeometry, InDeltaTime) end
---@param bIsPressed boolean
function UWBP_HideQuestHolderHint_C:SetupProgressBar(bIsPressed) end
---@param Hidden boolean
function UWBP_HideQuestHolderHint_C:SetMode(Hidden) end
---@param QuestStarted UQuestBase
function UWBP_HideQuestHolderHint_C:Show(QuestStarted) end
---@param IsDesignTime boolean
function UWBP_HideQuestHolderHint_C:PreConstruct(IsDesignTime) end
---@param FollowedQuestLine UActiveQuestLine
function UWBP_HideQuestHolderHint_C:Show_2(FollowedQuestLine) end
---@param EntryPoint int32
function UWBP_HideQuestHolderHint_C:ExecuteUbergraph_WBP_HideQuestHolderHint(EntryPoint) end


