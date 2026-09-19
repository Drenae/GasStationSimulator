---@meta

---@class UWBP_MonitorContract_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Compare_Button UButton
---@field CompareButton_HorizontalBox UHorizontalBox
---@field CompareIcon_IMG UImage
---@field ContractCarParts_Sizer USizeBox
---@field ContractCarParts_Vertical UVerticalBox
---@field ContractPriceArrow_IMG UImage
---@field ContractSell_Button UButton
---@field ContractSell_Overlay UOverlay
---@field MainContractTitle_TXT UTextBlock
---@field Price_TXT UTextBlock
---@field ContractRef USpecialContract
---@field OnComparePressed FWBP_MonitorContract_COnComparePressed
---@field OnSellPressed FWBP_MonitorContract_COnSellPressed
---@field bSellButton boolean
---@field CarWreck AJunkyardCarWreck
---@field Price float
---@field bCompareArrow boolean
---@field ReqCarWreckStat FCarPartData
---@field bReqMet boolean
---@field WidgetsToAdd TArray<UContractSinglePosition_C>
local UWBP_MonitorContract_C = {}

function UWBP_MonitorContract_C:CheckDecals() end
function UWBP_MonitorContract_C:CheckCarClass() end
function UWBP_MonitorContract_C:CheckCarParts() end
function UWBP_MonitorContract_C:CheckWreckStats() end
---@param ComparedContractPrice float
function UWBP_MonitorContract_C:UpdateCompareArrow(ComparedContractPrice) end
---@param Contract USpecialContract
---@param CarWreck AJunkyardCarWreck
function UWBP_MonitorContract_C:Setup(Contract, CarWreck) end
function UWBP_MonitorContract_C:BndEvt__PlatformPanel_Compare_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_MonitorContract_C:Construct() end
function UWBP_MonitorContract_C:BndEvt__WBP_MonitorContract_ContractSell_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_MonitorContract_C:ExecuteUbergraph_WBP_MonitorContract(EntryPoint) end
function UWBP_MonitorContract_C:OnSellPressed__DelegateSignature() end
---@param bCompare boolean
function UWBP_MonitorContract_C:OnComparePressed__DelegateSignature(bCompare) end


