---@meta

---@class UWBP_ThiefEvent_C : UWBP_TimerParent_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AmmountTXT UTextBlock
---@field Day UTextBlock
---@field Hour UTextBlock
---@field Image_281 UImage
---@field Minute UTextBlock
---@field ThiefEvent_BG UImage
---@field ThiefEventStrap UImage
local UWBP_ThiefEvent_C = {}

---@param Time FTimeStruct
function UWBP_ThiefEvent_C:UpdateTime(Time) end
---@param Progress int32
---@param Target int32
function UWBP_ThiefEvent_C:UpdateProgress(Progress, Target) end
function UWBP_ThiefEvent_C:Construct() end
function UWBP_ThiefEvent_C:Destruct() end
---@param EntryPoint int32
function UWBP_ThiefEvent_C:ExecuteUbergraph_WBP_ThiefEvent(EntryPoint) end


