---@meta

---@class UWBP_SingleNews_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverButton UWidgetAnimation
---@field Button_84 UButton
---@field Image_111 UImage
---@field Image_screen UImage
---@field RetainerBox_0 URetainerBox
---@field TextBlock_button UTextBlock
---@field TextBlock_info UTextBlock
---@field TextBlock_news_name UTextBlock
---@field Title FText
---@field Screen UTexture2D
---@field Description FText
---@field URL FString
---@field ButtonText FText
local UWBP_SingleNews_C = {}

---@param IsDesignTime boolean
function UWBP_SingleNews_C:PreConstruct(IsDesignTime) end
function UWBP_SingleNews_C:Construct() end
function UWBP_SingleNews_C:BndEvt__WBP_SingleNews_Button_84_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SingleNews_C:BndEvt__WBP_SingleNews_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SingleNews_C:BndEvt__WBP_SingleNews_Button_84_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature() end
function UWBP_SingleNews_C:OnClicked() end
function UWBP_SingleNews_C:OnHoovered() end
function UWBP_SingleNews_C:OnUnhovered() end
---@param EntryPoint int32
function UWBP_SingleNews_C:ExecuteUbergraph_WBP_SingleNews(EntryPoint) end


