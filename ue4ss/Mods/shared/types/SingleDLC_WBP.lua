---@meta

---@class USingleDLC_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field Button_51 UButton
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_5 UImage
---@field Image_60 UImage
---@field Image_84 UImage
---@field TextBlock_37 UTextBlock
---@field TextBlock_58 UTextBlock
---@field Screen UTexture
---@field Logo UTexture2D
---@field DLCName FText
---@field DLCHolder UDLC_Widget_C
---@field Click FSingleDLC_WBP_CClick
---@field Index int32
---@field bIsInCarousel boolean
---@field HoverText FText
---@field URL FString
---@field DLCNews FDLCNews
---@field DisplayTexts TArray<FText>
---@field DLCEnum EDLCName
---@field bIsReleased boolean
local USingleDLC_WBP_C = {}

function USingleDLC_WBP_C:VisualizeDLCCurrentState() end
function USingleDLC_WBP_C:BndEvt__SingleDLC_WBP_Button_51_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature() end
function USingleDLC_WBP_C:BndEvt__SingleDLC_WBP_Button_51_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function USingleDLC_WBP_C:BndEvt__SingleDLC_WBP_Button_51_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function USingleDLC_WBP_C:Construct() end
---@param IsDesignTime boolean
function USingleDLC_WBP_C:PreConstruct(IsDesignTime) end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function USingleDLC_WBP_C:CustomEvent_0(bWasSuccesfull, Filename, FileContent) end
---@param OnlineServicesQueried boolean
function USingleDLC_WBP_C:OnDLCOnwershipUpdated(OnlineServicesQueried) end
---@param Active boolean
function USingleDLC_WBP_C:GamePadHover(Active) end
function USingleDLC_WBP_C:GamePadButtonClickDLC() end
---@param EntryPoint int32
function USingleDLC_WBP_C:ExecuteUbergraph_SingleDLC_WBP(EntryPoint) end
---@param Widget UUserWidget
function USingleDLC_WBP_C:Click__DelegateSignature(Widget) end


