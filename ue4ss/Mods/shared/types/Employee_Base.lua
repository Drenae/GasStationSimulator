---@meta

---@class AEmployee_Base_C : AAIHumanBase_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field InteractionCapsule UCapsuleComponent
---@field Employee_Headest_SM UStaticMeshComponent
---@field Employee_beret_SM UStaticMeshComponent
---@field NPCInfo UWidgetComponent
---@field OnEmployeeTask FEmployee_Base_COnEmployeeTask
---@field bIsTalking boolean
---@field ShowWidgetsTimer FTimerHandle
local AEmployee_Base_C = {}

---@return FName
function AEmployee_Base_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AEmployee_Base_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param NewTask TSubclassOf<UTaskBase>
function AEmployee_Base_C:AssignNewTask(NewTask) end
---@return boolean
function AEmployee_Base_C:IsEmployeeClass_Helper() end
AEmployee_Base_C['Hide Own Money Widget Old'] = function(self, ) end
AEmployee_Base_C['Show Own Money Widget Old'] = function(self, ) end
AEmployee_Base_C['Hide at Work Widget Old'] = function(self, ) end
---@param minigames EWorkerWorkType
AEmployee_Base_C['Show at Work Widget OLD'] = function(self, minigames) end
---@param NewItem_TaskBase TSubclassOf<UTaskBase>
function AEmployee_Base_C:AddNewTask(NewItem_TaskBase) end
function AEmployee_Base_C:UserConstructionScript() end
function AEmployee_Base_C:ReceiveBeginPlay() end
function AEmployee_Base_C:StartTalking() end
---@param NewTask TSubclassOf<UTaskBase>
function AEmployee_Base_C:StopTalking(NewTask) end
---@param FinishedTask UTaskBase
---@param TaskResult ETaskResult
---@param Reason FString
function AEmployee_Base_C:OnBeginFinishTaskCharacter_Event_0(FinishedTask, TaskResult, Reason) end
---@param WorkType EWorkerWorkType
function AEmployee_Base_C:ShowAtWorkWidget(WorkType) end
function AEmployee_Base_C:ShowOwnMoneyWidget() end
function AEmployee_Base_C:HideAtWorkWidget() end
function AEmployee_Base_C:HideOwnMoneyWidget() end
---@param bShow boolean
function AEmployee_Base_C:HideShowBlockedIcon(bShow) end
---@param InformationID int32
function AEmployee_Base_C:OnErrorMessageDisplayed(InformationID) end
function AEmployee_Base_C:ShowNPCInfoWidget() end
---@param StartedTask TSoftClassPtr<UTaskBase>
function AEmployee_Base_C:OnTaskStarted(StartedTask) end
---@param EntryPoint int32
function AEmployee_Base_C:ExecuteUbergraph_Employee_Base(EntryPoint) end
---@param Task TSubclassOf<UTaskBase>
function AEmployee_Base_C:OnEmployeeTask__DelegateSignature(Task) end


