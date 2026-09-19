---@meta

---@class AParking_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
local AParking_C = {}

function AParking_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function AParking_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function AParking_C:ExecuteUbergraph_Parking_3(EntryPoint) end


