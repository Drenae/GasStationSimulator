---@meta

---@class AJunkyardManager_BP_C : AJunkyardManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local AJunkyardManager_BP_C = {}

function AJunkyardManager_BP_C:ReceiveBeginPlay() end
---@param CompletedContract UContractBase
---@param bSuccess boolean
function AJunkyardManager_BP_C:OnContractFinish(CompletedContract, bSuccess) end
---@param SaleSlot FSaleSlot
---@param bCarSold boolean
function AJunkyardManager_BP_C:CustomEvent(SaleSlot, bCarSold) end
---@param NewLevel int32
function AJunkyardManager_BP_C:OnNewFameLevel(NewLevel) end
---@param EntryPoint int32
function AJunkyardManager_BP_C:ExecuteUbergraph_JunkyardManager_BP(EntryPoint) end


