---@meta

---@class AGasStation_Roof_Left_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AGasStation_Roof_Left_C = {}

function AGasStation_Roof_Left_C:UserConstructionScript() end
function AGasStation_Roof_Left_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_Roof_Left_C:ExecuteUbergraph_GasStation_Roof_Left(EntryPoint) end


