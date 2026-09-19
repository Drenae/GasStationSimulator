---@meta

---@class ATowyResetButton_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DiggerResetButton UStaticMeshComponent
---@field ButtonBase UStaticMeshComponent
local ATowyResetButton_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATowyResetButton_BP_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ATowyResetButton_BP_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATowyResetButton_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ATowyResetButton_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ATowyResetButton_BP_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ATowyResetButton_BP_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATowyResetButton_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ATowyResetButton_BP_C:UseItem(Pawn, Throw, AimingTime) end
function ATowyResetButton_BP_C:ShowInteractionAlertMessage() end
---@param Pawn APawn
function ATowyResetButton_BP_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function ATowyResetButton_BP_C:ExecuteUbergraph_TowyResetButton_BP(EntryPoint) end


