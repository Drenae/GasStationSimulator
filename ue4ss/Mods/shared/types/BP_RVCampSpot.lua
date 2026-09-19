---@meta

---@class ABP_RVCampSpot_C : ARVCampSpot
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DebugServicesBoardLocation UArrowComponent
---@field DebugBoardLocation UArrowComponent
---@field DebugBox UBoxComponent
---@field DebugBoardsSpawned boolean
---@field DebugBoardActor AActor
---@field DebugServicesBoardActor AActor
local ABP_RVCampSpot_C = {}

---@param Loaded UClass
function ABP_RVCampSpot_C:OnLoaded_623C34724532AB70D2699983A8F8D2C2(Loaded) end
---@param Loaded UClass
function ABP_RVCampSpot_C:OnLoaded_AFF5297045CF54DFD19A30B90E371D61(Loaded) end
---@param IsVisible boolean
function ABP_RVCampSpot_C:SetDebugBoardVisibility(IsVisible) end
---@param EntryPoint int32
function ABP_RVCampSpot_C:ExecuteUbergraph_BP_RVCampSpot(EntryPoint) end


