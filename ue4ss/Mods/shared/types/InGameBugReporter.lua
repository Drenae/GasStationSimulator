---@meta

---@class FBugReportMachineSpec
---@field Platform FString
---@field CPU FCPUMetrics
---@field GPU FGPUMetrics
---@field RAM FMemoryMetrics
---@field Disk FDiskMetrics
---@field InputType EInputType
---@field OutputDevice FString
---@field ScreenResolution FScreenResolution
---@field Language FString
---@field Locale FString
local FBugReportMachineSpec = {}



---@class FCPUMetrics
---@field Brand FString
---@field Chipset FString
---@field Vendor FString
---@field Cores int32
---@field CoresWithHyperthread int32
---@field UsePercentage float
local FCPUMetrics = {}



---@class FDiskMetrics
local FDiskMetrics = {}


---@class FFileInfoData
---@field FilePath FString
---@field FileType EFileType
local FFileInfoData = {}



---@class FGPUMetrics
---@field DeviceDescription FString
---@field ProviderName FString
---@field InternalDriverVersion FString
---@field UserDriverVersion FString
---@field DriverDate FString
---@field RHIName FString
---@field Brand FString
local FGPUMetrics = {}



---@class FMemoryMetrics
---@field TotalMemoryGB int32
local FMemoryMetrics = {}



---@class FReportBody
---@field Emotion EReportEmotion
---@field Type EReportType
---@field ContactEmail FString
---@field bAllowContactEmail boolean
---@field Version FString
---@field Category EReportCategory
---@field Comment FString
---@field MachineSpec FBugReportMachineSpec
local FReportBody = {}



---@class FReportRequest
---@field bIncludeScreenshot boolean
---@field bIncludeBugfile boolean
---@field bIncludeSaveFiles boolean
---@field Saves TArray<FFileInfoData>
---@field Emotion EReportEmotion
---@field Type EReportType
---@field ContactEmail FString
---@field bAllowContactEmail boolean
---@field Version FString
---@field Category EReportCategory
---@field Comment FString
local FReportRequest = {}



---@class FScreenResolution
---@field X int32
---@field Y int32
local FScreenResolution = {}



---@class IBugReportingInterface : IInterface
local IBugReportingInterface = {}

---@param InOutBugDump FString
function IBugReportingInterface:GetBugReportingDump(InOutBugDump) end


---@class UBugReportUploaderWidgetBase : UUserWidget
---@field ScreenshotData TArray<uint8>
---@field ScreenshotIdentifier FGuid
---@field OnReportSendProgress FBugReportUploaderWidgetBaseOnReportSendProgress
---@field OnReportSendCompleted FBugReportUploaderWidgetBaseOnReportSendCompleted
---@field OnScreenshotGenerated FBugReportUploaderWidgetBaseOnScreenshotGenerated
local UBugReportUploaderWidgetBase = {}

---@param Input FReportRequest
function UBugReportUploaderWidgetBase:SendReport(Input) end
---@param Width int32
---@param Height int32
---@param Colors TArray<FColor>
---@param ScreenshotFilename FString
function UBugReportUploaderWidgetBase:OnScreenshotCreated(Width, Height, Colors, ScreenshotFilename) end
---@param Paths TArray<FString>
---@return TArray<FFileInfoData>
function UBugReportUploaderWidgetBase:CreateFileInfosFromSavePaths(Paths) end


---@class UBugReportingComponent : UActorComponent
---@field ContextPriority int32
---@field BugreportingWidgetClass TSubclassOf<UBugReportUploaderWidgetBase>
---@field CreatedWidget UBugReportUploaderWidgetBase
local UBugReportingComponent = {}

function UBugReportingComponent:ToggleBugreportingWidget() end
function UBugReportingComponent:RestoreInput() end
function UBugReportingComponent:RemoveInput() end


---@class UBugReportingSettings : UDeveloperSettings
---@field ApiKey FString
---@field ApiHeader FString
---@field HTTPMethod FString
---@field ApiURL FString
local UBugReportingSettings = {}



---@class UInGameBugReporterTypes : UObject
local UInGameBugReporterTypes = {}


