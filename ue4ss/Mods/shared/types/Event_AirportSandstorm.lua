---@meta

---@class UEvent_AirportSandstorm_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Quest to Check'] UQuestBase
local UEvent_AirportSandstorm_C = {}

function UEvent_AirportSandstorm_C:ResetSandstormClock() end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_AirportSandstorm_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_AirportSandstorm_C:OnGameTimeUpdated(UpdatedTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_AirportSandstorm_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_AirportSandstorm_C:ExecuteUbergraph_Event_AirportSandstorm(EntryPoint) end


