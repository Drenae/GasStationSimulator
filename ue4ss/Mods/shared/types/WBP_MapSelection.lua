---@meta

---@class UWBP_MapSelection_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackButton UNavigationKeyButton_C
---@field BackgroundBorder UBorder
---@field BgHeadline_Image UImage
---@field CanvasPanel_0 UCanvasPanel
---@field CircularGradient UImage
---@field HorizontalBox_43 UHorizontalBox
---@field Image_77 UImage
---@field WBP_MapSelectionButton UWBP_MapSelectionButton_C
---@field WBP_MapSelectionButton_1 UWBP_MapSelectionButton_C
---@field WBP_MapSelectionButton_2 UWBP_MapSelectionButton_C
---@field MapsButtons TArray<UWBP_MapSelectionButton_C>
---@field GamePadCurrentIndex int32
local UWBP_MapSelection_C = {}

function UWBP_MapSelection_C:Construct() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UWBP_MapSelection_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UWBP_MapSelection_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UWBP_MapSelection_C:OnPressedBack() end
function UWBP_MapSelection_C:Destruct() end
function UWBP_MapSelection_C:BndEvt__WBP_MapSelection_BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() end
function UWBP_MapSelection_C:OnPressedLeft() end
function UWBP_MapSelection_C:OnPressedRight() end
function UWBP_MapSelection_C:OnPressedSelect() end
---@param IsDesignTime boolean
function UWBP_MapSelection_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_MapSelection_C:ExecuteUbergraph_WBP_MapSelection(EntryPoint) end


