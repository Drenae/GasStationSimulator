---@meta

---@class ADarkPortal_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SignArrow UStaticMeshComponent
---@field PlayerSpawnArrow UArrowComponent
---@field SignTop UStaticMeshComponent
---@field Pole UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field TargetLevelName FString
---@field FadeSoundtrack USoundMix
local ADarkPortal_BP_C = {}

---@return FName
function ADarkPortal_BP_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADarkPortal_BP_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADarkPortal_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ADarkPortal_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ADarkPortal_BP_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ADarkPortal_BP_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ADarkPortal_BP_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADarkPortal_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ADarkPortal_BP_C:UseItem(Pawn, Throw, AimingTime) end
function ADarkPortal_BP_C:ContinueJourney() end
---@param LevelName FString
---@param GameMap FString
function ADarkPortal_BP_C:LoadGameFromOtherMap(LevelName, GameMap) end
function ADarkPortal_BP_C:StartNewJourney() end
function ADarkPortal_BP_C:ShowInteractionAlertMessage() end
function ADarkPortal_BP_C:ReceiveBeginPlay() end
function ADarkPortal_BP_C:OnPlayerLoaded() end
---@param Pawn APawn
function ADarkPortal_BP_C:DisableInteractionInfo(Pawn) end
function ADarkPortal_BP_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ADarkPortal_BP_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ADarkPortal_BP_C:ExecuteUbergraph_DarkPortal_BP(EntryPoint) end


