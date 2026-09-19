---@meta

---@class ABP_BrokenPlanePartParent_C : ABrokenPlanePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WidgetIndexToRemove int32
local ABP_BrokenPlanePartParent_C = {}

---@param bNewVisiblilty boolean
function ABP_BrokenPlanePartParent_C:SetHoleVisibility(bNewVisiblilty) end
function ABP_BrokenPlanePartParent_C:ReceiveBeginPlay() end
---@param HoleMesh UStaticMeshComponent
function ABP_BrokenPlanePartParent_C:OnHoleFixed_Event(HoleMesh) end
---@param EntryPoint int32
function ABP_BrokenPlanePartParent_C:ExecuteUbergraph_BP_BrokenPlanePartParent(EntryPoint) end


