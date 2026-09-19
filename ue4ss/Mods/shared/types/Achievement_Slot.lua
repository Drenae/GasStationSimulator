---@meta

---@class UAchievement_Slot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AchiIcon UImage
---@field Image_147 UImage
---@field TextBlock_description UTextBlock
---@field TextBlock_Name UTextBlock
---@field Icon UTexture2D
---@field AchiName FText
---@field AchiDescription FText
---@field bIsHidden boolean
---@field bIsAchieved boolean
---@field LockedIcon UTexture2D
local UAchievement_Slot_C = {}

function UAchievement_Slot_C:Construct() end
---@param EntryPoint int32
function UAchievement_Slot_C:ExecuteUbergraph_Achievement_Slot(EntryPoint) end


