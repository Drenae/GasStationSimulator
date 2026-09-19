---@meta

---@class ACustomer_ma_Uncle_VIP_C : AAIHumanBase_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NPCInfo UWidgetComponent
---@field SM_Uncle_Glasses UStaticMeshComponent
---@field SM_Uncle_hat UStaticMeshComponent
---@field UfoDestroy boolean
local ACustomer_ma_Uncle_VIP_C = {}

function ACustomer_ma_Uncle_VIP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACustomer_ma_Uncle_VIP_C:ReceiveTick(DeltaSeconds) end
---@param EndPlayReason EEndPlayReason::Type
function ACustomer_ma_Uncle_VIP_C:ReceiveEndPlay(EndPlayReason) end
---@param ObjectiveStarted UObjectiveBase
function ACustomer_ma_Uncle_VIP_C:CheckForUncleCallStart(ObjectiveStarted) end
---@param ObjectiveFinished UObjectiveBase
function ACustomer_ma_Uncle_VIP_C:CheckForUncleCallEnd(ObjectiveFinished) end
function ACustomer_ma_Uncle_VIP_C:UFO() end
---@param Reason FName
function ACustomer_ma_Uncle_VIP_C:GoToHome(Reason) end
---@param EntryPoint int32
function ACustomer_ma_Uncle_VIP_C:ExecuteUbergraph_Customer_ma_Uncle_VIP(EntryPoint) end


