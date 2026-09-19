---@meta

---@class ABP_JunkyardMonitor_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Projector_Roll1 UStaticMeshComponent
---@field SM_Projector_Roll UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field BP_LGodRay_Projector UChildActorComponent
---@field SM_BeamConnector UStaticMeshComponent
---@field SM_Projector UStaticMeshComponent
---@field Monitor3DWidget UWidgetComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field PlatformRef ABP_JunkyardPlatform_C
---@field SelectedContract USpecialContract
local ABP_JunkyardMonitor_C = {}

---@return FName
function ABP_JunkyardMonitor_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardMonitor_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardMonitor_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_JunkyardMonitor_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ABP_JunkyardMonitor_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ABP_JunkyardMonitor_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ABP_JunkyardMonitor_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardMonitor_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ABP_JunkyardMonitor_C:UseItem(Pawn, Throw, AimingTime) end
---@param Contract USpecialContract
function ABP_JunkyardMonitor_C:SetSelectedContract(Contract) end
function ABP_JunkyardMonitor_C:ShowInteractionAlertMessage() end
---@param Pawn APawn
function ABP_JunkyardMonitor_C:DisableInteractionInfo(Pawn) end
---@param Wreck AActor
function ABP_JunkyardMonitor_C:OnWreckPlaced(Wreck) end
---@param Wreck AActor
function ABP_JunkyardMonitor_C:OnWreckRemoved(Wreck) end
function ABP_JunkyardMonitor_C:ReceiveDestroyed() end
---@param Platform ABP_JunkyardPlatform_C
function ABP_JunkyardMonitor_C:SetupMonitor(Platform) end
---@param DeltaSeconds float
function ABP_JunkyardMonitor_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_JunkyardMonitor_C:ExecuteUbergraph_BP_JunkyardMonitor(EntryPoint) end


