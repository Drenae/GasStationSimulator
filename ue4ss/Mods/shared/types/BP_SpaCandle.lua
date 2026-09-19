---@meta

---@class ABP_SpaCandle_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FireEffect UNiagaraComponent
---@field Cube UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field OnCandleLit FBP_SpaCandle_COnCandleLit
---@field SpaSettings USpaSettings
---@field bCandleLit boolean
local ABP_SpaCandle_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_SpaCandle_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_SpaCandle_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_SpaCandle_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ABP_SpaCandle_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ABP_SpaCandle_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ABP_SpaCandle_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_SpaCandle_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ABP_SpaCandle_C:UseItem(Pawn, Throw, AimingTime) end
---@return FName
function ABP_SpaCandle_C:GetInteractionName() end
function ABP_SpaCandle_C:ShowInteractionAlertMessage() end
---@param Pawn APawn
function ABP_SpaCandle_C:DisableInteractionInfo(Pawn) end
function ABP_SpaCandle_C:ReceiveBeginPlay() end
---@param ServiceTag FGameplayTag
---@param ServiceBuilding ARvGuestServiceSpot
---@param bSuccess boolean
function ABP_SpaCandle_C:OnSpaFinished(ServiceTag, ServiceBuilding, bSuccess) end
---@param EntryPoint int32
function ABP_SpaCandle_C:ExecuteUbergraph_BP_SpaCandle(EntryPoint) end
---@param SpaCandle ABP_SpaCandle_C
function ABP_SpaCandle_C:OnCandleLit__DelegateSignature(SpaCandle) end


