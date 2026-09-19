---@meta

---@class ABP_CandleArrow_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field SpaSettings USpaSettings
local ABP_CandleArrow_C = {}

---@param AllCandles TArray<ABP_SpaCandle_C>
---@param TargetCandle ABP_SpaCandle_C
function ABP_CandleArrow_C:PointToNewCandle(AllCandles, TargetCandle) end
function ABP_CandleArrow_C:ReceiveBeginPlay() end
---@param ServiceTag FGameplayTag
---@param ServiceBuilding ARvGuestServiceSpot
---@param bSuccess boolean
function ABP_CandleArrow_C:OnSpaFinished(ServiceTag, ServiceBuilding, bSuccess) end
---@param EntryPoint int32
function ABP_CandleArrow_C:ExecuteUbergraph_BP_CandleArrow(EntryPoint) end


