---@meta

---@class AOceanologySwimVolume : APhysicsVolume
local AOceanologySwimVolume = {}


---@class AQuadTree : AActor
---@field DefaultSceneRoot USceneComponent
---@field EditorTickIsEnabled boolean
local AQuadTree = {}

---@param bEnabled boolean
function AQuadTree:SetEditorTickEnabled(bEnabled) end
---@param HISMC UHierarchicalInstancedStaticMeshComponent
---@param GridSize float
---@param GridTiles int32
---@param CellSize float
function AQuadTree:Procedural(HISMC, GridSize, GridTiles, CellSize) end
---@param DeltaSeconds float
function AQuadTree:EditorTick(DeltaSeconds) end


---@class UInfinite_Compound : USceneComponent
---@field RealTime boolean
---@field TimeJump float
---@field InfinityCategory EInfinityCategory
local UInfinite_Compound = {}



---@class UOceanology_PluginBPLibrary : UBlueprintFunctionLibrary
local UOceanology_PluginBPLibrary = {}

---@param Param float
---@return float
function UOceanology_PluginBPLibrary:Oceanology_PluginSampleFunction(Param) end


