---@meta

---@class UPC_CollectedStuff_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TextBlock_all UTextBlock
---@field TextBlock_owned UTextBlock
---@field Interactive TSoftClassPtr<UPC_DecorationBase_WBP_C>
---@field AllDecorationsCount int32
---@field OwnedDecorationCount int32
local UPC_CollectedStuff_WBP_C = {}

---@param WidgetToCreate TSoftClassPtr<UPcBaseTab>
function UPC_CollectedStuff_WBP_C:SetValues(WidgetToCreate) end
function UPC_CollectedStuff_WBP_C:SetData() end
---@param EntryPoint int32
function UPC_CollectedStuff_WBP_C:ExecuteUbergraph_PC_CollectedStuff_WBP(EntryPoint) end


