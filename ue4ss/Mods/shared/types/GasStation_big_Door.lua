---@meta

---@class AGasStation_big_Door_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AGasStation_big_Door_C = {}

function AGasStation_big_Door_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_big_Door_C:ExecuteUbergraph_GasStation_big_Door(EntryPoint) end


