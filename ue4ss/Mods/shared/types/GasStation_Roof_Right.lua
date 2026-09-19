---@meta

---@class AGasStation_Roof_Right_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AGasStation_Roof_Right_C = {}

function AGasStation_Roof_Right_C:UserConstructionScript() end
function AGasStation_Roof_Right_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_Roof_Right_C:ExecuteUbergraph_GasStation_Roof_Right(EntryPoint) end


