---@meta

---@class ADesertCar_C : ARCCarBase_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VehicleOverlapComponent UBoxComponent
---@field Box1 UBoxComponent
---@field Box UBoxComponent
---@field finish_Cue UAudioComponent
---@field ciptunetest_Cue UAudioComponent
---@field SM_Desert_Vehicle_Wheel3 UStaticMeshComponent
---@field SM_Desert_Vehicle_Wheel2 UStaticMeshComponent
---@field SM_Desert_Vehicle_Wheel1 UStaticMeshComponent
---@field SM_Desert_Vehicle_Wheel UStaticMeshComponent
---@field SpotLight1 USpotLightComponent
---@field Headlights USpotLightComponent
---@field InternalCamera UCameraComponent
---@field ChaseCamera UCameraComponent
---@field Scene USceneComponent
---@field EngineSound UAudioComponent
---@field InCarGear UTextRenderComponent
---@field InCarSpeed UTextRenderComponent
---@field SpringArm USpringArmComponent
---@field bIsLowFriction boolean
---@field IsInCar boolean
---@field GearDisplayColor FLinearColor
---@field GearDisplayReverseColor FLinearColor
---@field ['Speed Display String'] FString
---@field ['Gear Display String'] FString
---@field InReverseGear boolean
---@field IsInCar_0 boolean
---@field bHandbrake boolean
---@field PlayerController APlayerController
---@field bPlayerIsInCar boolean
---@field OriginalCharacter ACharacter
---@field Flying boolean
---@field OnPosseded FDesertCar_COnPosseded
---@field MusicComp UAudioComponent
---@field TurningCurve UCurveFloat
---@field ForwardAxisValue float
---@field ConnectedRacingComputer AComputerRacing_C
local ADesertCar_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADesertCar_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ADesertCar_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADesertCar_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ADesertCar_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ADesertCar_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ADesertCar_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADesertCar_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ADesertCar_C:UseItem(Pawn, Throw, AimingTime) end
---@return ACharacter
function ADesertCar_C:GetBPOriginalCharacter() end
function ADesertCar_C:PlaySoundtrack() end
function ADesertCar_C:StopSoundtrack() end
ADesertCar_C['Update Physics Material'] = function(self, ) end
ADesertCar_C['Update HUD Strings'] = function(self, ) end
ADesertCar_C['Setup Incar HUD'] = function(self, ) end
---@param State boolean
function ADesertCar_C:EnableIncarView(State) end
---@param Key FKey
function ADesertCar_C:InpActEvt_Jump_K2Node_InputActionEvent_2(Key) end
---@param Key FKey
function ADesertCar_C:InpActEvt_Interaction_F_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function ADesertCar_C:InpActEvt_MuteSounds_K2Node_InputActionEvent_0(Key) end
---@param DeltaSeconds float
function ADesertCar_C:ReceiveTick(DeltaSeconds) end
---@param AxisValue float
function ADesertCar_C:InpAxisEvt_MoveRight_K2Node_InputAxisEvent_43(AxisValue) end
function ADesertCar_C:ReceiveBeginPlay() end
---@param AxisValue float
function ADesertCar_C:InpAxisEvt_MoveForward_K2Node_InputAxisEvent_32(AxisValue) end
---@param NewController AController
function ADesertCar_C:ReceivePossessed(NewController) end
---@param OldController AController
function ADesertCar_C:ReceiveUnpossessed(OldController) end
function ADesertCar_C:ShowInteractionAlertMessage() end
---@param Pawn APawn
function ADesertCar_C:DisableInteractionInfo(Pawn) end
function ADesertCar_C:CustomDephRenderVehicle() end
function ADesertCar_C:UnpossesCar() end
---@param EntryPoint int32
function ADesertCar_C:ExecuteUbergraph_DesertCar(EntryPoint) end
---@param InCar boolean
function ADesertCar_C:OnPosseded__DelegateSignature(InCar) end


