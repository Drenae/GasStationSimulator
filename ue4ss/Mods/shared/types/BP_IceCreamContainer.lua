---@meta

---@class ABP_IceCreamContainer_C : AIceCreamContainer
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Widget UWidgetComponent
---@field ['As Ice Cream Flavour Sign WBP'] UIce_Cream_flavour_sign_WBP_C
local ABP_IceCreamContainer_C = {}

---@return FName
function ABP_IceCreamContainer_C:GetInteractionName() end
function ABP_IceCreamContainer_C:ReceiveBeginPlay() end
function ABP_IceCreamContainer_C:UI_UpdateAmountWidget() end
---@param bShow boolean
function ABP_IceCreamContainer_C:UI_ShowAmountWidgets(bShow) end
---@param EntryPoint int32
function ABP_IceCreamContainer_C:ExecuteUbergraph_BP_IceCreamContainer(EntryPoint) end


