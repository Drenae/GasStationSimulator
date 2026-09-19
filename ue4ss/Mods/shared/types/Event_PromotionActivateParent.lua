---@meta

---@class UEvent_PromotionActivateParent_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LevelNamesWithDelayInDays TMap<FName, int32>
local UEvent_PromotionActivateParent_C = {}

---@param bValue boolean
function UEvent_PromotionActivateParent_C:IsEventAlreadyActive(bValue) end
---@param LevelName FName
---@param NextLevelDelay int32
function UEvent_PromotionActivateParent_C:GetStreamingLevelToLoad(LevelName, NextLevelDelay) end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_PromotionActivateParent_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_PromotionActivateParent_C:OnGameTimeUpdated(UpdatedTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_PromotionActivateParent_C:InitializeEventWorld(World, bEventEnabled) end
function UEvent_PromotionActivateParent_C:FinishEvent() end
---@param EntryPoint int32
function UEvent_PromotionActivateParent_C:ExecuteUbergraph_Event_PromotionActivateParent(EntryPoint) end


