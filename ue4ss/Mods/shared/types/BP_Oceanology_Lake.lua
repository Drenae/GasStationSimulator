---@meta

---@class ABP_Oceanology_Lake_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Caustics UDecalComponent
---@field Underwater UBoxComponent
---@field Lake UStaticMeshComponent
---@field ['Underwater Post'] UPostProcessComponent
---@field DefaultSceneRoot USceneComponent
---@field Height FVector
---@field ['Primitives List'] TArray<UPrimitiveComponent>
---@field ['Activate Buoyancy'] boolean
---@field ['Water Density'] float
---@field Gravity float
---@field ['Normal Angular Damping'] float
---@field ['Normal Linear Damping'] float
---@field ['Water Angular Damping'] float
---@field ['Water Linear Damping'] float
---@field ['Water Material'] UMaterialInterface
---@field ['Underwater Post-Process Material'] UMaterialInstance
---@field ['Post-Process DYN'] UMaterialInstanceDynamic
---@field ['Decal DY'] UMaterialInstanceDynamic
local ABP_Oceanology_Lake_C = {}

function ABP_Oceanology_Lake_C:UserConstructionScript() end
ABP_Oceanology_Lake_C['EnteredWater?'] = function(self, ) end
ABP_Oceanology_Lake_C['ExitedWater?'] = function(self, ) end
---@param DeltaSeconds float
function ABP_Oceanology_Lake_C:ReceiveTick(DeltaSeconds) end
function ABP_Oceanology_Lake_C:ReceiveBeginPlay() end
---@param OtherActor AActor
function ABP_Oceanology_Lake_C:ReceiveActorBeginOverlap(OtherActor) end
---@param OtherActor AActor
function ABP_Oceanology_Lake_C:ReceiveActorEndOverlap(OtherActor) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_Oceanology_Lake_C:BndEvt__BP_Oceanology_Lake_Lake_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_Oceanology_Lake_C:BndEvt__BP_Oceanology_Lake_Lake_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param EntryPoint int32
function ABP_Oceanology_Lake_C:ExecuteUbergraph_BP_Oceanology_Lake(EntryPoint) end


