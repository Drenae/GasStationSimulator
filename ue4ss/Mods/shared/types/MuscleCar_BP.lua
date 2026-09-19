---@meta

---@class AMuscleCar_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field cccc UStaticMeshComponent
local AMuscleCar_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AMuscleCar_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AMuscleCar_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AMuscleCar_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMuscleCar_BP_C:ExecuteUbergraph_MuscleCar_BP(EntryPoint) end


