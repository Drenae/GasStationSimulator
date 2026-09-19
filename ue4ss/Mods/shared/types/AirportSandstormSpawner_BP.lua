---@meta

---@class AAirportSandstormSpawner_BP_C : ASandstormSpawner_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AAirportSandstormSpawner_BP_C = {}

function AAirportSandstormSpawner_BP_C:ReceiveBeginPlay() end
function AAirportSandstormSpawner_BP_C:ReceiveDestroyed() end
---@param Time int32
function AAirportSandstormSpawner_BP_C:SetSandstormTime(Time) end
---@param EntryPoint int32
function AAirportSandstormSpawner_BP_C:ExecuteUbergraph_AirportSandstormSpawner_BP(EntryPoint) end


