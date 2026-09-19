---@meta

---@class ABP_ToiletDoor_C : ABP_ToiletDoorBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Toilet_Doors_Hinge UStaticMeshComponent
---@field SM_Toilet_Doors_Right UStaticMeshComponent
---@field SM_Toilet_Doors_Left UStaticMeshComponent
---@field Timeline_1_RightDoorRotationZ_1F971676482C29AE25A69190EDBF52FA float
---@field Timeline_1_LeftDoorRotationZ_1F971676482C29AE25A69190EDBF52FA float
---@field Timeline_1__Direction_1F971676482C29AE25A69190EDBF52FA ETimelineDirection::Type
---@field Timeline_1 UTimelineComponent
---@field Timeline_0_RightDoorRotationZ_7EAAEDFB4103255A7B3FE4BEEA551D2E float
---@field Timeline_0_LeftDoorRotationZ_7EAAEDFB4103255A7B3FE4BEEA551D2E float
---@field Timeline_0__Direction_7EAAEDFB4103255A7B3FE4BEEA551D2E ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABP_ToiletDoor_C = {}

function ABP_ToiletDoor_C:Timeline_0__FinishedFunc() end
function ABP_ToiletDoor_C:Timeline_0__UpdateFunc() end
function ABP_ToiletDoor_C:Timeline_1__FinishedFunc() end
function ABP_ToiletDoor_C:Timeline_1__UpdateFunc() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_ToiletDoor_C:BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function ABP_ToiletDoor_C:ResetDoorRot() end
function ABP_ToiletDoor_C:OpenDoorR() end
function ABP_ToiletDoor_C:OnEndActionAnim_Event_0() end
---@param EntryPoint int32
function ABP_ToiletDoor_C:ExecuteUbergraph_BP_ToiletDoor(EntryPoint) end


