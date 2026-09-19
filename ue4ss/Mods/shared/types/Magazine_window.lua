---@meta

---@class AMagazine_window_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AMagazine_window_C = {}

---@return FName
function AMagazine_window_C:GetInteractionName() end
function AMagazine_window_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMagazine_window_C:ExecuteUbergraph_Magazine_window(EntryPoint) end


