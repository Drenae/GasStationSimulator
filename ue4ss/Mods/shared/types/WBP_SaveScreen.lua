---@meta

---@class UWBP_SaveScreen_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EmptySlot UDragoButton
---@field EmptySlotBox USizeBox
---@field EmptySlottext UTextBlock
---@field Image_193 UImage
---@field Image_501 UImage
---@field MapTypeBox UHorizontalBox
---@field Overlay_2 UOverlay
---@field PC_PS4_bindings_Save UPC_PS4_bindings_C
---@field SaveGame_TXT UTextBlock
---@field SaveScrollBox UScrollBox
---@field WBP_BaseSaveButton UWBP_Map_SaveMenu_Buton_C
---@field WBP_TidalSaveButton UWBP_Map_SaveMenu_Buton_C
---@field IsSaveFunction boolean
---@field GameInstanceREF UGSSGameInstance
---@field OptionsMenuContainerWidget UOptionsMenuContainerWidgetBP_C
---@field MenuCanvasPanel UCanvasPanel
---@field IngameMenuWidget UIngameMenuContainerWidgetBP_C
---@field ButtonArray TArray<UWBP_SaveSlot_C>
---@field selectRow int32
---@field SelectedMap FString
---@field CurrentMap FString
---@field LocalMap FString
---@field IsCategoryClicked boolean
---@field GamePadCurrentMap int32
local UWBP_SaveScreen_C = {}

---@param SaveMapButton UWBP_Map_SaveMenu_Buton_C
---@param Index int32
function UWBP_SaveScreen_C:SetupMapTabs(SaveMapButton, Index) end
function UWBP_SaveScreen_C:TryToSetCurrentMapTab() end
---@param IsHovered boolean
function UWBP_SaveScreen_C:HooverEmptySlot(IsHovered) end
function UWBP_SaveScreen_C:Press_X() end
function UWBP_SaveScreen_C:Press_A() end
---@param Condition boolean
---@param JustHover boolean
function UWBP_SaveScreen_C:SetHovered(Condition, JustHover) end
---@param IsChanged boolean
UWBP_SaveScreen_C['Decrement Row'] = function(self, IsChanged) end
---@param IsChanged boolean
function UWBP_SaveScreen_C:IncrementRow(IsChanged) end
---@param self2 UGSSGameInstance
function UWBP_SaveScreen_C:CreateSaveSlots(self2) end
function UWBP_SaveScreen_C:Refresh() end
function UWBP_SaveScreen_C:Destruct() end
---@param Save boolean
function UWBP_SaveScreen_C:InitSaveLoad(Save) end
function UWBP_SaveScreen_C:BndEvt__EmptySlot_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_SaveScreen_C:OnPressedUp() end
function UWBP_SaveScreen_C:OnPressedDown() end
---@param IsDesignTime boolean
function UWBP_SaveScreen_C:PreConstruct(IsDesignTime) end
function UWBP_SaveScreen_C:Construct() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UWBP_SaveScreen_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UWBP_SaveScreen_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
---@param MapName FString
---@param DLCName EDLCName
function UWBP_SaveScreen_C:OnButtonClicked(MapName, DLCName) end
function UWBP_SaveScreen_C:BindMapButtons() end
function UWBP_SaveScreen_C:SetDisabled() end
function UWBP_SaveScreen_C:OnPressedLeft() end
function UWBP_SaveScreen_C:OnPressedRight() end
function UWBP_SaveScreen_C:OnPressedExtra() end
function UWBP_SaveScreen_C:OnPressedSelect() end
---@param bIsGamepadBeingUsed boolean
function UWBP_SaveScreen_C:OnChangeInputDeviceMenuUI(bIsGamepadBeingUsed) end
---@param SaveSlot UUserWidget
---@param DeleteConfirmation boolean
function UWBP_SaveScreen_C:SpawnPopup(SaveSlot, DeleteConfirmation) end
function UWBP_SaveScreen_C:SetCurrentSavesTab_Base() end
function UWBP_SaveScreen_C:SetCurrentSavesTab_Tidal() end
---@param EntryPoint int32
function UWBP_SaveScreen_C:ExecuteUbergraph_WBP_SaveScreen(EntryPoint) end


