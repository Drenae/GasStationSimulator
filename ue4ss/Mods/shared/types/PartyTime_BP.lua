---@meta

---@class APartyTime_BP_C : APartyTime
---@field UberGraphFrame FPointerToUberGraphFrame
local APartyTime_BP_C = {}

---@param Level int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function APartyTime_BP_C:SetActorLevel(Level, bLoadedFromSaveGame, bNewVersion) end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function APartyTime_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
function APartyTime_BP_C:PostLoadMapsBlueprintEvent() end
---@param EntryPoint int32
function APartyTime_BP_C:ExecuteUbergraph_PartyTime_BP(EntryPoint) end


