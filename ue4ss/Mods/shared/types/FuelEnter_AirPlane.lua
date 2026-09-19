---@meta

---@class AFuelEnter_AirPlane_C : AAirPlaneFuelEnter_01_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AFuelEnter_AirPlane_C = {}

---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AFuelEnter_AirPlane_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param EntryPoint int32
function AFuelEnter_AirPlane_C:ExecuteUbergraph_FuelEnter_AirPlane(EntryPoint) end


