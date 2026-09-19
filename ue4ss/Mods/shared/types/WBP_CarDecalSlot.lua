---@meta

---@class UWBP_CarDecalSlot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnim UWidgetAnimation
---@field Action_Button UDragoButton
---@field Decal_IMG UImage
---@field Image_44 UImage
---@field Lock_IMG UImage
---@field Overlay_main UOverlay
---@field DecalDataRow FDecalDataRow
---@field DecalSelected FWBP_CarDecalSlot_CDecalSelected
local UWBP_CarDecalSlot_C = {}

---@param Loaded UObject
function UWBP_CarDecalSlot_C:OnLoaded_966AB59D47FC48D11E7FC3AA86C66A53(Loaded) end
---@param Loaded UClass
function UWBP_CarDecalSlot_C:OnLoaded_DE3C0E63445D4B370739299BEF2EF14D(Loaded) end
---@param IsDesignTime boolean
function UWBP_CarDecalSlot_C:PreConstruct(IsDesignTime) end
function UWBP_CarDecalSlot_C:BndEvt__DragoButton_38_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_CarDecalSlot_C:Destruct() end
function UWBP_CarDecalSlot_C:BndEvt__WBP_CarDecalSlot_Action_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_CarDecalSlot_C:BndEvt__WBP_CarDecalSlot_Action_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_CarDecalSlot_C:Construct() end
---@param Hover boolean
function UWBP_CarDecalSlot_C:GamePadHover(Hover) end
function UWBP_CarDecalSlot_C:GamePadClickAction() end
---@param EntryPoint int32
function UWBP_CarDecalSlot_C:ExecuteUbergraph_WBP_CarDecalSlot(EntryPoint) end
---@param DecalSelected TSubclassOf<ADecalToPaint>
---@param DecalType EDecalColor
function UWBP_CarDecalSlot_C:DecalSelected__DelegateSignature(DecalSelected, DecalType) end


