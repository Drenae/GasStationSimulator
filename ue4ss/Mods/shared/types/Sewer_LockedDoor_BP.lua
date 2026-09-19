---@meta

---@class ASewer_LockedDoor_BP_C : ADoor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DoorOpen_Yaw_AD557372449301D117C583A143D8235F float
---@field DoorOpen__Direction_AD557372449301D117C583A143D8235F ETimelineDirection::Type
---@field DoorOpen UTimelineComponent
---@field PreviousState EDoorState
local ASewer_LockedDoor_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewer_LockedDoor_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ASewer_LockedDoor_BP_C:UserConstructionScript() end
function ASewer_LockedDoor_BP_C:DoorOpen__FinishedFunc() end
function ASewer_LockedDoor_BP_C:DoorOpen__UpdateFunc() end
---@param NewState EDoorState
function ASewer_LockedDoor_BP_C:OnStateUpdated(NewState) end
---@param EntryPoint int32
function ASewer_LockedDoor_BP_C:ExecuteUbergraph_Sewer_LockedDoor_BP(EntryPoint) end


