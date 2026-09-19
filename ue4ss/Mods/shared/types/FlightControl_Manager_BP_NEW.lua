---@meta

---@class AFlightControl_Manager_BP_NEW_C : AFlightControlManager
---@field DefaultSceneRoot USceneComponent
---@field MiddleStrip_TimeBetweenPlanes float
---@field MiddleStripTimer FTimerHandle
---@field ThirdStripTimer FTimerHandle
---@field ThirdStrip_TimeBetweenPlanes float
---@field CurrentSequencPlayer_MS ULevelSequencePlayer
---@field CurrentSequencPlayer_TS ULevelSequencePlayer
local AFlightControl_Manager_BP_NEW_C = {}

---@param SequenceToStart ALevelSequenceActor
---@param CurrentSequencPlayer ULevelSequencePlayer
function AFlightControl_Manager_BP_NEW_C:F_StartSequence(SequenceToStart, CurrentSequencPlayer) end


