---@meta

---@class UDecorationManagementContainer_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GamePadHintHorizontal UHorizontalBox
---@field Image UImage
---@field Image_77 UImage
---@field Image_82 UImage
---@field Image_199 UImage
---@field MainVertical UVerticalBox
---@field WBP_KeyHint_LeftShoulder UWBP_KeyHint_C
---@field WBP_KeyHint_Up_RightShoulder UWBP_KeyHint_C
---@field DecorationCamera ADecorationCamera
local UDecorationManagementContainer_WBP_C = {}

---@param Visible boolean
function UDecorationManagementContainer_WBP_C:HintsVisibility(Visible) end
---@param bHasDecorations boolean
function UDecorationManagementContainer_WBP_C:RefreshDecorationManagementTab(bHasDecorations) end
function UDecorationManagementContainer_WBP_C:Construct() end
function UDecorationManagementContainer_WBP_C:CustomEvent_0() end
function UDecorationManagementContainer_WBP_C:Destruct() end
---@param EntryPoint int32
function UDecorationManagementContainer_WBP_C:ExecuteUbergraph_DecorationManagementContainer_WBP(EntryPoint) end


