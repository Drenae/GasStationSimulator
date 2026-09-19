---@meta

---@class UEvent_SharkAttack_BP_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field bWaitToSpawnShark boolean
---@field SharkSpawner TSoftObjectPtr<ASharkSpawner_BP_C>
---@field bIgnoreCustomers boolean
---@field SharkNotification USharkNotification_C
---@field SharkNotificationClass TSubclassOf<USharkNotification_C>
---@field bSiren boolean
---@field AudioComponent UAudioComponent
---@field InitializedTime FGSSEventTime
local UEvent_SharkAttack_BP_C = {}

---@param IsTimeOver boolean
function UEvent_SharkAttack_BP_C:UpdateTime(IsTimeOver) end
function UEvent_SharkAttack_BP_C:Finished_7800F52F497066A3DD1174B8CD6A7B0E() end
function UEvent_SharkAttack_BP_C:Finished_DDF55E844516C3F0CB1F0A986C6E0516() end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_SharkAttack_BP_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_SharkAttack_BP_C:OnGameTimeUpdated(UpdatedTime) end
function UEvent_SharkAttack_BP_C:SpawnShark() end
function UEvent_SharkAttack_BP_C:OnAudioFinished() end
function UEvent_SharkAttack_BP_C:OnTimeEnd() end
---@param EntryPoint int32
function UEvent_SharkAttack_BP_C:ExecuteUbergraph_Event_SharkAttack_BP(EntryPoint) end


