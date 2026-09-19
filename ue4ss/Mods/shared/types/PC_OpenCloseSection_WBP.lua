---@meta

---@class UPC_OpenCloseSection_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Button_88 UButton
---@field Icon UImage
---@field Image UImage
---@field Image_border UImage
---@field PC_open_close_switcher_simple UPC_open_close_switcher_simple_C
---@field SizeBox_Icon USizeBox
---@field TextBlock_158 UTextBlock
---@field WBP_KeyHint_BottomButton UWBP_KeyHint_C
---@field WBP_KeyHint_Left UWBP_KeyHint_C
---@field WBP_KeyHint_Right UWBP_KeyHint_C
---@field StructureName FText
---@field GasStationSection AInteractableBuilding
---@field bIsOn boolean
---@field MapIcon TSoftObjectPtr<UTexture2D>
---@field IsLocked boolean
local UPC_OpenCloseSection_WBP_C = {}

---@return boolean
UPC_OpenCloseSection_WBP_C['Is Drive In Cinema'] = function(self, ) end
---@param Visible boolean
function UPC_OpenCloseSection_WBP_C:HintsVisibility(Visible) end
function UPC_OpenCloseSection_WBP_C:SetClosedState() end
---@param IsDesignTime boolean
function UPC_OpenCloseSection_WBP_C:PreConstruct(IsDesignTime) end
function UPC_OpenCloseSection_WBP_C:BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UPC_OpenCloseSection_WBP_C:BndEvt__Button_88_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UPC_OpenCloseSection_WBP_C:BndEvt__Button_88_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UPC_OpenCloseSection_WBP_C:PrepareeSwitcherState() end
function UPC_OpenCloseSection_WBP_C:Construct() end
---@param Hover boolean
function UPC_OpenCloseSection_WBP_C:GamePadHover(Hover) end
function UPC_OpenCloseSection_WBP_C:GamePadClickedSection() end
---@param IsON boolean
function UPC_OpenCloseSection_WBP_C:OnSwitchingAnimationFinished(IsON) end
UPC_OpenCloseSection_WBP_C['On Confirm'] = function(self, ) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UPC_OpenCloseSection_WBP_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UPC_OpenCloseSection_WBP_C:ExecuteUbergraph_PC_OpenCloseSection_WBP(EntryPoint) end


