---@meta

---@class UWBPHud_Money_Anim_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field money_plus_hud_anim UWidgetAnimation
---@field money_minus_hud_anim UWidgetAnimation
---@field EqBG_Image UImage
---@field EqIcon UImage
---@field Image_glow UImage
---@field MoneyAmmount UTextBlock
---@field IconToAssign UTexture2D
---@field UseCustomImageSize boolean
---@field BgImageSize float
---@field IconImageSize float
---@field GlowPosition FVector2D
local UWBPHud_Money_Anim_C = {}

---@param money FText
---@param YieldType EEconomyDetailedYieldType
function UWBPHud_Money_Anim_C:PlayPlusAnimation(money, YieldType) end
---@param money FText
function UWBPHud_Money_Anim_C:PlayMinusAnimation(money) end
---@param IsDesignTime boolean
function UWBPHud_Money_Anim_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBPHud_Money_Anim_C:ExecuteUbergraph_WBPHud_Money_Anim(EntryPoint) end


