---@meta

---@class ABP_JunkyardPlatformPanel_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field CameraActor UChildActorComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field bPanelActive boolean
---@field OriginalWreckRef AJunkyardCarWreck
---@field DuplicateCarData FSavedCarWreck
---@field bPanelLoading boolean
local ABP_JunkyardPlatformPanel_C = {}

---@return FName
function ABP_JunkyardPlatformPanel_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardPlatformPanel_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardPlatformPanel_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_JunkyardPlatformPanel_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ABP_JunkyardPlatformPanel_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ABP_JunkyardPlatformPanel_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ABP_JunkyardPlatformPanel_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JunkyardPlatformPanel_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ABP_JunkyardPlatformPanel_C:UseItem(Pawn, Throw, AimingTime) end
---@param TargetWreck AActor
function ABP_JunkyardPlatformPanel_C:DeleteCarWreck(TargetWreck) end
---@param SpawnedCar AJunkyardCarWreck
function ABP_JunkyardPlatformPanel_C:OnDuplicateCarSpawned(SpawnedCar) end
---@param bCancelChanges boolean
function ABP_JunkyardPlatformPanel_C:ClosePanel(bCancelChanges) end
---@param Pawn APawn
function ABP_JunkyardPlatformPanel_C:DisableInteractionInfo(Pawn) end
function ABP_JunkyardPlatformPanel_C:ReceiveBeginPlay() end
function ABP_JunkyardPlatformPanel_C:OnCustomizationButtonClicked() end
function ABP_JunkyardPlatformPanel_C:ShowInteractionAlertMessage() end
---@param DeltaSeconds float
function ABP_JunkyardPlatformPanel_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_JunkyardPlatformPanel_C:ExecuteUbergraph_BP_JunkyardPlatformPanel(EntryPoint) end


