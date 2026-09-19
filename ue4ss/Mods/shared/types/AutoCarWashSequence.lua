---@meta

---@class AAutoCarWashSequence_C : ALevelSequenceActor
---@field UberGraphFrame FPointerToUberGraphFrame
local AAutoCarWashSequence_C = {}

---@param Station AAutomaticCarWash_BP_C
function AAutoCarWashSequence_C:BindCarWashStation(Station) end
function AAutoCarWashSequence_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AAutoCarWashSequence_C:ExecuteUbergraph_AutoCarWashSequence(EntryPoint) end


