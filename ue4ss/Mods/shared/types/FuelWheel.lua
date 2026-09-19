---@meta

---@class AFuelWheel_C : AInteractableActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelWheelTurn_Cue UAudioComponent
---@field Timeline_0__Direction_C0D4D25648F3DCA94C9224BA4774183D ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field FuelMagazine AFuelMagazine_C
---@field StaticMesh TSoftObjectPtr<UStaticMesh>
local AFuelWheel_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AFuelWheel_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AFuelWheel_C:Timeline_0__FinishedFunc() end
function AFuelWheel_C:Timeline_0__UpdateFunc() end
---@param Loaded UObject
function AFuelWheel_C:OnLoaded_0B39633F4EFF0CED38FE65BDBA211E0F(Loaded) end
function AFuelWheel_C:StartAnimation() end
function AFuelWheel_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AFuelWheel_C:ExecuteUbergraph_FuelWheel(EntryPoint) end


