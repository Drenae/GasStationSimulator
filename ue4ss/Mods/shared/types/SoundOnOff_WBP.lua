---@meta

---@class USoundOnOff_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_85 UImage
---@field SoundOff UImage
---@field SoundOn UImage
---@field WidgetSwitcher_28 UWidgetSwitcher
local USoundOnOff_WBP_C = {}

function USoundOnOff_WBP_C:Sound_OFF() end
function USoundOnOff_WBP_C:Sound_ON() end
---@param EntryPoint int32
function USoundOnOff_WBP_C:ExecuteUbergraph_SoundOnOff_WBP(EntryPoint) end


