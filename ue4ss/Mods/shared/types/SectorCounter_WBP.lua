---@meta

---@class USectorCounter_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnimation UWidgetAnimation
---@field ActionButtonTest UButton
---@field Image_1 UImage
---@field Image_97 UImage
---@field Image_locked UImage
---@field Overlay_owned UOverlay
---@field IsCurrentSecotr boolean
---@field IsBlockedByLVL boolean
---@field Index int32
---@field OnCapClicked FSectorCounter_WBP_COnCapClicked
local USectorCounter_WBP_C = {}

function USectorCounter_WBP_C:Construct() end
function USectorCounter_WBP_C:BndEvt__SectorCounter_WBP_ActionButtonTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function USectorCounter_WBP_C:BndEvt__SectorCounter_WBP_ActionButtonTest_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function USectorCounter_WBP_C:BndEvt__SectorCounter_WBP_ActionButtonTest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function USectorCounter_WBP_C:Destruct() end
---@param EntryPoint int32
function USectorCounter_WBP_C:ExecuteUbergraph_SectorCounter_WBP(EntryPoint) end
---@param Index int32
function USectorCounter_WBP_C:OnCapClicked__DelegateSignature(Index) end


