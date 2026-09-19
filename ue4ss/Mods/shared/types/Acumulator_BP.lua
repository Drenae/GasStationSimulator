---@meta

---@class AAcumulator_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Garage UAudioComponent
---@field StartDelay float
local AAcumulator_BP_C = {}

---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AAcumulator_BP_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param Pawn APawn
---@param Success boolean
---@param FailReason FString
function AAcumulator_BP_C:StartVehicleMinigame(Pawn, Success, FailReason) end
---@param EntryPoint int32
function AAcumulator_BP_C:ExecuteUbergraph_Acumulator_BP(EntryPoint) end


