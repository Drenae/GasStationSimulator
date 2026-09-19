---@meta

---@class AFuelEnter_00_C : AFuelEnter
---@field UberGraphFrame FPointerToUberGraphFrame
local AFuelEnter_00_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AFuelEnter_00_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AFuelEnter_00_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AFuelEnter_00_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
function AFuelEnter_00_C:ReceiveBeginPlay() end
---@param Condition boolean
function AFuelEnter_00_C:OpenFuelEnter(Condition) end
---@param On boolean
function AFuelEnter_00_C:ShowFuelEnter(On) end
---@param Pawn APawn
function AFuelEnter_00_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function AFuelEnter_00_C:ExecuteUbergraph_FuelEnter_00(EntryPoint) end


