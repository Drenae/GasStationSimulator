---@meta

---@class ACarLift_BP_C : ACarLift
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Screen1Text2 UTextRenderComponent
---@field Screen1Text1 UTextRenderComponent
---@field Screen2Text UTextRenderComponent
---@field Screen1Text UTextRenderComponent
---@field Screen2 UStaticMeshComponent
---@field Screen UStaticMeshComponent
---@field Button1 UStaticMeshComponent
---@field CarLiftSound UAudioComponent
---@field arrow UArrowComponent
---@field Button UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field MoveLift_Alfa_B4A01C7A48FF50AD3840C4AD5C93CA5D float
---@field MoveLift__Direction_B4A01C7A48FF50AD3840C4AD5C93CA5D ETimelineDirection::Type
---@field MoveLift UTimelineComponent
---@field Instaginator ACharacter
---@field GameWidgetREF UGarage_HUD_C
---@field OnCarLiftUp FCarLift_BP_COnCarLiftUp
---@field OnCarLiftDown FCarLift_BP_COnCarLiftDown
---@field DelayClickActive boolean
---@field IsBloked boolean
---@field InteractionDelay boolean
---@field UsedButton UPrimitiveComponent
---@field XButtonOffset float
local ACarLift_BP_C = {}

function ACarLift_BP_C:ShowGarageStartWidget() end
function ACarLift_BP_C:StartGarageGame() end
ACarLift_BP_C['Close Vehicle Hood'] = function(self, ) end
---@param BrokenParts int32
function ACarLift_BP_C:UpdateScreenTexts(BrokenParts) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACarLift_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACarLift_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACarLift_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ACarLift_BP_C:MoveLift__FinishedFunc() end
function ACarLift_BP_C:MoveLift__UpdateFunc() end
function ACarLift_BP_C:ReceiveBeginPlay() end
---@param Pawn APawn
function ACarLift_BP_C:DisableInteractionInfo(Pawn) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
function ACarLift_BP_C:PutInCar(GSSWheeledVehicle) end
function ACarLift_BP_C:RetrigerDelayClick() end
function ACarLift_BP_C:ResetTimer() end
---@param Instaginator ACharacter
function ACarLift_BP_C:StartCarLift(Instaginator) end
---@param TargetActor AActor
---@param Fixed boolean
function ACarLift_BP_C:UpdateVehiclePart(TargetActor, Fixed) end
---@param FinishedTask UTaskBase
---@param TaskResult ETaskResult
---@param Reason FString
function ACarLift_BP_C:OnBeginFinishTaskCharacter_Event_0(FinishedTask, TaskResult, Reason) end
---@param EndPlayReason EEndPlayReason::Type
function ACarLift_BP_C:ReceiveEndPlay(EndPlayReason) end
function ACarLift_BP_C:Reset() end
function ACarLift_BP_C:UnlockInteraction() end
function ACarLift_BP_C:LoadLift() end
function ACarLift_BP_C:BlockInteraction() end
---@param ButtonToMove UPrimitiveComponent
function ACarLift_BP_C:MoveButtonWhenInteracted(ButtonToMove) end
function ACarLift_BP_C:ShowInteractionAlertMessage() end
---@param EntryPoint int32
function ACarLift_BP_C:ExecuteUbergraph_CarLift_BP(EntryPoint) end
function ACarLift_BP_C:OnCarLiftDown__DelegateSignature() end
function ACarLift_BP_C:OnCarLiftUp__DelegateSignature() end


