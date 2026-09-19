---@meta

---@class AGasStation_Wall7_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AGasStation_Wall7_C = {}

---@return FName
function AGasStation_Wall7_C:GetInteractionName() end
function AGasStation_Wall7_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_Wall7_C:ExecuteUbergraph_GasStation_Wall7(EntryPoint) end


