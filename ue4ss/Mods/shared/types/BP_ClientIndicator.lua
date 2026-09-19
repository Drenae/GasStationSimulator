---@meta

---@class ABP_ClientIndicator_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Welder_Set UStaticMeshComponent
---@field SM_BaloonIndicator_line UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field SM_BaloonIndicator UStaticMeshComponent
---@field Baloon USceneComponent
---@field DefaultSceneRoot USceneComponent
---@field Scale_BaloonScale_FF64A9EB43438F964A950889C4C1DC60 float
---@field Scale__Direction_FF64A9EB43438F964A950889C4C1DC60 ETimelineDirection::Type
---@field Scale UTimelineComponent
---@field ['Service Tag'] FGameplayTag
---@field ['Optional Camp Spot'] TSoftObjectPtr<ARVCampSpot>
---@field ['Guest Service Spot'] ARvGuestServiceSpot
---@field ['Not Automated Material'] UMaterialInterface
---@field ['Automated Material'] UMaterialInterface
local ABP_ClientIndicator_C = {}

ABP_ClientIndicator_C['Bind Guest Service'] = function(self, ) end
---@return boolean
ABP_ClientIndicator_C['Is Service Automated'] = function(self, ) end
function ABP_ClientIndicator_C:Scale__FinishedFunc() end
function ABP_ClientIndicator_C:Scale__UpdateFunc() end
function ABP_ClientIndicator_C:ReceiveBeginPlay() end
---@param bWaits boolean
ABP_ClientIndicator_C['On Guest Waits For Service'] = function(self, bWaits) end
ABP_ClientIndicator_C['On Automated Services Updated'] = function(self, ) end
---@param Service_Automated boolean
ABP_ClientIndicator_C['Update Material'] = function(self, Service_Automated) end
---@param EntryPoint int32
function ABP_ClientIndicator_C:ExecuteUbergraph_BP_ClientIndicator(EntryPoint) end


