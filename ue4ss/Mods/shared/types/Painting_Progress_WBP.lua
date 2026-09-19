---@meta

---@class UPainting_Progress_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnimationBounc UWidgetAnimation
---@field Bounce_IMG UImage
---@field Image_43 UImage
---@field Splat_ProgressBar UProgressBar
local UPainting_Progress_WBP_C = {}

function UPainting_Progress_WBP_C:Construct() end
function UPainting_Progress_WBP_C:SetBounceColapse() end
function UPainting_Progress_WBP_C:SetBounceVisable() end
---@param EntryPoint int32
function UPainting_Progress_WBP_C:ExecuteUbergraph_Painting_Progress_WBP(EntryPoint) end


