---@meta

---@class UWBP_ContractCarPartTier_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckAnim UWidgetAnimation
---@field CheckBox_120 UCheckBox
---@field Image_34 UImage
---@field Image_99 UImage
---@field Image_Icon UImage
---@field TextBlock_PartName UTextBlock
---@field PartName FText
---@field Icon UTexture2D
---@field TierColor FLinearColor
---@field CarPartStructure FSavedCarPart
---@field CarPartType EJunkyardCarPartType
local UWBP_ContractCarPartTier_C = {}

function UWBP_ContractCarPartTier_C:SetUnchecked() end
function UWBP_ContractCarPartTier_C:SetChecked() end
---@param Loaded UObject
function UWBP_ContractCarPartTier_C:OnLoaded_8FE0C6EA4E10C30FE8674FBCEEB1E420(Loaded) end
function UWBP_ContractCarPartTier_C:Construct() end
---@param EntryPoint int32
function UWBP_ContractCarPartTier_C:ExecuteUbergraph_WBP_ContractCarPartTier(EntryPoint) end


