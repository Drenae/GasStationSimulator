---@meta

---@class ABP_WeatherManagerBase_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WeatherPP UPostProcessComponent
---@field BP_Visual_Handler_Component UBP_Visual_Handler_Component_C
---@field DefaultSceneRoot USceneComponent
---@field Valid_RandomWeathers TArray<TSubclassOf<ABP_BaseWeather_C>>
---@field Time_Left_on_Current_Weather float
---@field CurrentWeather TSubclassOf<ABP_BaseWeather_C>
---@field ['Last Weather'] TSubclassOf<ABP_BaseWeather_C>
---@field NextWeather TSubclassOf<ABP_BaseWeather_C>
local ABP_WeatherManagerBase_C = {}

function ABP_WeatherManagerBase_C:PickNewWeather() end
function ABP_WeatherManagerBase_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABP_WeatherManagerBase_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_WeatherManagerBase_C:ExecuteUbergraph_BP_WeatherManagerBase(EntryPoint) end


