---@meta

---@class UEvent_Elvis_C : UEventElvis
---@field UberGraphFrame FPointerToUberGraphFrame
local UEvent_Elvis_C = {}

function UEvent_Elvis_C:SpawnElvis() end
---@param Loaded UClass
function UEvent_Elvis_C:OnLoaded_7A50DDB249B3EDFC8201FB9809D169B2(Loaded) end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_Elvis_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_Elvis_C:OnGameTimeUpdated(UpdatedTime) end
---@param EntryPoint int32
function UEvent_Elvis_C:ExecuteUbergraph_Event_Elvis(EntryPoint) end


