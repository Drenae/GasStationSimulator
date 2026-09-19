---@meta

---@class AWasher_fluid_2_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Washer_fluid_cap UStaticMeshComponent
local AWasher_fluid_2_BP_C = {}

---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AWasher_fluid_2_BP_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param EntryPoint int32
function AWasher_fluid_2_BP_C:ExecuteUbergraph_Washer_fluid_2_BP(EntryPoint) end


