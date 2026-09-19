---@meta

---@class UWBP_PC_Card_C : UPC_Base_Card
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field CardIllustration_IMG UImage
---@field FrontStraps_IMG UImage
---@field GrayBlocking_IMG UImage
---@field GrayGradient UImage
---@field GSSButton_86 UGSSButton
---@field NameBG_IMG_1 UImage
---@field PC_CollectedStuff_WBP UPC_CollectedStuff_WBP_C
---@field Title_TXT UTextBlock
---@field WBP_KeyHint_BottomButton UWBP_KeyHint_C
---@field WorkshopBlockedTXT UTextBlock
---@field IsHovererd boolean
---@field bHideCount boolean
---@field RequiredLevel int32
---@field BuildingType EBuildingType
local UWBP_PC_Card_C = {}

---@param IsHovered boolean
function UWBP_PC_Card_C:SetHovered(IsHovered) end
function UWBP_PC_Card_C:Construct() end
---@param Tag FGameplayTag
function UWBP_PC_Card_C:CheckForUnlockedState(Tag) end
function UWBP_PC_Card_C:BndEvt__WBP_PC_Card_GSSButton_86_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PC_Card_C:BndEvt__WBP_PC_Card_GSSButton_86_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PC_Card_C:BndEvt__WBP_PC_Card_GSSButton_86_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_PC_Card_C:ExecuteUbergraph_WBP_PC_Card(EntryPoint) end


