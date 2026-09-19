---@meta

---@class UBTS_SearchTransport_C : UBTService_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TansportMode FBlackboardKeySelector
---@field HumanState FBlackboardKeySelector
---@field EHumanState uint8
---@field AICharacterBase AAICharacterBase
local UBTS_SearchTransport_C = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTS_SearchTransport_C:ReceiveSearchStartAI(OwnerController, ControlledPawn) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds float
function UBTS_SearchTransport_C:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end
---@param EntryPoint int32
function UBTS_SearchTransport_C:ExecuteUbergraph_BTS_SearchTransport(EntryPoint) end


