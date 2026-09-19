---@meta

---@class AMagazine_door_C : ACustomizationHousePart_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AMagazine_door_C = {}

---@return FName
function AMagazine_door_C:GetInteractionName() end
function AMagazine_door_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMagazine_door_C:ExecuteUbergraph_Magazine_door(EntryPoint) end


