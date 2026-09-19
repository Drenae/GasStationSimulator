---@meta

---@class ATruckDoor_L_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Timeline_0_angle_AE29953545F094387F33A185435F7BA2 float
---@field Timeline_0__Direction_AE29953545F094387F33A185435F7BA2 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field bOpen boolean
local ATruckDoor_L_BP_C = {}

---@return FName
function ATruckDoor_L_BP_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATruckDoor_L_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ATruckDoor_L_BP_C:Timeline_0__FinishedFunc() end
function ATruckDoor_L_BP_C:Timeline_0__UpdateFunc() end
function ATruckDoor_L_BP_C:OpenDoorR() end
---@param EntryPoint int32
function ATruckDoor_L_BP_C:ExecuteUbergraph_TruckDoor_L_BP(EntryPoint) end


