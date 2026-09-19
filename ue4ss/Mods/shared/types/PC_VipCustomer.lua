---@meta

---@class UPC_VipCustomer_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image UImage
---@field Image_37 UImage
---@field Image_114 UImage
---@field WBP_GradientColor UWBP_GradientColor_C
---@field WBP_RoundedCornersRectangle UWBP_RoundedCornersRectangle_C
---@field WBP_VipDestination UWBP_VipDestination_C
---@field WBP_VipDestination_1 UWBP_VipDestination_C
---@field WBP_VipDestination_2 UWBP_VipDestination_C
---@field WBP_VipRoute UWBP_VipRoute_C
---@field WBP_VipRoute_1 UWBP_VipRoute_C
---@field WBP_VipRoute_2 UWBP_VipRoute_C
local UPC_VipCustomer_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_VipCustomer_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_VipCustomer_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param IsDesignTime boolean
function UPC_VipCustomer_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UPC_VipCustomer_C:ExecuteUbergraph_PC_VipCustomer(EntryPoint) end


