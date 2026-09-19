---@meta

---@class AGasStation_Wall1_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AGasStation_Wall1_C = {}

---@return FName
function AGasStation_Wall1_C:GetInteractionName() end
function AGasStation_Wall1_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_Wall1_C:ExecuteUbergraph_GasStation_Wall1(EntryPoint) end


