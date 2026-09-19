---@meta

---@class AMagazine_wall_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AMagazine_wall_C = {}

---@return FName
function AMagazine_wall_C:GetInteractionName() end
function AMagazine_wall_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMagazine_wall_C:ExecuteUbergraph_Magazine_wall(EntryPoint) end


