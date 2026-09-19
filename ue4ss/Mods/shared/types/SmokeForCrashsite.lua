---@meta

---@class ASmokeForCrashsite_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NS_SmokeCrashsite UNiagaraComponent
---@field Sphere USphereComponent
---@field DefaultSceneRoot USceneComponent
---@field Radius float
local ASmokeForCrashsite_C = {}

---@param OverlappedPawn APawn
---@param CanOverlap boolean
function ASmokeForCrashsite_C:CanReactToOverlap(OverlappedPawn, CanOverlap) end
function ASmokeForCrashsite_C:UserConstructionScript() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ASmokeForCrashsite_C:BndEvt__SmokeForCrashsite_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ASmokeForCrashsite_C:BndEvt__SmokeForCrashsite_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param EntryPoint int32
function ASmokeForCrashsite_C:ExecuteUbergraph_SmokeForCrashsite(EntryPoint) end


