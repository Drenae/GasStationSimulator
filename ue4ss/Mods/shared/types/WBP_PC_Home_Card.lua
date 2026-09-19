---@meta

---@class UWBP_PC_Home_Card_C : UPC_Base_Card
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovAnimation UWidgetAnimation
---@field ActionWidget UButton
---@field BuyWorkshopButton UGSSButton
---@field BuyWorkShopOverlay UOverlay
---@field BuyWorkshopTXT UTextBlock
---@field CardIllustration_IMG UImage
---@field FrontStraps_IMG UImage
---@field GrayBlocking_IMG UImage
---@field GrayGradient UImage
---@field MoreInfoFuelStationTXT UTextBlock
---@field MoreInfoSizer USizeBox
---@field MoreInfoStation UGSSButton
---@field NameBG_IMG_1 UImage
---@field SizeBox_0 USizeBox
---@field SizeBox_9 USizeBox
---@field StationLevelTXT UTextBlock
---@field TextBlock_2 UTextBlock
---@field Title_TXT UTextBlock
---@field WBP_KeyHint_BottomButton UWBP_KeyHint_C
---@field WorkshopBlockedTXT UTextBlock
---@field WorkshopBuyCondition UOverlay
---@field WorkshopBuyConditionTXT UTextBlock
---@field BuildingClass TSoftClassPtr<AInteractableActor>
---@field Inter AInteractableActor
---@field WidgetRef UGSSBaseWidget
---@field BuidingReference AInteractableActor
---@field TechnologyToUnlock UTechnologyAsset
---@field OtherBuildingRequiredLevel int32
---@field OtherBUidlingType EBuildingType
---@field GamePadVisibleBeforeColapsed boolean
local UWBP_PC_Home_Card_C = {}

---@param Visible boolean
function UWBP_PC_Home_Card_C:HintsVisibility(Visible) end
function UWBP_PC_Home_Card_C:RestoreBuilding() end
---@param IsDesignTime boolean
function UWBP_PC_Home_Card_C:PreConstruct(IsDesignTime) end
function UWBP_PC_Home_Card_C:Construct() end
function UWBP_PC_Home_Card_C:BndEvt__WBP_PC_Home_Card_MoreInfoStation_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PC_Home_Card_C:BndEvt__WBP_PC_Home_Card_BuyWorkshopButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PC_Home_Card_C:BndEvt__WBP_PC_Home_Card_BuyWorkshopButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PC_Home_Card_C:BndEvt__WBP_PC_Home_Card_BuyWorkshopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PC_Home_Card_C:BndEvt__WBP_PC_Home_Card_GSSButton_234_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
---@param Hovered boolean
function UWBP_PC_Home_Card_C:GamePadHoverRestore(Hovered) end
---@param Hover boolean
function UWBP_PC_Home_Card_C:GamePadHoverMoreIfon(Hover) end
function UWBP_PC_Home_Card_C:CustomEvent_0() end
function UWBP_PC_Home_Card_C:Destruct() end
---@param EntryPoint int32
function UWBP_PC_Home_Card_C:ExecuteUbergraph_WBP_PC_Home_Card(EntryPoint) end


