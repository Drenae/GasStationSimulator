---@meta

---@class ABP_CHuCHu_WeatherManager_Child_C : ABP_WeatherManagerBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AngryCHUWeather TSubclassOf<ABP_BaseWeather_C>
local ABP_CHuCHu_WeatherManager_Child_C = {}

---@param Delay float
function ABP_CHuCHu_WeatherManager_Child_C:AngryChuWeatherSet(Delay) end
function ABP_CHuCHu_WeatherManager_Child_C:ReceiveBeginPlay() end
---@param AngerState EChunchumanchuAnger
---@param Value float
---@param ValueChanged float
function ABP_CHuCHu_WeatherManager_Child_C:AngerTrigger(AngerState, Value, ValueChanged) end
---@param EndPlayReason EEndPlayReason::Type
function ABP_CHuCHu_WeatherManager_Child_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ABP_CHuCHu_WeatherManager_Child_C:ExecuteUbergraph_BP_CHuCHu_WeatherManager_Child(EntryPoint) end


