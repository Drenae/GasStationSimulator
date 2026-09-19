---@meta

---@class ABP_ParkingSpot_C : AParkingSpot
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_ParkingSpot_C = {}

function ABP_ParkingSpot_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_ParkingSpot_C:ExecuteUbergraph_BP_ParkingSpot(EntryPoint) end


