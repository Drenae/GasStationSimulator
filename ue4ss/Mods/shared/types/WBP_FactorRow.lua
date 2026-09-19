---@meta

---@class UWBP_FactorRow_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field FactorInput UTextBlock
---@field FactorName UTextBlock
---@field GradientLeft UBorder
---@field GradientRight UBorder
---@field ImactIconSwitcher UWidgetSwitcher
---@field Image_249 UImage
---@field MainButton UButton
---@field NegativeIcon UImage
---@field NeutralIcon UImage
---@field PositiveIcon UImage
---@field RowSize USizeBox
---@field UpcomingIcon_1 UImage
---@field Size FVector2D
---@field InFactorName FText
---@field FactorImage UTexture
---@field OnHoover FWBP_FactorRow_COnHoover
---@field TrafficStat E_TrafficStat::Type
---@field LastImpact int32
---@field Hovered boolean
---@field UpcomingEventTexture UTexture
local UWBP_FactorRow_C = {}

---@param FactorImage UTexture
function UWBP_FactorRow_C:GetFactorImage(FactorImage) end
---@param FactorName FText
---@param ValidName boolean
function UWBP_FactorRow_C:GetFactorName(FactorName, ValidName) end
---@param Description FText
function UWBP_FactorRow_C:GetDescription(Description) end
---@param Impact int32
function UWBP_FactorRow_C:GetCurrentImpact(Impact) end
---@param IsDesignTime boolean
function UWBP_FactorRow_C:PreConstruct(IsDesignTime) end
---@param TrafficImpact int32
function UWBP_FactorRow_C:ChangeImpact(TrafficImpact) end
function UWBP_FactorRow_C:BndEvt__WBP_FactorRow_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FactorRow_C:BndEvt__WBP_FactorRow_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FactorRow_C:Hoover() end
function UWBP_FactorRow_C:Unhoover() end
function UWBP_FactorRow_C:Refresh() end
---@param EntryPoint int32
function UWBP_FactorRow_C:ExecuteUbergraph_WBP_FactorRow(EntryPoint) end
---@param FactorRow UWBP_FactorRow_C
---@param Hovered boolean
function UWBP_FactorRow_C:OnHoover__DelegateSignature(FactorRow, Hovered) end


