---@meta

---@class ADecorationCamera_BP_C : ADecorationCamera
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field DefaultSceneRoot USceneComponent
---@field FoundMap FName
---@field DependingMapLevelIndex int32
---@field LevelsToLoad TArray<FName>
local ADecorationCamera_BP_C = {}

function ADecorationCamera_BP_C:ReceiveBeginPlay() end
function ADecorationCamera_BP_C:ActivateCamera() end
function ADecorationCamera_BP_C:DeActivateCamera() end
---@param DeltaSeconds float
function ADecorationCamera_BP_C:ReceiveTick(DeltaSeconds) end
---@param LoadedLevelName FName
function ADecorationCamera_BP_C:LoadDependingMaps(LoadedLevelName) end
---@param LevelName FName
---@param UUID int32
function ADecorationCamera_BP_C:LoadDecorationLevel(LevelName, UUID) end
---@param EntryPoint int32
function ADecorationCamera_BP_C:ExecuteUbergraph_DecorationCamera_BP(EntryPoint) end


