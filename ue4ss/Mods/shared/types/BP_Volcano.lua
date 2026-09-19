---@meta

---@class ABP_Volcano_C : AVolcano
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RumblingSFX UAudioComponent
---@field NS_VolcanoSmoke UNiagaraComponent
---@field Volcano UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field EmmisiveGradient_NewTrack_0_71EF030B40845F73510ABFA592CFA6D0 float
---@field EmmisiveGradient__Direction_71EF030B40845F73510ABFA592CFA6D0 ETimelineDirection::Type
---@field EmmisiveGradient UTimelineComponent
---@field TrashRocksPoints TArray<FVector>
---@field DirtDecalsPoints TArray<FVector>
---@field RockSpawnDelay FTimeStruct
---@field IsRumblePlaying boolean
local ABP_Volcano_C = {}

---@param Delay float
function ABP_Volcano_C:StartEruption(Delay) end
---@param Value float
function ABP_Volcano_C:ToggleRumble(Value) end
function ABP_Volcano_C:EmmisiveGradient__FinishedFunc() end
function ABP_Volcano_C:EmmisiveGradient__UpdateFunc() end
function ABP_Volcano_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ABP_Volcano_C:ReceiveEndPlay(EndPlayReason) end
---@param AngerState EChunchumanchuAnger
---@param Value float
---@param ValueChanged float
function ABP_Volcano_C:AngerTrigger(AngerState, Value, ValueChanged) end
function ABP_Volcano_C:ReloadVolcano() end
---@param DeltaSeconds float
function ABP_Volcano_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_Volcano_C:ExecuteUbergraph_BP_Volcano(EntryPoint) end


