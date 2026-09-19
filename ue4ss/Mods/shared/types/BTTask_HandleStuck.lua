---@meta

---@class UBTTask_HandleStuck_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AICharacter AAICharacterBase
---@field MontagesSkeletons TArray<FBaseCharacterSkeletonMontage>
local UBTTask_HandleStuck_C = {}

---@param ID int32
function UBTTask_HandleStuck_C:GetCurrentTaskDialogueId(ID) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTTask_HandleStuck_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param EntryPoint int32
function UBTTask_HandleStuck_C:ExecuteUbergraph_BTTask_HandleStuck(EntryPoint) end


