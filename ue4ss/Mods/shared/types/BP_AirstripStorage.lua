---@meta

---@class ABP_AirstripStorage_C : AAirstripStorage
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_AirstripStorage_C = {}

---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ABP_AirstripStorage_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
---@param EntryPoint int32
function ABP_AirstripStorage_C:ExecuteUbergraph_BP_AirstripStorage(EntryPoint) end


