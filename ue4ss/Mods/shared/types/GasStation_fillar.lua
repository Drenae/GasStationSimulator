---@meta

---@class AGasStation_fillar_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AGasStation_fillar_C = {}

function AGasStation_fillar_C:UserConstructionScript() end
function AGasStation_fillar_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_fillar_C:ExecuteUbergraph_GasStation_fillar(EntryPoint) end


