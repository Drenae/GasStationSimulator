---@meta

---@class AAirportFuelWheel_BP_C : AInteractableActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelWheelTurn_Cue UAudioComponent
---@field Timeline_0__Direction_55DB069B4AC78E4C379A2DA9D3303DCD ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field FuelMagazine ABP_AirportFuelMagazine_C
---@field StaticMesh TSoftObjectPtr<UStaticMesh>
local AAirportFuelWheel_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AAirportFuelWheel_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AAirportFuelWheel_BP_C:Timeline_0__FinishedFunc() end
function AAirportFuelWheel_BP_C:Timeline_0__UpdateFunc() end
---@param Loaded UObject
function AAirportFuelWheel_BP_C:OnLoaded_276ECCE648F5CF156636FBA4DA2FCD81(Loaded) end
function AAirportFuelWheel_BP_C:StartAnimation() end
function AAirportFuelWheel_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AAirportFuelWheel_BP_C:ExecuteUbergraph_AirportFuelWheel_BP(EntryPoint) end


