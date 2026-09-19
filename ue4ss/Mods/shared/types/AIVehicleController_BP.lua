---@meta

---@class AAIVehicleController_BP_C : AAIVehicleController
---@field UberGraphFrame FPointerToUberGraphFrame
local AAIVehicleController_BP_C = {}

function AAIVehicleController_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AAIVehicleController_BP_C:ExecuteUbergraph_AIVehicleController_BP(EntryPoint) end


