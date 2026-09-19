---@meta

---@class ABP_JunkyardOffice_C : AJunkyardOffice
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_JunkyardOffice_C = {}

---@param States TArray<EState>
function ABP_JunkyardOffice_C:UnlockStates(States) end
---@param Level int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function ABP_JunkyardOffice_C:SetActorLevel(Level, bLoadedFromSaveGame, bNewVersion) end
---@param EntryPoint int32
function ABP_JunkyardOffice_C:ExecuteUbergraph_BP_JunkyardOffice(EntryPoint) end


