---@meta

---@class UWBP_MovieTitle_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TextBlock_Time UTextBlock
---@field TextBlock_Title UTextBlock
---@field Title FText
---@field Time FTimeStruct
local UWBP_MovieTitle_C = {}

---@param Result FText
function UWBP_MovieTitle_C:GetHourText(Result) end
function UWBP_MovieTitle_C:Construct() end
---@param EntryPoint int32
function UWBP_MovieTitle_C:ExecuteUbergraph_WBP_MovieTitle(EntryPoint) end


