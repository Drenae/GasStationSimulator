---@meta

---@class UWBP_CreditTitle_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TitleTXT UTextBlock
---@field SetTitleTXT FText
---@field SetFontType UFont
---@field SetFontSize int32
---@field IsTitleTXT boolean
---@field TitleXPadding float
---@field NameXpadding float
local UWBP_CreditTitle_C = {}

---@param IsDesignTime boolean
function UWBP_CreditTitle_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_CreditTitle_C:ExecuteUbergraph_WBP_CreditTitle(EntryPoint) end


