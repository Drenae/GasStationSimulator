---@meta

---@class APopcornMachineButton_BP_C : AInteractableBuilding
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RemovedActorsPositions TArray<FVector>
---@field RemovedActors TArray<APawn>
---@field RemovedWaterActors TArray<AWaterVehicle>
---@field UfoTimeRemaining float
---@field FadeSoundtrack USoundMix
---@field ChameleonEffectActor TSoftObjectPtr<AActor>
---@field IsChunchumanchuIsland boolean
---@field SequenceToPlay ULevelSequence
---@field QuestPopup UNotification_C
local APopcornMachineButton_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function APopcornMachineButton_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function APopcornMachineButton_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function APopcornMachineButton_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function APopcornMachineButton_BP_C:Finished_878AD4F549E62EA1E9AB53828853F67A() end
---@param Pawn APawn
function APopcornMachineButton_BP_C:DisableInteractionInfo(Pawn) end
function APopcornMachineButton_BP_C:ShowQuestPopup() end
function APopcornMachineButton_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function APopcornMachineButton_BP_C:ExecuteUbergraph_PopcornMachineButton_BP(EntryPoint) end


