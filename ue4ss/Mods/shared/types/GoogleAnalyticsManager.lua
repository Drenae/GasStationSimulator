---@meta

---@class FAnalyticsMeasurementBody
---@field client_id FString
---@field user_properties FJsonObjectWrapper
---@field events TArray<FJsonObjectWrapper>
local FAnalyticsMeasurementBody = {}



---@class FDeviceDataGatheredEvent
---@field Name FString
---@field params FJsonObjectWrapper
local FDeviceDataGatheredEvent = {}



---@class FEventToQueue
local FEventToQueue = {}


---@class FMachineSpec
---@field CPU FString
---@field NumberOfCores int32
---@field NumberOfThreads int32
---@field bHasDedicatedGraphics boolean
---@field GPU FString
---@field VRAMGBs int32
---@field PhysicalMemoryGBs int32
---@field OutputDevice FString
---@field Resolution FString
---@field InputDevice FString
---@field Platform FString
---@field bIsValid boolean
local FMachineSpec = {}



---@class FUserDeviceProperties
---@field device_cpu FUserPropertyStringValue
---@field device_cpu_cores FUserPropertyIntValue
---@field device_cpu_threads FUserPropertyIntValue
---@field device_gpu FUserPropertyStringValue
---@field device_gpu_vram FUserPropertyIntValue
---@field device_gpu_is_dedicated FUserPropertyStringValue
---@field device_ram FUserPropertyIntValue
---@field device_input FUserPropertyStringValue
---@field device_os FUserPropertyStringValue
---@field device_output FUserPropertyStringValue
---@field device_resolution FUserPropertyStringValue
local FUserDeviceProperties = {}



---@class FUserPropertyIntValue
---@field Value int32
local FUserPropertyIntValue = {}



---@class FUserPropertyStringValue
---@field Value FString
local FUserPropertyStringValue = {}



---@class UGoogleAnalyticsManagerSettings : UDeveloperSettings
---@field ApiSecret FString
---@field MeasurementID FString
---@field SendEventsFrequency int32
---@field CurrentGameUpdate FName
---@field bSendEventsInPIE boolean
---@field bSendEventsAsInternal boolean
local UGoogleAnalyticsManagerSettings = {}



---@class UGoogleAnalyticsManagerSubsystem : UGameInstanceSubsystem
---@field bInitialized boolean
---@field CurrentMachineSpec FMachineSpec
---@field UserId FGuid
---@field SessionId FGuid
---@field OnAnalyticsEventSendCompleted FGoogleAnalyticsManagerSubsystemOnAnalyticsEventSendCompleted
local UGoogleAnalyticsManagerSubsystem = {}

---@param JsonSerializedEventData FJsonObjectWrapper
---@param JsonSerializedUserData FJsonObjectWrapper
---@param bAddEngagementTime boolean
function UGoogleAnalyticsManagerSubsystem:SendEventData(JsonSerializedEventData, JsonSerializedUserData, bAddEngagementTime) end
---@param EventName FString
---@param UserParams TMap<FString, FString>
---@param params TMap<FString, FString>
---@param bAddEngagementTime boolean
function UGoogleAnalyticsManagerSubsystem:ReportCustomEvent(EventName, UserParams, params, bAddEngagementTime) end
---@param EventName FString
---@param params TMap<FString, FString>
function UGoogleAnalyticsManagerSubsystem:QueueCustomEvent(EventName, params) end
---@return TMap<FString, FString>
function UGoogleAnalyticsManagerSubsystem:MachineSpecsAsMap() end
---@param LP ULocalPlayer
---@return FMachineSpec
function UGoogleAnalyticsManagerSubsystem:GatherMachineSpecData(LP) end
---@param Name FString
---@param Value FString
function UGoogleAnalyticsManagerSubsystem:AddUserCustomDimension(Name, Value) end


