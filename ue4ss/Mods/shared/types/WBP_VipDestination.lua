---@meta

---@class UWBP_VipDestination_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HorizontalBox_bonus_time UHorizontalBox
---@field Image UImage
---@field Image_132 UImage
---@field Image_bonus_icon UImage
---@field Image_bonus_rays UImage
---@field Image_Icon UImage
---@field Image_screen UImage
---@field RetainerBox_desaturate URetainerBox
---@field Text_Progress_Current UTextBlock
---@field Text_Progress_Max UTextBlock
---@field text_time UTextBlock
---@field TextBlock_Name UTextBlock
---@field bBonusActive boolean
---@field Icon UTexture2D
---@field Screen UTexture2D
---@field Name FText
---@field MaxProgression float
---@field CurrentProgression float
---@field desaturation float
---@field bIsAvailable boolean
---@field DLCDestination EDLCName
local UWBP_VipDestination_C = {}

---@param IsAvailable boolean
function UWBP_VipDestination_C:SetNotAvailable(IsAvailable) end
---@param CurrentProgress float
---@param MaxProgress float
function UWBP_VipDestination_C:SetProgress(CurrentProgress, MaxProgress) end
---@param RemaningBonusTime float
function UWBP_VipDestination_C:ShowHideBonus(RemaningBonusTime) end
---@param IsDesignTime boolean
function UWBP_VipDestination_C:PreConstruct(IsDesignTime) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_VipDestination_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_VipDestination_C:ExecuteUbergraph_WBP_VipDestination(EntryPoint) end


