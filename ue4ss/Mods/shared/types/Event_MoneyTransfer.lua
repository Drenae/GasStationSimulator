---@meta

---@class UEvent_MoneyTransfer_C : UMoneyTransferEvent
---@field UberGraphFrame FPointerToUberGraphFrame
local UEvent_MoneyTransfer_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_MoneyTransfer_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_MoneyTransfer_C:CustomEvent_0(UpdatedTime) end
function UEvent_MoneyTransfer_C:FinishEvent() end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_MoneyTransfer_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_MoneyTransfer_C:ExecuteUbergraph_Event_MoneyTransfer(EntryPoint) end


