---@meta

---@class ATradeCenter_BP_C : ATradeCenter
---@field UberGraphFrame FPointerToUberGraphFrame
local ATradeCenter_BP_C = {}

---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ATradeCenter_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
function ATradeCenter_BP_C:PostLoadMapsBlueprintEvent() end
---@param EntryPoint int32
function ATradeCenter_BP_C:ExecuteUbergraph_TradeCenter_BP(EntryPoint) end


