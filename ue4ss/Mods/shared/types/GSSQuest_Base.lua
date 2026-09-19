---@meta

---@class UGSSQuest_Base_C : UGSSQuest
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EventsTimer TArray<FGSSEventTime>
local UGSSQuest_Base_C = {}

---@param Pawn APawn
function UGSSQuest_Base_C:InitializeQuest(Pawn) end
---@param Pawn APawn
function UGSSQuest_Base_C:UpdateQuest(Pawn) end
---@param DeltaTime float
function UGSSQuest_Base_C:TickObject(DeltaTime) end
---@param QuestState EQuestState
function UGSSQuest_Base_C:FinishQuest(QuestState) end
function UGSSQuest_Base_C:LoadQuestStats() end
---@param EntryPoint int32
function UGSSQuest_Base_C:ExecuteUbergraph_GSSQuest_Base(EntryPoint) end


