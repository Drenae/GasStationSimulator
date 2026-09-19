---@meta

---@class AGasStation_Window_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AGasStation_Window_C = {}

---@return FName
function AGasStation_Window_C:GetInteractionName() end
function AGasStation_Window_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGasStation_Window_C:ExecuteUbergraph_GasStation_Window(EntryPoint) end


