---@meta

---@class UTime_Widget_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Day_Txt UTextBlock
---@field HOUERS UTextBlock
---@field Image_71 UImage
---@field Image_220 UImage
---@field Image_286 UImage
---@field Minutes UTextBlock
---@field TimeFormat UTextBlock
---@field Using24HoursTimeFormat boolean
local UTime_Widget_C = {}

---@param Hours24HFormat int32
function UTime_Widget_C:UpdateHoursFormat(Hours24HFormat) end
---@param Minutes int32
---@param Hours int32
function UTime_Widget_C:UpdateHoursAndMinutes(Minutes, Hours) end
---@param Days int32
function UTime_Widget_C:UpdateDays(Days) end
---@param UpdatedTime FTimeStruct
function UTime_Widget_C:TimeUpdated(UpdatedTime) end
function UTime_Widget_C:OnInitialized() end
---@param bAppliedSetting boolean
function UTime_Widget_C:UpdateTimeConvention(bAppliedSetting) end
function UTime_Widget_C:Destruct() end
function UTime_Widget_C:Construct() end
---@param EntryPoint int32
function UTime_Widget_C:ExecuteUbergraph_Time_Widget(EntryPoint) end


