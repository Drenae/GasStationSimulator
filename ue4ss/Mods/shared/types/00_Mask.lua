---@meta

---@class A00_Mask_C : AVehiclePart
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Garage UAudioComponent
---@field Camera UArrowComponent
---@field StartDelay float
---@field DecalDirty TArray<AMask_Decal_C>
local A00_Mask_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function A00_Mask_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function A00_Mask_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Enabled boolean
function A00_Mask_C:InteractMode(Enabled) end
---@param EntryPoint int32
function A00_Mask_C:ExecuteUbergraph_00_Mask(EntryPoint) end


