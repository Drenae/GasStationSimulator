---@meta

---@class ATowysGarage_BP_C : ATowysGarage
---@field UberGraphFrame FPointerToUberGraphFrame
local ATowysGarage_BP_C = {}

---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ATowysGarage_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
---@param EntryPoint int32
function ATowysGarage_BP_C:ExecuteUbergraph_TowysGarage_BP(EntryPoint) end


