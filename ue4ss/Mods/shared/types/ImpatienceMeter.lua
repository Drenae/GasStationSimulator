---@meta

---@class UImpatienceMeter_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image UImage
---@field Image_calm UImage
---@field ImpatienceLevel float
---@field ImpatienceProgressChange float
---@field bImpatienceChange boolean
---@field Color1 FLinearColor
---@field Color2 FLinearColor
---@field Material_IMG UMaterialInterface
local UImpatienceMeter_C = {}

---@param IsDesignTime boolean
function UImpatienceMeter_C:PreConstruct(IsDesignTime) end
function UImpatienceMeter_C:Construct() end
function UImpatienceMeter_C:ChangeProgress() end
---@param AmountToPass float
function UImpatienceMeter_C:UpdateProgressEvent(AmountToPass) end
---@param NewImpatienceValue float
function UImpatienceMeter_C:OnCalmSkillUsed(NewImpatienceValue) end
function UImpatienceMeter_C:ImpatienceChangeProcess() end
---@param EntryPoint int32
function UImpatienceMeter_C:ExecuteUbergraph_ImpatienceMeter(EntryPoint) end


