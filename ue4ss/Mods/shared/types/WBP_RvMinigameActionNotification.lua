---@meta

---@class UWBP_RvMinigameActionNotification_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RevealAnimation2 UWidgetAnimation
---@field RevealAnimation1 UWidgetAnimation
---@field background UImage
---@field Content UOverlay
---@field GameInfoBG_Image UImage
---@field PressToSpeedUp_TXT UTextBlock
---@field PopupMessage FText
---@field PopupIcon UTexture2D
local UWBP_RvMinigameActionNotification_C = {}

---@param IsDesignTime boolean
function UWBP_RvMinigameActionNotification_C:PreConstruct(IsDesignTime) end
---@param Variant int32
function UWBP_RvMinigameActionNotification_C:PlayRevealAnimation(Variant) end
---@param EntryPoint int32
function UWBP_RvMinigameActionNotification_C:ExecuteUbergraph_WBP_RvMinigameActionNotification(EntryPoint) end


