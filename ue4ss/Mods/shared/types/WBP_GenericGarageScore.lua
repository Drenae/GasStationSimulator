---@meta

---@class UWBP_GenericGarageScore_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_117 UImage
---@field Image_163 UImage
---@field RepairedNumber_TXT UTextBlock
---@field ToRepair_TXT UTextBlock
---@field RepairedPartsUpdate int32
---@field BrokenPartsUpdat int32
local UWBP_GenericGarageScore_C = {}

function UWBP_GenericGarageScore_C:Construct() end
---@param FixedPartsAmount int32
---@param BrokenPartsAmount int32
function UWBP_GenericGarageScore_C:UpdateValues(FixedPartsAmount, BrokenPartsAmount) end
---@param EntryPoint int32
function UWBP_GenericGarageScore_C:ExecuteUbergraph_WBP_GenericGarageScore(EntryPoint) end


