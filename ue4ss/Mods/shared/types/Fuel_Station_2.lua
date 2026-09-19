---@meta

---@class AFuel_Station_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
local AFuel_Station_C = {}

function AFuel_Station_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function AFuel_Station_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function AFuel_Station_C:ExecuteUbergraph_Fuel_Station_2(EntryPoint) end


