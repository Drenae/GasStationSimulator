---@meta

---@class ACarDoor_Base_BP_C : ACarDoor
---@field UberGraphFrame FPointerToUberGraphFrame
local ACarDoor_Base_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACarDoor_Base_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function ACarDoor_Base_BP_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param EntryPoint int32
function ACarDoor_Base_BP_C:ExecuteUbergraph_CarDoor_Base_BP(EntryPoint) end


