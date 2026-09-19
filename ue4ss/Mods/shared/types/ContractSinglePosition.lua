---@meta

---@class UContractSinglePosition_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PositionName_TXT UTextBlock
---@field ValueNeeded_TXT UTextBlock
---@field Requirement FText
---@field bMet boolean
local UContractSinglePosition_C = {}

function UContractSinglePosition_C:Construct() end
---@param EntryPoint int32
function UContractSinglePosition_C:ExecuteUbergraph_ContractSinglePosition(EntryPoint) end


