---@meta

---@class AFuelStation_Bp_C : AFuelStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ArrowComponent2 UArrowComponent
---@field FuelCable UCableComponent
---@field FuelPour UAudioComponent
---@field FuelInsert UAudioComponent
---@field JerryCanTransform UArrowComponent
---@field StaticMesh UStaticMeshComponent
---@field FuelPickUp UAudioComponent
---@field FuelPutDown UAudioComponent
---@field Timeline_0_NewTrack_0_B2AE3F414E9D8904A18B55B2612E2D47 float
---@field Timeline_0__Direction_B2AE3F414E9D8904A18B55B2612E2D47 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field Electrocity boolean
---@field StartLocation FVector
---@field JerryCan AJerryCan
---@field PistolInUse boolean
---@field StopCableTickTimerHandle FTimerHandle
local AFuelStation_Bp_C = {}

---@param Pistol AFuelPistolBase
---@return boolean
function AFuelStation_Bp_C:IsNotInStationRange(Pistol) end
---@return FName
function AFuelStation_Bp_C:GetInteractionName() end
---@param Condition boolean
function AFuelStation_Bp_C:PistolUserChanged(Condition) end
function AFuelStation_Bp_C:DisableCableTick() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AFuelStation_Bp_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@return boolean
function AFuelStation_Bp_C:GetElectrocity() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AFuelStation_Bp_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AFuelStation_Bp_C:Timeline_0__FinishedFunc() end
function AFuelStation_Bp_C:Timeline_0__UpdateFunc() end
---@param Loaded UClass
function AFuelStation_Bp_C:OnLoaded_10A9EF94468B96CD083977A2C64A6DD6(Loaded) end
function AFuelStation_Bp_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AFuelStation_Bp_C:ReceiveTick(DeltaSeconds) end
---@param On boolean
function AFuelStation_Bp_C:EnableElectrocity(On) end
function AFuelStation_Bp_C:DebugCustomer() end
function AFuelStation_Bp_C:DebugFinish() end
function AFuelStation_Bp_C:PutJerryCan() end
---@param PistolInUse boolean
function AFuelStation_Bp_C:OnPistolUserchanged(PistolInUse) end
---@param ExtraMoney float
function AFuelStation_Bp_C:OnExtraMoney(ExtraMoney) end
---@param EndPlayReason EEndPlayReason::Type
function AFuelStation_Bp_C:ReceiveEndPlay(EndPlayReason) end
function AFuelStation_Bp_C:ShowInteractionAlertMessage() end
---@param EntryPoint int32
function AFuelStation_Bp_C:ExecuteUbergraph_FuelStation_Bp(EntryPoint) end


