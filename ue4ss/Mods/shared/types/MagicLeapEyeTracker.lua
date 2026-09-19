---@meta

---@class FMagicLeapEyeBlinkState
---@field LeftEyeBlinked boolean
---@field RightEyeBlinked boolean
local FMagicLeapEyeBlinkState = {}



---@class UMagicLeapEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary
local UMagicLeapEyeTrackerFunctionLibrary = {}

---@param BlinkState FMagicLeapEyeBlinkState
---@return boolean
function UMagicLeapEyeTrackerFunctionLibrary:GetEyeBlinkState(BlinkState) end
---@return EMagicLeapEyeTrackingCalibrationStatus
function UMagicLeapEyeTrackerFunctionLibrary:GetCalibrationStatus() end


