---@meta

---@class ABP_BBQTongs_C : AItem
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Tongs UStaticMeshComponent
---@field Scene USceneComponent
---@field Timeline_0_NewTrack_0_DD610E5D473EDFCC54BF5F9307102E09 float
---@field Timeline_0__Direction_DD610E5D473EDFCC54BF5F9307102E09 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field ['BBQ Minigame In World'] ABP_MinigameInWorld_BBQ_C
---@field Closed boolean
local ABP_BBQTongs_C = {}

function ABP_BBQTongs_C:Timeline_0__FinishedFunc() end
function ABP_BBQTongs_C:Timeline_0__UpdateFunc() end
function ABP_BBQTongs_C:ReceiveBeginPlay() end
---@param minigame ARvMinigameInWorld
---@param bSuccess boolean
ABP_BBQTongs_C['On Minigame End'] = function(self, minigame, bSuccess) end
---@param DeltaSeconds float
function ABP_BBQTongs_C:ReceiveTick(DeltaSeconds) end
---@param Target_Location FVector
ABP_BBQTongs_C['Set Target Location'] = function(self, Target_Location) end
---@param bClosed boolean
ABP_BBQTongs_C['Set Tongs Closed'] = function(self, bClosed) end
---@param EntryPoint int32
function ABP_BBQTongs_C:ExecuteUbergraph_BP_BBQTongs(EntryPoint) end


