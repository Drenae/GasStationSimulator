---@meta

---@class UAchievment_Unlocked_WBP_C : UAchievementWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeIn UWidgetAnimation
---@field Flipbook UFlipbook_C
---@field Image UImage
---@field Image_134 UImage
---@field Image_Icon UImage
---@field TextBlock_Ach_Name UTextBlock
local UAchievment_Unlocked_WBP_C = {}

function UAchievment_Unlocked_WBP_C:Construct() end
---@param Icon UTexture2D
---@param Name FText
function UAchievment_Unlocked_WBP_C:SetAchievementValues(Icon, Name) end
function UAchievment_Unlocked_WBP_C:Unanimate() end
---@param EntryPoint int32
function UAchievment_Unlocked_WBP_C:ExecuteUbergraph_Achievment_Unlocked_WBP(EntryPoint) end


