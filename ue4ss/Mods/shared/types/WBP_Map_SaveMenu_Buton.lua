---@meta

---@class UWBP_Map_SaveMenu_Buton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NewAnimation UWidgetAnimation
---@field Button UButton
---@field Image_70 UImage
---@field TextBlock UTextBlock
---@field TextToSet FText
---@field OnMapButtonClicked FWBP_Map_SaveMenu_Buton_COnMapButtonClicked
---@field MapName FString
---@field StrokeSize FName
---@field DlcRequired EDLCName
local UWBP_Map_SaveMenu_Buton_C = {}

---@param IsClicked boolean
function UWBP_Map_SaveMenu_Buton_C:SetClicked(IsClicked) end
---@param IsDesignTime boolean
function UWBP_Map_SaveMenu_Buton_C:PreConstruct(IsDesignTime) end
function UWBP_Map_SaveMenu_Buton_C:BndEvt__WBP_Map_SaveMenu_Buton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_Map_SaveMenu_Buton_C:ExecuteUbergraph_WBP_Map_SaveMenu_Buton(EntryPoint) end
---@param MapName FString
---@param DLCName EDLCName
function UWBP_Map_SaveMenu_Buton_C:OnMapButtonClicked__DelegateSignature(MapName, DLCName) end


