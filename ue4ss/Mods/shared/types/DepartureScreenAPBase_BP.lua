---@meta

---@class ADepartureScreenAPBase_BP_C : ADepartureScreen
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field Widget UWidgetComponent
---@field DefaultSceneRoot USceneComponent
local ADepartureScreenAPBase_BP_C = {}

---@param DeltaSeconds float
function ADepartureScreenAPBase_BP_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ADepartureScreenAPBase_BP_C:ExecuteUbergraph_DepartureScreenAPBase_BP(EntryPoint) end


