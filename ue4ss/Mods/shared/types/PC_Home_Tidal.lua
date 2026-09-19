---@meta

---@class UPC_Home_Tidal_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarWashCard UWBP_PC_Home_Card_C
---@field GasStationCard UWBP_PC_Home_Card_C
---@field WareHouseCard UWBP_PC_Home_Card_C
---@field WorkShopCard UWBP_PC_Home_Card_C
---@field WrapBox_0 UWrapBox
---@field CurrentTab UPcBaseTab
---@field CurrentMoreInfoTab FString
---@field GamePadCardIndex int32
local UPC_Home_Tidal_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Home_Tidal_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Home_Tidal_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param KeyEvent FKeyEvent
function UPC_Home_Tidal_C:TopMenuHandle(KeyEvent) end
function UPC_Home_Tidal_C:Construct() end
function UPC_Home_Tidal_C:Destruct() end
---@param TabToCreate TSoftClassPtr<UPcBaseTab>
---@param ButtonREF UPC_Base_Card
---@param bReplaceExistingWidget boolean
function UPC_Home_Tidal_C:OnClicked(TabToCreate, ButtonREF, bReplaceExistingWidget) end
---@param TabToCreate TSoftClassPtr<UPcBaseTab>
---@param ButtonREF UPC_Base_Card
---@param bReplaceExistingWidget boolean
function UPC_Home_Tidal_C:Onremove(TabToCreate, ButtonREF, bReplaceExistingWidget) end
---@param EntryPoint int32
function UPC_Home_Tidal_C:ExecuteUbergraph_PC_Home_Tidal(EntryPoint) end


