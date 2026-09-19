---@meta

---@class UDE_Popularity_C : UDE_Skippable_C
---@field UberGraphFrame FPointerToUberGraphFrame
local UDE_Popularity_C = {}

---@param InitGSSGameState AGSSGameState
function UDE_Popularity_C:InitializeEventDisplay(InitGSSGameState) end
---@param EntryPoint int32
function UDE_Popularity_C:ExecuteUbergraph_DE_Popularity(EntryPoint) end


