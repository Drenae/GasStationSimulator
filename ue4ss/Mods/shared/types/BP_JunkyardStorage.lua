---@meta

---@class ABP_JunkyardStorage_C : AJunkyardStorage
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_JunkyardStorage_C = {}

---@param Level int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ABP_JunkyardStorage_C:SetActorLevel(Level, bLoadedFromSaveGame, bNewVersion) end
---@param bLoadedFromSaveGame boolean
---@param NewVersion boolean
function ABP_JunkyardStorage_C:LoadGameBeginPlay(bLoadedFromSaveGame, NewVersion) end
---@param EntryPoint int32
function ABP_JunkyardStorage_C:ExecuteUbergraph_BP_JunkyardStorage(EntryPoint) end


