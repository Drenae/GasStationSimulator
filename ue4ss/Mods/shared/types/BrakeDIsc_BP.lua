---@meta

---@class ABrakeDisc_BP_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TireOn UAudioComponent
---@field CurrentWheel AWheel_BP_C
local ABrakeDisc_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABrakeDisc_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Enable boolean
function ABrakeDisc_BP_C:EnableBrakeDiscCollision(Enable) end
---@param DeltaSeconds float
function ABrakeDisc_BP_C:ReceiveTick(DeltaSeconds) end
function ABrakeDisc_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABrakeDisc_BP_C:ExecuteUbergraph_BrakeDisc_BP(EntryPoint) end


