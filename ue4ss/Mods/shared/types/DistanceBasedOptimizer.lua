---@meta

---@class ASignificanceActorBase : AActor
---@field bDistanceOptimizationEnabled boolean
---@field SignificanceCalculationsTag FName
---@field bDisableTickWhenNotRendered boolean
---@field MaxTickDisableSignificanceLevel int32
---@field bOverrideDefaultSignificanceLevels boolean
---@field SignificanceLevelsDefinitions TArray<FSignificanceLevel>
local ASignificanceActorBase = {}



---@class ASignificanceCharacterBase : ACharacter
---@field bDistanceOptimizationEnabled boolean
---@field SignificanceCalculationsTag FName
---@field bDisableTickWhenNotRendered boolean
---@field MaxTickDisableSignificanceLevel int32
---@field bOverrideDefaultSignificanceLevels boolean
---@field bOverridePriorityWhenNotRendered boolean
---@field NotRenderedOverridePriorityLevel int32
---@field SignificanceLevelsDefinitions TArray<FSignificanceLevel>
local ASignificanceCharacterBase = {}



---@class ASignificanceStaticMeshActorBase : AStaticMeshActor
---@field bDistanceOptimizationEnabled boolean
---@field SignificanceCalculationsTag FName
---@field bDisableTickWhenNotRendered boolean
---@field MaxTickDisableSignificanceLevel int32
---@field bOverridePriorityWhenNotRendered boolean
---@field NotRenderedOverridePriorityLevel int32
---@field bOverrideDefaultSignificanceLevels boolean
---@field SignificanceLevelsDefinitions TArray<FSignificanceLevel>
local ASignificanceStaticMeshActorBase = {}



---@class FSignificanceLevel
---@field SignificanceLevel int32
---@field FromDistance float
---@field ToDistance float
---@field TickInterval float
local FSignificanceLevel = {}



---@class UDistanceOptimizerSettings : UDeveloperSettings
---@field SignificanceLevelsDefinitions TArray<FSignificanceLevel>
local UDistanceOptimizerSettings = {}



---@class USignificanceGameViewportClient : UGameViewportClient
local USignificanceGameViewportClient = {}


