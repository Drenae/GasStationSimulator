---@meta

---@class ABP_ChemicalBath_Building_C : AChemicalBath_Building
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_ChemicalBath_Building_C = {}

---@param Level int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ABP_ChemicalBath_Building_C:SetActorLevel(Level, bLoadedFromSaveGame, bNewVersion) end
---@param EntryPoint int32
function ABP_ChemicalBath_Building_C:ExecuteUbergraph_BP_ChemicalBath_Building(EntryPoint) end


