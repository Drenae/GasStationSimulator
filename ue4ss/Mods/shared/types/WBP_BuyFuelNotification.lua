---@meta

---@class UWBP_BuyFuelNotification_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LoopAnim UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field NoFuelOverlay UOverlay
local UWBP_BuyFuelNotification_C = {}

---@param Animation UWidgetAnimation
function UWBP_BuyFuelNotification_C:OnAnimationFinished(Animation) end
function UWBP_BuyFuelNotification_C:Remove() end
function UWBP_BuyFuelNotification_C:StartAnimation() end
---@param EntryPoint int32
function UWBP_BuyFuelNotification_C:ExecuteUbergraph_WBP_BuyFuelNotification(EntryPoint) end


