---@meta

---@class UWBP_LootPanel_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOut UWidgetAnimation
---@field ConstructAnimation UWidgetAnimation
---@field CarType_TXT UTextBlock
---@field Image_87 UImage
---@field LootVertical UVerticalBox
---@field LottedMoeny_TXT UTextBlock
---@field LockInfoHUD UWBP_LockpickingHUD_C
---@field MainLocpickREF UWBP_LockpickingHUD_C
local UWBP_LootPanel_C = {}

function UWBP_LootPanel_C:Construct() end
---@param LottedMoeny float
function UWBP_LootPanel_C:SetMoneyLooted(LottedMoeny) end
---@param EntryPoint int32
function UWBP_LootPanel_C:ExecuteUbergraph_WBP_LootPanel(EntryPoint) end


