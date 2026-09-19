---@meta

---@class ABP_LandmarkScreen_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
local ABP_LandmarkScreen_C = {}

---@param DeltaSeconds float
function ABP_LandmarkScreen_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_LandmarkScreen_C:ExecuteUbergraph_BP_LandmarkScreen(EntryPoint) end


