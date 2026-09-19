---@meta

---@class AMask_Fix_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CurrentWheel AWheel_BP_C
local AMask_Fix_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AMask_Fix_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function AMask_Fix_C:ReceiveBeginPlay() end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AMask_Fix_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param EntryPoint int32
function AMask_Fix_C:ExecuteUbergraph_Mask_Fix(EntryPoint) end


