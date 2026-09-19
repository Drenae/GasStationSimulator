---@meta

---@class ABP_ToiletDoorBase_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PlayerCollisionBox UBoxComponent
---@field Box UBoxComponent
---@field DefaultSceneRoot USceneComponent
---@field WasDoorOpened boolean
local ABP_ToiletDoorBase_C = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_ToiletDoorBase_C:BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function ABP_ToiletDoorBase_C:OpenDoorR() end
---@param EntryPoint int32
function ABP_ToiletDoorBase_C:ExecuteUbergraph_BP_ToiletDoorBase(EntryPoint) end


