---@meta

---@class AAirPlaneFuelEnter_01_C : AFuelEnter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field MinTargetFuel float
---@field MaxTargetFuel float
---@field AirportFuelMinigameWidgetClass TSoftClassPtr<UAirportFuelMinigameWidget>
---@field bFuelingMinigameLoading boolean
local AAirPlaneFuelEnter_01_C = {}

---@return FName
function AAirPlaneFuelEnter_01_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AAirPlaneFuelEnter_01_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AAirPlaneFuelEnter_01_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Loaded UClass
function AAirPlaneFuelEnter_01_C:OnLoaded_2922C7124BB74C0D4E6E859A465A0C3A(Loaded) end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AAirPlaneFuelEnter_01_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
function AAirPlaneFuelEnter_01_C:ReceiveBeginPlay() end
---@param Condition boolean
function AAirPlaneFuelEnter_01_C:OpenFuelEnter(Condition) end
---@param On boolean
function AAirPlaneFuelEnter_01_C:ShowFuelEnter(On) end
---@param EntryPoint int32
function AAirPlaneFuelEnter_01_C:ExecuteUbergraph_AirPlaneFuelEnter_01(EntryPoint) end


