---@meta

---@class UStationTrafficMeter_Widget_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EventInfoAnim UWidgetAnimation
---@field ArrowSwitcher UWidgetSwitcher
---@field CurrentBoatSpawnTimes_DEBUG UTextBlock
---@field CurrentCarSpawnTimes_DEBUG UTextBlock
---@field CurrentEventDebug_DEBUG UTextBlock
---@field DebugBox UVerticalBox
---@field Event_Icon UImage
---@field ExtremelyLow_VeryLow_Low UImage
---@field FuelPriceImpact_DEBUG UTextBlock
---@field High_VeryHigh_ExtremelyHigh UImage
---@field HourImpact_DEBUG UTextBlock
---@field Image_3 UImage
---@field ImpactText UTextBlock
---@field LandmarkImpact_DEBUG UTextBlock
---@field LastEvents UTextBlock
---@field MainOverlay UOverlay
---@field Normal UImage
---@field PopularityImpact_DEBUG UTextBlock
---@field SeasonalDecorationImpact_DEBUG UTextBlock
---@field SecondBG UImage
---@field SecondBG_1 UImage
---@field TrafficImpact_DEBUG UTextBlock
---@field UpcomingEventDebug_DEBUG UTextBlock
---@field UpcomingIcon UImage
---@field CurrentEventID int32
---@field UpcomingEventID int32
---@field MinTafficImpact int32
---@field MaxTafficImpact int32
---@field CurrentEventValid boolean
---@field UpcomingEventValid boolean
---@field IsDebugOn boolean
local UStationTrafficMeter_Widget_C = {}

---@param Output_Get FString
function UStationTrafficMeter_Widget_C:GetPastEvents_DEBUG(Output_Get) end
---@param CurrentAppeal float
function UStationTrafficMeter_Widget_C:CalculateCurrentAppeal(CurrentAppeal) end
---@param GameLoaded boolean
function UStationTrafficMeter_Widget_C:GameLoaded(GameLoaded) end
---@param UpdatedImpact int32
function UStationTrafficMeter_Widget_C:UpdateTrafficMeter(UpdatedImpact) end
function UStationTrafficMeter_Widget_C:Destruct() end
function UStationTrafficMeter_Widget_C:UpdateDebugValues() end
function UStationTrafficMeter_Widget_C:ToggleDebug() end
---@param CurrentEventID int32
---@param UpcomingEventID int32
---@param CurrentEventTimeLeft FTimeStruct
---@param UpcomingEventTimeLeft FTimeStruct
function UStationTrafficMeter_Widget_C:UpdateDebugTrafficEvents(CurrentEventID, UpcomingEventID, CurrentEventTimeLeft, UpcomingEventTimeLeft) end
function UStationTrafficMeter_Widget_C:CheckVisibility() end
---@param NewUnlockableUIState FUnlockableUIState
function UStationTrafficMeter_Widget_C:OnNewUI(NewUnlockableUIState) end
function UStationTrafficMeter_Widget_C:Construct() end
---@param EntryPoint int32
function UStationTrafficMeter_Widget_C:ExecuteUbergraph_StationTrafficMeter_Widget(EntryPoint) end


