---@meta

---@class ACoolant_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Coolant_Cap UStaticMeshComponent
---@field CurrentWheel AWheel_BP_C
---@field Garage UAudioComponent
---@field StartDelay float
local ACoolant_BP_C = {}

---@param Broken boolean
---@param WasFixedSuccessfully boolean
function ACoolant_BP_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param Pawn APawn
---@param Success boolean
---@param FailReason FString
function ACoolant_BP_C:StartVehicleMinigame(Pawn, Success, FailReason) end
---@param EntryPoint int32
function ACoolant_BP_C:ExecuteUbergraph_Coolant_BP(EntryPoint) end


