---@meta

---@class UEvent_NewEmployee_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CurrentEmployee TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_1 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_2 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_3 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_4 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_5 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_6 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_7 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_8 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field Employees_Stage_0_9 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_1 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_2 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_3 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_4 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_5 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_6 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_7 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_8 TArray<TSoftClassPtr<AEmployee_Base_C>>
---@field NBM_Employees_Stage_0_9 TArray<TSoftClassPtr<AEmployee_Base_C>>
local UEvent_NewEmployee_C = {}

function UEvent_NewEmployee_C:RandomEmployees() end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_NewEmployee_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime int32
function UEvent_NewEmployee_C:CustomEvent_0(UpdatedTime) end
---@param ActorLevel int32
function UEvent_NewEmployee_C:OnActorLevelChange_Event_0(ActorLevel) end
---@param EntryPoint int32
function UEvent_NewEmployee_C:ExecuteUbergraph_Event_NewEmployee(EntryPoint) end


