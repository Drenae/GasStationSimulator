---@meta

---@class UWBP_ShowQuestHolder_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FollowNextQuestLineTip UHorizontalBox
---@field Image_1 UImage
---@field Image_41 UImage
---@field Image_84 UImage
---@field ProgressBar UImage
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
---@field ProgressBarImage UMaterialInstanceDynamic
---@field UpdatingProgressBar boolean
---@field ProgressBarTime float
---@field ProgressBarCurrentTime float
local UWBP_ShowQuestHolder_C = {}

---@param ActionName FName
function UWBP_ShowQuestHolder_C:KeyBindChanged(ActionName) end
function UWBP_ShowQuestHolder_C:KeyBindReset() end
function UWBP_ShowQuestHolder_C:OnInitialized() end
function UWBP_ShowQuestHolder_C:Destruct() end
---@param InteractionTime float
function UWBP_ShowQuestHolder_C:StartProgressBar(InteractionTime) end
---@param InteractionSuccesfull boolean
function UWBP_ShowQuestHolder_C:EndProgressBar(InteractionSuccesfull) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_ShowQuestHolder_C:Tick(MyGeometry, InDeltaTime) end
---@param bIsPressed boolean
function UWBP_ShowQuestHolder_C:SetupProgressBar(bIsPressed) end
---@param EntryPoint int32
function UWBP_ShowQuestHolder_C:ExecuteUbergraph_WBP_ShowQuestHolder(EntryPoint) end


