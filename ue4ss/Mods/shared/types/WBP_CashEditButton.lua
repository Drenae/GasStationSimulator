---@meta

---@class UWBP_CashEditButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field AtInventoryAmmount_TXT_1 UTextBlock
---@field CashDesk_01 UImage
---@field GamePadMarker UImage
---@field GSSButton_67 UGSSButton
---@field HoveredVizualSupply UImage
---@field Image_17 UImage
---@field Image_53 UImage
---@field LockedIcon UImage
---@field SupplyCardOverlay UOverlay
---@field RequiredLevel int32
---@field CashMesh TSoftObjectPtr<UStaticMesh>
---@field CashDeskWidgetRef UWBP_CashDesk_Widget_C
---@field MeshIndex int32
---@field OnCashClicked FWBP_CashEditButton_COnCashClicked
---@field Texture UTexture2D
local UWBP_CashEditButton_C = {}

---@return boolean
function UWBP_CashEditButton_C:CheckLevel() end
function UWBP_CashEditButton_C:SetUnselected() end
function UWBP_CashEditButton_C:SetSelected() end
---@param Loaded UObject
function UWBP_CashEditButton_C:OnLoaded_56BF05D746F00BD88941E199D431C239(Loaded) end
function UWBP_CashEditButton_C:Construct() end
function UWBP_CashEditButton_C:BndEvt__WBP_CashEditButton_GSSButton_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_CashEditButton_C:PreConstruct(IsDesignTime) end
function UWBP_CashEditButton_C:BndEvt__WBP_CashEditButton_GSSButton_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_CashEditButton_C:BndEvt__WBP_CashEditButton_GSSButton_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
---@param Active boolean
function UWBP_CashEditButton_C:GamePadHover(Active) end
function UWBP_CashEditButton_C:GamePadClickCashRegister() end
---@param EntryPoint int32
function UWBP_CashEditButton_C:ExecuteUbergraph_WBP_CashEditButton(EntryPoint) end
---@param MeshIndex int32
---@param Widget UWBP_CashEditButton_C
function UWBP_CashEditButton_C:OnCashClicked__DelegateSignature(MeshIndex, Widget) end


