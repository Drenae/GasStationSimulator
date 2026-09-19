---@meta

---@class UTrafficInfluence_Tooltip_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image UImage
---@field TextBlock_Title UTextBlock
---@field Tooltip_Text UTextBlock
local UTrafficInfluence_Tooltip_C = {}

---@param Title FText
---@param Description FText
function UTrafficInfluence_Tooltip_C:SetCustomText(Title, Description) end
---@param EntryPoint int32
function UTrafficInfluence_Tooltip_C:ExecuteUbergraph_TrafficInfluence_Tooltip(EntryPoint) end


