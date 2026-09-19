---@meta

---@class AWaterArea_C : APlayerArea
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field ReadyToPlaySound boolean
---@field ReadyToPlaySoundTimer FTimerHandle
local AWaterArea_C = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AWaterArea_C:BndEvt__WaterArea_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function AWaterArea_C:OnReadyToPlaySound() end
---@param EntryPoint int32
function AWaterArea_C:ExecuteUbergraph_WaterArea(EntryPoint) end


