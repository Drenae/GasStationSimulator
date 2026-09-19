---@meta

---@class AMirroFix_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
local AMirroFix_C = {}

function AMirroFix_C:ReceiveBeginPlay() end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AMirroFix_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param EntryPoint int32
function AMirroFix_C:ExecuteUbergraph_MirroFix(EntryPoint) end


