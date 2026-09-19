---@meta

---@class ABP_PlatformLight_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight USpotLightComponent
---@field SM_FloodLightB_Light UStaticMeshComponent
---@field Cube UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field LightColor TArray<FColor>
---@field LightIndex int32
---@field IsHightlighted boolean
local ABP_PlatformLight_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_PlatformLight_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_PlatformLight_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_PlatformLight_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ABP_PlatformLight_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ABP_PlatformLight_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ABP_PlatformLight_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_PlatformLight_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ABP_PlatformLight_C:UseItem(Pawn, Throw, AimingTime) end
---@return FName
function ABP_PlatformLight_C:GetInteractionName() end
function ABP_PlatformLight_C:ShowInteractionAlertMessage() end
function ABP_PlatformLight_C:ReceiveBeginPlay() end
---@param Pawn APawn
function ABP_PlatformLight_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function ABP_PlatformLight_C:ExecuteUbergraph_BP_PlatformLight(EntryPoint) end


