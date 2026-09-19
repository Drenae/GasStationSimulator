---@meta

---@class UPC_Selectable_Base_Tab_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CardsHolder UWrapBox
---@field WarehouseLevel0Allert UTextBlock
---@field WBP_KeyHint_Left UWBP_KeyHint_C
---@field WBP_KeyHint_Right UWBP_KeyHint_C
---@field CardsToCreate TArray<FPCSelectableCard>
---@field GamepadIndex int32
---@field GamePadPreviousIndex int32
---@field FromRight boolean
---@field IsAnyChildEnabled boolean
---@field bBlockGamePadA boolean
local UPC_Selectable_Base_Tab_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Selectable_Base_Tab_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Selectable_Base_Tab_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UPC_Selectable_Base_Tab_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Selectable_Base_Tab_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param KeyEvent FKeyEvent
function UPC_Selectable_Base_Tab_C:TopMenuHandle(KeyEvent) end
function UPC_Selectable_Base_Tab_C:Construct() end
---@param TabToCreate TSoftClassPtr<UPcBaseTab>
---@param ButtonREF UPC_Base_Card
---@param bReplaceExistingWidget boolean
function UPC_Selectable_Base_Tab_C:OnClicked(TabToCreate, ButtonREF, bReplaceExistingWidget) end
function UPC_Selectable_Base_Tab_C:OnFadeOut() end
function UPC_Selectable_Base_Tab_C:unbind() end
function UPC_Selectable_Base_Tab_C:Destruct() end
function UPC_Selectable_Base_Tab_C:CustomEvent_0() end
---@param EntryPoint int32
function UPC_Selectable_Base_Tab_C:ExecuteUbergraph_PC_Selectable_Base_Tab(EntryPoint) end


