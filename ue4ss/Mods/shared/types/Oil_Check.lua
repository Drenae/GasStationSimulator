---@meta

---@class AOil_Check_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Garage UAudioComponent
---@field Camera UArrowComponent
---@field CurrentWheel AWheel_BP_C
---@field StartDelay float
local AOil_Check_C = {}

---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AOil_Check_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param Pawn APawn
---@param Success boolean
---@param FailReason FString
function AOil_Check_C:StartVehicleMinigame(Pawn, Success, FailReason) end
---@param EntryPoint int32
function AOil_Check_C:ExecuteUbergraph_Oil_Check(EntryPoint) end


