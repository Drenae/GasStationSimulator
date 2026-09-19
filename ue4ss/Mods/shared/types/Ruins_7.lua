---@meta

---@class ARuins_7_C : ARuins_Base_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_E2ED257B4E5385531313D1B6A6A3FD7A float
---@field Timeline_0__Direction_E2ED257B4E5385531313D1B6A6A3FD7A ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field StartScale FVector
---@field StartStage int32
---@field CurrentScale FVector
local ARuins_7_C = {}

function ARuins_7_C:Timeline_0__FinishedFunc() end
function ARuins_7_C:Timeline_0__UpdateFunc() end
function ARuins_7_C:ReceiveBeginPlay() end
---@param CurrentStage int32
function ARuins_7_C:UpdateRuins(CurrentStage) end
---@param EntryPoint int32
function ARuins_7_C:ExecuteUbergraph_Ruins_7(EntryPoint) end


