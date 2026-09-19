---@meta

---@class UNPC_MONEY_WIDGET_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnimation UWidgetAnimation
---@field CanvasPanel_0 UCanvasPanel
---@field Icon_Image UImage
---@field Image_165 UImage
---@field MoneyTXT UTextBlock
---@field SetMoney float
---@field TaskClass TSubclassOf<UTaskBase>
---@field IconToAssign UTexture2D
---@field EconomyDetailed EEconomyDetailedYieldType
local UNPC_MONEY_WIDGET_C = {}

function UNPC_MONEY_WIDGET_C:CashAnimation() end
function UNPC_MONEY_WIDGET_C:Construct() end
function UNPC_MONEY_WIDGET_C:CustomEvent_0() end
function UNPC_MONEY_WIDGET_C:SetReasonImage() end
---@param EntryPoint int32
function UNPC_MONEY_WIDGET_C:ExecuteUbergraph_NPC_MONEY_WIDGET(EntryPoint) end


