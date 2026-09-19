---@meta

---@class UWBP_Hud_Popularity_Anim_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field popularity_minus UWidgetAnimation
---@field popularity_plus UWidgetAnimation
---@field Glow UImage
---@field image_thumbdown UImage
---@field image_thumbup UImage
---@field PlusAnimationPlaying boolean
---@field MinusAnimationPlaying boolean
local UWBP_Hud_Popularity_Anim_C = {}

function UWBP_Hud_Popularity_Anim_C:PlayPlusAnimation() end
function UWBP_Hud_Popularity_Anim_C:PlayMinusAnimation() end
function UWBP_Hud_Popularity_Anim_C:PlusAnimationDone() end
function UWBP_Hud_Popularity_Anim_C:MinusAnimationDone() end
---@param EntryPoint int32
function UWBP_Hud_Popularity_Anim_C:ExecuteUbergraph_WBP_Hud_Popularity_Anim(EntryPoint) end


