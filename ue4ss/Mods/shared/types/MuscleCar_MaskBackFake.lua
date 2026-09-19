---@meta

---@class AMuscleCar_MaskBackFake_C : A00_MaskBack_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AMuscleCar_MaskBackFake_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AMuscleCar_MaskBackFake_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AMuscleCar_MaskBackFake_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@return FName
function AMuscleCar_MaskBackFake_C:GetInteractionName() end
function AMuscleCar_MaskBackFake_C:ReceiveBeginPlay() end
---@param Pawn APawn
function AMuscleCar_MaskBackFake_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function AMuscleCar_MaskBackFake_C:ExecuteUbergraph_MuscleCar_MaskBackFake(EntryPoint) end


