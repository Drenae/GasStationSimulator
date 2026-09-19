---@meta

---@class ABP_ScreenshotManager_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field CurrentPostProcess FPostProcessSettings
---@field CurrentFOV float
---@field RenderTargetTexture UTextureRenderTarget2D
---@field CurrentTimeDilation float
---@field PhotoModeWidgetRef UUI_PhotoMode_C
local ABP_ScreenshotManager_C = {}

function ABP_ScreenshotManager_C:UserConstructionScript() end
---@param DeltaSeconds float
function ABP_ScreenshotManager_C:ReceiveTick(DeltaSeconds) end
---@param Size FIntPoint
---@param Path FString
---@param Filename FString
function ABP_ScreenshotManager_C:TakeScreenshot(Size, Path, Filename) end
---@param EntryPoint int32
function ABP_ScreenshotManager_C:ExecuteUbergraph_BP_ScreenshotManager(EntryPoint) end


