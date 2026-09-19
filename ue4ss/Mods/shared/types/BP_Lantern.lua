---@meta

---@class ABP_Lantern_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PointLight UPointLightComponent
---@field SM_Lantern UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field Timeline_0_Flicker_14E703CA4F9A085651972BA807DEE5DD float
---@field Timeline_0__Direction_14E703CA4F9A085651972BA807DEE5DD ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field LightIntensity float
local ABP_Lantern_C = {}

function ABP_Lantern_C:Timeline_0__FinishedFunc() end
function ABP_Lantern_C:Timeline_0__UpdateFunc() end
function ABP_Lantern_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_Lantern_C:ExecuteUbergraph_BP_Lantern(EntryPoint) end


