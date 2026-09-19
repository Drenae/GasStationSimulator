---@meta

---@class ABP_Base_DebugCamera_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SceneCaptureComponent2D USceneCaptureComponent2D
---@field DefaultSceneRoot USceneComponent
local ABP_Base_DebugCamera_C = {}

function ABP_Base_DebugCamera_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ABP_Base_DebugCamera_C:ReceiveEndPlay(EndPlayReason) end
function ABP_Base_DebugCamera_C:OnDebugCamerasActivated() end
function ABP_Base_DebugCamera_C:OnDebugCamerasDeactivated() end
---@param EntryPoint int32
function ABP_Base_DebugCamera_C:ExecuteUbergraph_BP_Base_DebugCamera(EntryPoint) end


