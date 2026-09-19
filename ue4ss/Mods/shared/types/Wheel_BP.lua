---@meta

---@class AWheel_BP_C : AWheel
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpawnRotator FRotator
local AWheel_BP_C = {}

function AWheel_BP_C:CalculateSpawnRotator() end
function AWheel_BP_C:UserConstructionScript() end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AWheel_BP_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param Pawn APawn
---@param Success boolean
---@param FailReason FString
function AWheel_BP_C:StartVehicleMinigame(Pawn, Success, FailReason) end
---@param EntryPoint int32
function AWheel_BP_C:ExecuteUbergraph_Wheel_BP(EntryPoint) end


