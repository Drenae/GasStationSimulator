---@meta

---@class ACoolant_Fix_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
local ACoolant_Fix_BP_C = {}

function ACoolant_Fix_BP_C:ReceiveBeginPlay() end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function ACoolant_Fix_BP_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param EntryPoint int32
function ACoolant_Fix_BP_C:ExecuteUbergraph_Coolant_Fix_BP(EntryPoint) end


