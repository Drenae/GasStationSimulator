---@meta

---@class ACrashSiteParent_C : ACrashSite
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Cactus1 UHierarchicalInstancedStaticMeshComponent
---@field Grass2 UHierarchicalInstancedStaticMeshComponent
---@field Grass1 UHierarchicalInstancedStaticMeshComponent
---@field Rock1 UHierarchicalInstancedStaticMeshComponent
---@field bIsPlaneCrashSite boolean
---@field PlaneClass TSoftClassPtr<AAirplane_TapingMinigame>
local ACrashSiteParent_C = {}

ACrashSiteParent_C['Set Random Rotation Of Crash Site'] = function(self, ) end
function ACrashSiteParent_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACrashSiteParent_C:ExecuteUbergraph_CrashSiteParent(EntryPoint) end


