---@meta

---@class UEvent_RV_Denis_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DenisClass TSoftClassPtr<AAICharacterBase>
---@field DennisAttackTask TSoftClassPtr<UDenisTask>
---@field bIsDenisForceSpawnedFromQuest boolean
local UEvent_RV_Denis_C = {}

---@return boolean
function UEvent_RV_Denis_C:CalcTime() end
function UEvent_RV_Denis_C:SpawnDenis() end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_RV_Denis_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param EntryPoint int32
function UEvent_RV_Denis_C:ExecuteUbergraph_Event_RV_Denis(EntryPoint) end


