---@meta

---@class UWBP_DepartureItemDisplay_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovAll UWidgetAnimation
---@field OnHov10 UWidgetAnimation
---@field OnHov5 UWidgetAnimation
---@field Frame_BG_IMG UImage
---@field GraphicPillColor_IMG UImage
---@field Hovering_IMG UImage
---@field Item_ICON UImage
---@field NAME_TXT UTextBlock
---@field PilotOrPlayer_TXT UTextBlock
---@field Place5_TXT_1 UTextBlock
---@field upgrade_text UTextBlock
---@field ItemClass TSubclassOf<AItem>
---@field AmountItemToPut int32
---@field UserWidget UUserWidget
---@field OnHover UWidgetAnimation
---@field IsUnHover boolean
---@field ButtonArray TArray<UDragoButton>
---@field IsPlayerItems boolean
---@field ButtonMap TMap<int32, int32>
---@field selectRowButton int32
---@field KeySelectedButton int32
---@field ItemVisible boolean
---@field Item FGeneratedLootInfo
local UWBP_DepartureItemDisplay_C = {}

---@param Condition boolean
function UWBP_DepartureItemDisplay_C:SetHovered(Condition) end
---@param newIndex int32
function UWBP_DepartureItemDisplay_C:GetActualIndex(newIndex) end
---@param IsChanged boolean
function UWBP_DepartureItemDisplay_C:decrementsKey(IsChanged) end
---@param IsChanged boolean
function UWBP_DepartureItemDisplay_C:incrementsKey(IsChanged) end
---@param IsChanged boolean
UWBP_DepartureItemDisplay_C['Decrement Row'] = function(self, IsChanged) end
---@param IsChanged boolean
function UWBP_DepartureItemDisplay_C:IncrementRow(IsChanged) end
function UWBP_DepartureItemDisplay_C:Click() end
---@param IsHovered boolean
UWBP_DepartureItemDisplay_C['On Hover'] = function(self, IsHovered) end
function UWBP_DepartureItemDisplay_C:RefreshSlot() end
function UWBP_DepartureItemDisplay_C:Construct() end
---@param EntryPoint int32
function UWBP_DepartureItemDisplay_C:ExecuteUbergraph_WBP_DepartureItemDisplay(EntryPoint) end


