---@meta

---@class AAirstrip_HangarRuins_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelTankAirport TSoftObjectPtr<ABP_AirportFuelMagazine_C>
local AAirstrip_HangarRuins_C = {}

function AAirstrip_HangarRuins_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function AAirstrip_HangarRuins_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function AAirstrip_HangarRuins_C:ExecuteUbergraph_Airstrip_HangarRuins(EntryPoint) end


