---@meta

---@class AAlligator_Spline_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field Box UBoxComponent
---@field Aligator USkeletalMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field PlaneMover_Alpha_324E939F4EF1EC416AAC8DA51BDC8564 float
---@field PlaneMover__Direction_324E939F4EF1EC416AAC8DA51BDC8564 ETimelineDirection::Type
---@field PlaneMover UTimelineComponent
---@field ActivePlane boolean
---@field alpha float
---@field TrackRef APlane_Track_BP_C
---@field Duration float
---@field PlaneStartOffset float
local AAlligator_Spline_BP_C = {}

function AAlligator_Spline_BP_C:PlaneMover__FinishedFunc() end
function AAlligator_Spline_BP_C:PlaneMover__UpdateFunc() end
function AAlligator_Spline_BP_C:ReceiveBeginPlay() end
function AAlligator_Spline_BP_C:MoverPlane() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AAlligator_Spline_BP_C:BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function AAlligator_Spline_BP_C:CustomEvent_0() end
function AAlligator_Spline_BP_C:Hide() end
---@param EntryPoint int32
function AAlligator_Spline_BP_C:ExecuteUbergraph_Alligator_Spline_BP(EntryPoint) end


