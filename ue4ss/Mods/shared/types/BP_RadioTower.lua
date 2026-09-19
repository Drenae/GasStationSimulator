---@meta

---@class ABP_RadioTower_C : ARadioTower
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_RadioTower_C = {}

---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ABP_RadioTower_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
function ABP_RadioTower_C:PostLoadMapsBlueprintEvent() end
---@param EntryPoint int32
function ABP_RadioTower_C:ExecuteUbergraph_BP_RadioTower(EntryPoint) end


