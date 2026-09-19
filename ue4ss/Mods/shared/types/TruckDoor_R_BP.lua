---@meta

---@class ATruckDoor_R_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Timeline_0_angle_0487632740D79F884AD06CA2FDCED627 float
---@field Timeline_0__Direction_0487632740D79F884AD06CA2FDCED627 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field bOpen boolean
local ATruckDoor_R_BP_C = {}

---@return FName
function ATruckDoor_R_BP_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATruckDoor_R_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ATruckDoor_R_BP_C:Timeline_0__FinishedFunc() end
function ATruckDoor_R_BP_C:Timeline_0__UpdateFunc() end
function ATruckDoor_R_BP_C:OpenDoorR() end
---@param EntryPoint int32
function ATruckDoor_R_BP_C:ExecuteUbergraph_TruckDoor_R_BP(EntryPoint) end


