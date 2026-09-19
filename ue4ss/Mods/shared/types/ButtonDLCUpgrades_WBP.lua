---@meta

---@class UButtonDLCUpgrades_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DragoButton_26 UDragoButton
---@field GamePadFrame UImage
---@field MatImage UImage
---@field WBP_KeyHint_RightTrigger UWBP_KeyHint_C
---@field WBP_RedDot UWBP_RedDot_C
---@field ClickEvent FButtonDLCUpgrades_WBP_CClickEvent
---@field Material UMaterialInstanceDynamic
---@field Darken float
---@field desaturation float
---@field Image UTexture
---@field OutlineSize float
---@field UpgradeTree UTechnologyTree
---@field Icon TSoftObjectPtr<UTexture2D>
---@field OverlayIndex int32
---@field UpgradeParent UWBP_UpgradesParent_C
---@field RedDotTag FGameplayTag
local UButtonDLCUpgrades_WBP_C = {}

function UButtonDLCUpgrades_WBP_C:SetNormal() end
function UButtonDLCUpgrades_WBP_C:SetActive() end
---@param bIsDLCEnabled boolean
function UButtonDLCUpgrades_WBP_C:SetIfDLCIsEnabled(bIsDLCEnabled) end
function UButtonDLCUpgrades_WBP_C:SetEnabled() end
function UButtonDLCUpgrades_WBP_C:SetDisabled() end
---@param IsDesignTime boolean
function UButtonDLCUpgrades_WBP_C:PreConstruct(IsDesignTime) end
function UButtonDLCUpgrades_WBP_C:Construct() end
function UButtonDLCUpgrades_WBP_C:BndEvt__ButtonDLCUpgrades_WBP_DragoButton_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UButtonDLCUpgrades_WBP_C:BndEvt__ButtonDLCUpgrades_WBP_DragoButton_26_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UButtonDLCUpgrades_WBP_C:BndEvt__ButtonDLCUpgrades_WBP_DragoButton_26_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param Hover boolean
function UButtonDLCUpgrades_WBP_C:GamePadHover(Hover) end
---@param EntryPoint int32
function UButtonDLCUpgrades_WBP_C:ExecuteUbergraph_ButtonDLCUpgrades_WBP(EntryPoint) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UButtonDLCUpgrades_WBP_C:ClickEvent__DelegateSignature(TechTree, OverlayIndex) end


