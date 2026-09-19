---@meta

---@class UWBP_SingleFuelPriceBoardText_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Flip UWidgetAnimation
---@field ['6Top'] UTextBlock
---@field ['7Bottom'] UTextBlock
---@field ['7Top'] UTextBlock
---@field BG_Image_1 UImage
---@field BG_Image_2 UImage
---@field DownDragoButton UDragoButton
---@field Image_70 UImage
---@field Image_107 UImage
---@field Image_210 UImage
---@field Mask6 URetainerBox
---@field MaskTop_Bottom URetainerBox
---@field MaskTop_Top URetainerBox
---@field UpDragoButton UDragoButton
---@field Texture float
---@field OnUpArrow FWBP_SingleFuelPriceBoardText_COnUpArrow
---@field OnDownArrow FWBP_SingleFuelPriceBoardText_COnDownArrow
---@field FrontNumber int32
---@field BackNumber int32
---@field IsAnimationActive boolean
---@field NumberUpdateQueue TArray<int32>
---@field CurrentNumberForAnim int32
---@field CurrentAnimationSpeed float
local UWBP_SingleFuelPriceBoardText_C = {}

function UWBP_SingleFuelPriceBoardText_C:SetNewNumberPlus() end
function UWBP_SingleFuelPriceBoardText_C:SetNewNumberMinus() end
function UWBP_SingleFuelPriceBoardText_C:Finished_B0B4582E4355D8296883A2A866D7C5B9() end
---@param NewNumber int32
---@param ShouldAnimate boolean
function UWBP_SingleFuelPriceBoardText_C:UpdateNumber(NewNumber, ShouldAnimate) end
function UWBP_SingleFuelPriceBoardText_C:PlayNumberAnimation() end
function UWBP_SingleFuelPriceBoardText_C:DecreasePrice() end
function UWBP_SingleFuelPriceBoardText_C:IncreasePrice() end
function UWBP_SingleFuelPriceBoardText_C:BndEvt__WBP_SingleFuelPriceBoardText_UpDragoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_SingleFuelPriceBoardText_C:BndEvt__WBP_SingleFuelPriceBoardText_DownDragoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_SingleFuelPriceBoardText_C:SetRendering() end
function UWBP_SingleFuelPriceBoardText_C:DisableRendering() end
---@param EntryPoint int32
function UWBP_SingleFuelPriceBoardText_C:ExecuteUbergraph_WBP_SingleFuelPriceBoardText(EntryPoint) end
function UWBP_SingleFuelPriceBoardText_C:OnDownArrow__DelegateSignature() end
function UWBP_SingleFuelPriceBoardText_C:OnUpArrow__DelegateSignature() end


