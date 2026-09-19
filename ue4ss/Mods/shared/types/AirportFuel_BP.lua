---@meta

---@class AAirportFuel_BP_C : AFuelStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelCable UCableComponent
---@field FuelPour UAudioComponent
---@field FuelInsert UAudioComponent
---@field JerryCanTransform UArrowComponent
---@field FuelPickUp UAudioComponent
---@field FuelPutDown UAudioComponent
---@field Timeline_0_NewTrack_0_F405E514444632DFDDACB5BC626746A3 float
---@field Timeline_0__Direction_F405E514444632DFDDACB5BC626746A3 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field Electrocity boolean
---@field StartLocation FVector
---@field JerryCan AJerryCan
---@field PistolInUse boolean
---@field StopCableTickTimerHandle FTimerHandle
---@field Tutorial UUserWidget
---@field JerryCanClassSoft TSoftClassPtr<AJerryCan>
local AAirportFuel_BP_C = {}

---@param Condition boolean
function AAirportFuel_BP_C:PistolUserChanged(Condition) end
function AAirportFuel_BP_C:DisableCableTick() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AAirportFuel_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@return boolean
function AAirportFuel_BP_C:GetElectrocity() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AAirportFuel_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AAirportFuel_BP_C:UserConstructionScript() end
function AAirportFuel_BP_C:Timeline_0__FinishedFunc() end
function AAirportFuel_BP_C:Timeline_0__UpdateFunc() end
---@param Loaded UClass
function AAirportFuel_BP_C:OnLoaded_59C0919443AF20638655C48D822EF076(Loaded) end
function AAirportFuel_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AAirportFuel_BP_C:ReceiveTick(DeltaSeconds) end
---@param On boolean
function AAirportFuel_BP_C:EnableElectrocity(On) end
function AAirportFuel_BP_C:DebugCustomer() end
function AAirportFuel_BP_C:DebugFinish() end
function AAirportFuel_BP_C:PutJerryCan() end
---@param PistolInUse boolean
function AAirportFuel_BP_C:OnPistolUserchanged(PistolInUse) end
---@param ExtraMoney float
function AAirportFuel_BP_C:OnExtraMoney(ExtraMoney) end
---@param EndPlayReason EEndPlayReason::Type
function AAirportFuel_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function AAirportFuel_BP_C:ExecuteUbergraph_AirportFuel_BP(EntryPoint) end


