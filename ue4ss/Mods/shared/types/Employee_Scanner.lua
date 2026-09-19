---@meta

---@class AEmployee_Scanner_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight USpotLightComponent
---@field ScannerPOC_pahu UStaticMeshComponent
---@field LigthIntensity_Intensity_8768EC734F028E2AC5578E955ACA0F98 float
---@field LigthIntensity__Direction_8768EC734F028E2AC5578E955ACA0F98 ETimelineDirection::Type
---@field LigthIntensity UTimelineComponent
local AEmployee_Scanner_C = {}

function AEmployee_Scanner_C:LigthIntensity__FinishedFunc() end
function AEmployee_Scanner_C:LigthIntensity__UpdateFunc() end
function AEmployee_Scanner_C:LightChange() end
---@param EntryPoint int32
function AEmployee_Scanner_C:ExecuteUbergraph_Employee_Scanner(EntryPoint) end


