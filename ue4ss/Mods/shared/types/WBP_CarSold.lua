---@meta

---@class UWBP_CarSold_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnDestruct UWidgetAnimation
---@field OnConstruct UWidgetAnimation
---@field VerticalBox_0 UVerticalBox
local UWBP_CarSold_C = {}

function UWBP_CarSold_C:Finished_0446CD804A014025EF6FA08A38343068() end
function UWBP_CarSold_C:Finished_27F2BB064BC9DDA6FAC79FA8C984EB10() end
function UWBP_CarSold_C:Construct() end
---@param SaleSlot FSaleSlot
---@param bCarSold boolean
function UWBP_CarSold_C:CarSold(SaleSlot, bCarSold) end
function UWBP_CarSold_C:Destruct() end
---@param EntryPoint int32
function UWBP_CarSold_C:ExecuteUbergraph_WBP_CarSold(EntryPoint) end


