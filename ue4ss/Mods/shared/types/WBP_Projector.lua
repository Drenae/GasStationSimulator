---@meta

---@class UWBP_Projector_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHoverUp UWidgetAnimation
---@field OhHoverDown UWidgetAnimation
---@field ContractReq_ScrollBox UScrollBox
---@field ContractRequirements_WrapBox UWrapBox
---@field Image_1 UImage
---@field Image_92 UImage
---@field Image_101 UImage
---@field Image_161 UImage
---@field MainContractTitle_TXT UTextBlock
---@field Price_TXT UTextBlock
---@field ScrollDown_Button UGSSButton
---@field ScrollUp_Button UGSSButton
---@field Time_ProgressBa UProgressBar
---@field TimeLeftAmount UTextBlock
---@field TypeOfContract_text UTextBlock
---@field WBP_SingleRequirement UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_1 UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_2 UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_3 UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_4 UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_5 UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_6 UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_7 UWBP_SingleRequirement_C
---@field WBP_SingleRequirement_8 UWBP_SingleRequirement_C
---@field ContractRef USpecialContract
---@field OnComparePressed FWBP_Projector_COnComparePressed
---@field OnSellPressed FWBP_Projector_COnSellPressed
---@field bSellButton boolean
---@field CarWreck AJunkyardCarWreck
---@field Price float
---@field bCompareArrow boolean
---@field MaxTime float
---@field TimeProgressBar float
---@field PartSlot EJunkyardCarPartType
local UWBP_Projector_C = {}

function UWBP_Projector_C:CheckWreckStats() end
UWBP_Projector_C['Update Time'] = function(self, ) end
---@param Value FText
function UWBP_Projector_C:NamePartType(Value) end
function UWBP_Projector_C:CheckDecals() end
function UWBP_Projector_C:CheckCarClass() end
function UWBP_Projector_C:CheckCarParts() end
---@param Contract USpecialContract
---@param CarWreck AJunkyardCarWreck
function UWBP_Projector_C:Setup(Contract, CarWreck) end
function UWBP_Projector_C:Construct() end
function UWBP_Projector_C:BndEvt__WBP_Projector_ScrollDown_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Projector_C:BndEvt__WBP_Projector_ScrollDown_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Projector_C:BndEvt__WBP_Projector_ScrollUp_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Projector_C:BndEvt__WBP_Projector_ScrollUp_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Projector_C:BndEvt__WBP_Projector_ScrollDown_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UWBP_Projector_C:BndEvt__WBP_Projector_ScrollUp_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() end
---@param Time FTimeStruct
function UWBP_Projector_C:OnGameTimeUpdated(Time) end
function UWBP_Projector_C:Destruct() end
---@param EntryPoint int32
function UWBP_Projector_C:ExecuteUbergraph_WBP_Projector(EntryPoint) end
function UWBP_Projector_C:OnSellPressed__DelegateSignature() end
---@param bCompare boolean
function UWBP_Projector_C:OnComparePressed__DelegateSignature(bCompare) end


