---@meta

---@class ADepartureScreenAPBase2_BP_C : ADepartureScreen
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
local ADepartureScreenAPBase2_BP_C = {}

---@param DeltaSeconds float
function ADepartureScreenAPBase2_BP_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ADepartureScreenAPBase2_BP_C:ExecuteUbergraph_DepartureScreenAPBase2_BP(EntryPoint) end


