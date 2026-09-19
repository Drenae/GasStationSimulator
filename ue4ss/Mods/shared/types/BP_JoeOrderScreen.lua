---@meta

---@class ABP_JoeOrderScreen_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
local ABP_JoeOrderScreen_C = {}

---@param DeltaSeconds float
function ABP_JoeOrderScreen_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_JoeOrderScreen_C:ExecuteUbergraph_BP_JoeOrderScreen(EntryPoint) end


