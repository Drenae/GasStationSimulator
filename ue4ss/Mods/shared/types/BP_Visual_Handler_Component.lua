---@meta

---@class UBP_Visual_Handler_Component_C : UActorComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BlendingDuration float
---@field Current_UDS AUltra_Dynamic_Sky_BP_Paradise_Island_C
---@field BlendProgress float
---@field PreviousWeather TSubclassOf<ABP_BaseWeather_C>
---@field CurrentWeather TSubclassOf<ABP_BaseWeather_C>
---@field PP UPostProcessComponent
---@field Settings FPostProcessSettings
---@field WindLocalParticles TArray<UNiagaraComponent>
local UBP_Visual_Handler_Component_C = {}

function UBP_Visual_Handler_Component_C:HandleSkylightLowerHemisphereColor() end
function UBP_Visual_Handler_Component_C:handle_Particles_local() end
function UBP_Visual_Handler_Component_C:Handle_Wind() end
function UBP_Visual_Handler_Component_C:HandleSunLightIntensity() end
function UBP_Visual_Handler_Component_C:StartUpdatingVisuals() end
function UBP_Visual_Handler_Component_C:HandleSkylightColor() end
function UBP_Visual_Handler_Component_C:HandleTemp() end
function UBP_Visual_Handler_Component_C:Handle_PP_Components() end
function UBP_Visual_Handler_Component_C:HandleSaturation() end
function UBP_Visual_Handler_Component_C:HandleOverall_intensity() end
function UBP_Visual_Handler_Component_C:HandleClouds() end
function UBP_Visual_Handler_Component_C:Handle_Sky_Components() end
---@param Delta_s float
UBP_Visual_Handler_Component_C['Update Blending Values'] = function(self, Delta_s) end
---@param NextWeather TSubclassOf<ABP_BaseWeather_C>
function UBP_Visual_Handler_Component_C:OnWeatherChanged(NextWeather) end
---@param DeltaSeconds float
function UBP_Visual_Handler_Component_C:ReceiveTick(DeltaSeconds) end
function UBP_Visual_Handler_Component_C:ReceiveBeginPlay() end
---@param PP UPostProcessComponent
function UBP_Visual_Handler_Component_C:Feed_PP(PP) end
---@param EntryPoint int32
function UBP_Visual_Handler_Component_C:ExecuteUbergraph_BP_Visual_Handler_Component(EntryPoint) end


