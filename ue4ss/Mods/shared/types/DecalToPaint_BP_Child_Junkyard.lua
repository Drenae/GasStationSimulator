---@meta

---@class ADecalToPaint_BP_Child_Junkyard_C : ADecalToPaint_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Plane UStaticMeshComponent
---@field DitherTimeline_NewTrack_0_1B54E8CC472E3FAA93F0379083151218 float
---@field DitherTimeline__Direction_1B54E8CC472E3FAA93F0379083151218 ETimelineDirection::Type
---@field DitherTimeline UTimelineComponent
---@field PlaneInstancedMaterial UMaterialInstanceDynamic
local ADecalToPaint_BP_Child_Junkyard_C = {}

function ADecalToPaint_BP_Child_Junkyard_C:DitherTimeline__FinishedFunc() end
function ADecalToPaint_BP_Child_Junkyard_C:DitherTimeline__UpdateFunc() end
function ADecalToPaint_BP_Child_Junkyard_C:ReceiveBeginPlay() end
function ADecalToPaint_BP_Child_Junkyard_C:HidePlane() end
function ADecalToPaint_BP_Child_Junkyard_C:ShowPlane() end
---@param EntryPoint int32
function ADecalToPaint_BP_Child_Junkyard_C:ExecuteUbergraph_DecalToPaint_BP_Child_Junkyard(EntryPoint) end


