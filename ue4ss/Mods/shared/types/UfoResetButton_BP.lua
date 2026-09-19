---@meta

---@class AUfoResetButton_BP_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DiggerResetButton UStaticMeshComponent
---@field RemovedActorsPositions TArray<FVector>
---@field RemovedActors TArray<APawn>
---@field RemovedWaterActors TArray<AWaterVehicle>
---@field UfoTimeRemaining float
---@field FadeSoundtrack USoundMix
---@field ChameleonEffectActor TSoftObjectPtr<AActor>
---@field IsChunchumanchuIsland boolean
---@field SequenceToPlay ULevelSequence
local AUfoResetButton_BP_C = {}

---@return FName
function AUfoResetButton_BP_C:GetInteractionName() end
---@param bTickEnabled boolean
function AUfoResetButton_BP_C:SetChameleonTick(bTickEnabled) end
function AUfoResetButton_BP_C:CollectVehiclesToFly() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AUfoResetButton_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param DeltaSeconds float
function AUfoResetButton_BP_C:ReceiveTick(DeltaSeconds) end
function AUfoResetButton_BP_C:StartUfo() end
function AUfoResetButton_BP_C:OnFinished_Event_0() end
function AUfoResetButton_BP_C:StartEventUfo() end
function AUfoResetButton_BP_C:ReceiveBeginPlay() end
function AUfoResetButton_BP_C:RespawnDeliveryBoats() end
---@param EntryPoint int32
function AUfoResetButton_BP_C:ExecuteUbergraph_UfoResetButton_BP(EntryPoint) end


