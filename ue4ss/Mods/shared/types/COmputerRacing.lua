---@meta

---@class AComputerRacing_C : ARacingComputer
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckpointSound UAudioComponent
---@field arcademachine_HP_Cue UAudioComponent
---@field MachineHum UAudioComponent
---@field MetaCarTrace ACarTrace_Meta_C
---@field DesertCar ADesertCar_C
---@field CarTrace TArray<ACarTrace_C>
---@field NewVar_0 TArray<EObjectTypeQuery>
---@field VehicleTargetCar ACarTrace_C
---@field CarStartTransform FTransform
---@field StartGame boolean
---@field VehicleWidgetREF UDesertCarWidget
---@field NewVar_2 UAudioComponent
---@field NewVar_3 ACarTrace_C
---@field Electrocity boolean
---@field bLeaderboardFound boolean
---@field SavedTime float
---@field KeyWidget UWBP_KeyBindedAction_C
---@field TargetTime float
---@field MoneyReward float
---@field TrackName FName
---@field AchievementTime float
---@field LeaderboardMinigame EMinigame
---@field Generator TSoftObjectPtr<AGenerator>
local AComputerRacing_C = {}

---@return FName
function AComputerRacing_C:GetInteractionName() end
---@return boolean
function AComputerRacing_C:GetElectrocity() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AComputerRacing_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function AComputerRacing_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AComputerRacing_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AComputerRacing_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function AComputerRacing_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function AComputerRacing_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AComputerRacing_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function AComputerRacing_C:UseItem(Pawn, Throw, AimingTime) end
---@param Track FName
function AComputerRacing_C:CheckAchievementTime(Track) end
function AComputerRacing_C:TeleportCarToStart() end
---@param NewTime float
function AComputerRacing_C:UploadLeaderboardScore(NewTime) end
function AComputerRacing_C:CountPoints() end
function AComputerRacing_C:ShowInteractionAlertMessage() end
function AComputerRacing_C:ReceiveBeginPlay() end
---@param NewParam ACarTrace_C
function AComputerRacing_C:CustomEvent_0(NewParam) end
---@param DeltaSeconds float
function AComputerRacing_C:ReceiveTick(DeltaSeconds) end
---@param InCar boolean
function AComputerRacing_C:CustomEvent_1(InCar) end
---@param On boolean
function AComputerRacing_C:EnableElectrocity(On) end
function AComputerRacing_C:UnpossesAfterFinish() end
---@param Pawn APawn
function AComputerRacing_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function AComputerRacing_C:ExecuteUbergraph_ComputerRacing(EntryPoint) end


