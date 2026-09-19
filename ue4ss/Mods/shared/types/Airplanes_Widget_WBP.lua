---@meta

---@class UAirplanes_Widget_WBP_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AirplaneNotification_Horizontal UHorizontalBox
---@field NewPlaneNotification_WBP UNewPlaneNotification_WBP_C
local UAirplanes_Widget_WBP_C = {}

function UAirplanes_Widget_WBP_C:RefreshOwnedRunways() end
---@param CurrentAirplane ATradingAirplane
function UAirplanes_Widget_WBP_C:UpdateNotificationOnPlaneSet(CurrentAirplane) end
---@param Runway ERunway
function UAirplanes_Widget_WBP_C:BindEventOnLandedFirstStrip(Runway) end
---@param Runway ERunway
---@param CurrentStatus ECurrentStatus
function UAirplanes_Widget_WBP_C:ChangeIsPlaneOnSpot(Runway, CurrentStatus) end
function UAirplanes_Widget_WBP_C:StartListeningPlains() end
---@param Runway ERunway
function UAirplanes_Widget_WBP_C:PlaneArriving(Runway) end
---@param Runway ERunway
function UAirplanes_Widget_WBP_C:PlaneArrived(Runway) end
---@param EntryPoint int32
function UAirplanes_Widget_WBP_C:ExecuteUbergraph_Airplanes_Widget_WBP(EntryPoint) end


