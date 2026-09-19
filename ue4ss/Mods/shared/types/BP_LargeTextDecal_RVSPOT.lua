---@meta

---@class ABP_LargeTextDecal_RVSPOT_C : ABP_LargeTextDecal_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight USpotLightComponent
---@field SM_Street_Light_3 UStaticMeshComponent
---@field SM_Rv_Spot_Sign UStaticMeshComponent
---@field CampSpot TSoftObjectPtr<ARVCampSpot>
---@field IsInitialised boolean
---@field InitTimer FTimerHandle
---@field DefaultTextSize float
---@field TextSizesPerLength TMap<int32, float>
---@field TextLocationAdjustments TMap<int32, float>
---@field DefaultSignRelativeLocation FVector
---@field DefaultLightRelativeLocation FVector
---@field OldMeshWorldLocation FVector
local ABP_LargeTextDecal_RVSPOT_C = {}

---@return FName
function ABP_LargeTextDecal_RVSPOT_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_LargeTextDecal_RVSPOT_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_LargeTextDecal_RVSPOT_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_LargeTextDecal_RVSPOT_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ABP_LargeTextDecal_RVSPOT_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ABP_LargeTextDecal_RVSPOT_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ABP_LargeTextDecal_RVSPOT_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_LargeTextDecal_RVSPOT_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ABP_LargeTextDecal_RVSPOT_C:UseItem(Pawn, Throw, AimingTime) end
function ABP_LargeTextDecal_RVSPOT_C:UserConstructionScript() end
---@param Pawn APawn
function ABP_LargeTextDecal_RVSPOT_C:DisableInteractionInfo(Pawn) end
function ABP_LargeTextDecal_RVSPOT_C:ShowInteractionAlertMessage() end
function ABP_LargeTextDecal_RVSPOT_C:ReceiveBeginPlay() end
---@param NewCustomName FString
function ABP_LargeTextDecal_RVSPOT_C:OnCustomNameUpdated(NewCustomName) end
---@param EndPlayReason EEndPlayReason::Type
function ABP_LargeTextDecal_RVSPOT_C:ReceiveEndPlay(EndPlayReason) end
function ABP_LargeTextDecal_RVSPOT_C:TryInitCustomName() end
---@param New_Custom_Name FString
---@param UpdatePosition boolean
function ABP_LargeTextDecal_RVSPOT_C:UpdateCustomName(New_Custom_Name, UpdatePosition) end
---@param Adjustment float
function ABP_LargeTextDecal_RVSPOT_C:UpdateTextLocation(Adjustment) end
---@param EntryPoint int32
function ABP_LargeTextDecal_RVSPOT_C:ExecuteUbergraph_BP_LargeTextDecal_RVSPOT(EntryPoint) end


