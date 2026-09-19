---@meta

---@class UPC_OpenCloseDLC_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Button_88 UButton
---@field DLC_Icon UImage
---@field Image UImage
---@field Image_border UImage
---@field PC_open_close_switcher_simple UPC_open_close_switcher_simple_C
---@field TextBlock_158 UTextBlock
---@field WBP_KeyHint_BottomButton UWBP_KeyHint_C
---@field WBP_KeyHint_Left UWBP_KeyHint_C
---@field WBP_KeyHint_Right UWBP_KeyHint_C
---@field StructureName FText
---@field GasStationSection AInteractableBuilding
---@field bIsOn boolean
---@field DLC_NAME EDLCName
---@field IsLocked boolean
---@field ['DLC Icon Texture'] UTexture2D
local UPC_OpenCloseDLC_C = {}

---@param Visible boolean
function UPC_OpenCloseDLC_C:HintsVisibility(Visible) end
function UPC_OpenCloseDLC_C:SetClosedState() end
function UPC_OpenCloseDLC_C:BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UPC_OpenCloseDLC_C:BndEvt__Button_88_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UPC_OpenCloseDLC_C:BndEvt__Button_88_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UPC_OpenCloseDLC_C:Construct() end
---@param IsDesignTime boolean
function UPC_OpenCloseDLC_C:PreConstruct(IsDesignTime) end
---@param Hover boolean
function UPC_OpenCloseDLC_C:GamePadHover(Hover) end
function UPC_OpenCloseDLC_C:GamePadClickedSection() end
---@param IsON boolean
function UPC_OpenCloseDLC_C:OnSwitchingAnimationFinished(IsON) end
UPC_OpenCloseDLC_C['On Yes Clicked'] = function(self, ) end
---@param EntryPoint int32
function UPC_OpenCloseDLC_C:ExecuteUbergraph_PC_OpenCloseDLC(EntryPoint) end


