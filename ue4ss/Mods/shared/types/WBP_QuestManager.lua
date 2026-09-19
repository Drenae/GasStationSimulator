---@meta

---@class UWBP_QuestManager_C : UUI_QuestManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field InvalidationBox_0 UInvalidationBox
local UWBP_QuestManager_C = {}

---@param MarkerWidget UUserWidget
---@param Actor AActor
function UWBP_QuestManager_C:SetPositionMarker(MarkerWidget, Actor) end
function UWBP_QuestManager_C:Construct() end
---@param UserWidget UUserWidget
---@param TargetActor AActor
function UWBP_QuestManager_C:UpdateMarket(UserWidget, TargetActor) end
---@param EntryPoint int32
function UWBP_QuestManager_C:ExecuteUbergraph_WBP_QuestManager(EntryPoint) end


