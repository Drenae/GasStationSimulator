---@meta

---@class ABP_CraneShredder_C : ACraneShredder
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EXPGainPopup UWidgetComponent
---@field InsidePlayerBlocker UBoxComponent
---@field IsLidOverlappingWreck boolean
---@field OverlappedWreck AJunkyardCarWreck
---@field SeanSpawnTasks TArray<FNPAITaskStruct>
---@field StartingExpPopupLocation FVector
---@field ExpPopupRiseSpeed float
---@field IsExpPopupActive boolean
---@field ExpPopupTimer FTimerHandle
local ABP_CraneShredder_C = {}

---@param DeltaSeconds float
function ABP_CraneShredder_C:ReceiveTick(DeltaSeconds) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_CraneShredder_C:BndEvt__BP_CraneShredder_OpenLidOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_CraneShredder_C:BndEvt__BP_CraneShredder_OpenLidOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function ABP_CraneShredder_C:DEBUG_SpawnSean() end
function ABP_CraneShredder_C:DEBUG_UnlockCrusher() end
---@param ExperienceGained int32
function ABP_CraneShredder_C:CreateExperiencePopup(ExperienceGained) end
function ABP_CraneShredder_C:ReceiveBeginPlay() end
function ABP_CraneShredder_C:DeactivatePopup() end
---@param EntryPoint int32
function ABP_CraneShredder_C:ExecuteUbergraph_BP_CraneShredder(EntryPoint) end


