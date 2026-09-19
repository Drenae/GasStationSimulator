---@meta

---@class UPC_Home_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarWashCard UWBP_PC_Home_Card_C
---@field GasStationCard UWBP_PC_Home_Card_C
---@field WareHouseCard UWBP_PC_Home_Card_C
---@field WBP_KeyHint_MoveLeft UWBP_KeyHint_C
---@field WBP_KeyHint_MoveLeft_1 UWBP_KeyHint_C
---@field WorkShopCard UWBP_PC_Home_Card_C
---@field WrapBox_0 UWrapBox
---@field CurrentTab UPcBaseTab
---@field CurrentMoreInfoTab FString
---@field GamePadCardIndex int32
local UPC_Home_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Home_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UPC_Home_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Home_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param IsThereWidgetAbove boolean
function UPC_Home_C:IsThereWidgetAbove(IsThereWidgetAbove) end
---@param KeyEvent FKeyEvent
function UPC_Home_C:TopMenuHandle(KeyEvent) end
function UPC_Home_C:Construct() end
function UPC_Home_C:Destruct() end
---@param TabToCreate TSoftClassPtr<UPcBaseTab>
---@param ButtonREF UPC_Base_Card
---@param bReplaceExistingWidget boolean
function UPC_Home_C:OnClicked(TabToCreate, ButtonREF, bReplaceExistingWidget) end
---@param TabToCreate TSoftClassPtr<UPcBaseTab>
---@param ButtonREF UPC_Base_Card
---@param bReplaceExistingWidget boolean
function UPC_Home_C:Onremove(TabToCreate, ButtonREF, bReplaceExistingWidget) end
function UPC_Home_C:CustomEvent_0() end
---@param EntryPoint int32
function UPC_Home_C:ExecuteUbergraph_PC_Home(EntryPoint) end


