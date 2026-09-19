---@meta

---@class UBP_TowyFrontWheel_C : UTowyWheel
---@field UberGraphFrame FPointerToUberGraphFrame
local UBP_TowyFrontWheel_C = {}

function UBP_TowyFrontWheel_C:ReceiveBeginPlay_1() end
---@param OtherActor AActor
function UBP_TowyFrontWheel_C:ReceiveActorBeginOverlap_1(OtherActor) end
---@param DeltaSeconds float
function UBP_TowyFrontWheel_C:ReceiveTick_1(DeltaSeconds) end
---@param EntryPoint int32
function UBP_TowyFrontWheel_C:ExecuteUbergraph_BP_TowyFrontWheel(EntryPoint) end


