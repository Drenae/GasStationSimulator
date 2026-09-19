---@meta

---@class ACarWashFlex_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NS_CarWash UNiagaraComponent
---@field DefaultSceneRoot USceneComponent
---@field BeamSpreadMax float
---@field params TArray<FParticleSysParam>
---@field BeamSpreadMin float
---@field Spread boolean
---@field DropSpreadMax float
---@field DropSpreadMin float
---@field SteamSpreadMax float
---@field SteamSpreadMin float
---@field LogicSpreadMax float
---@field LogicSpreadMin float
---@field LogicDensity float
---@field BeamSize float
---@field DropsSize float
---@field CloudSize float
---@field CleaningSolution boolean
local ACarWashFlex_C = {}

---@param NewSpread boolean
ACarWashFlex_C['Spread setup'] = function(self, NewSpread) end
---@param CleaningSolutionStatus boolean
function ACarWashFlex_C:CleaningSolution_Setup(CleaningSolutionStatus) end
---@param EntryPoint int32
function ACarWashFlex_C:ExecuteUbergraph_CarWashFlex(EntryPoint) end


