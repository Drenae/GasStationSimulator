---@meta

---@class UWBP_WareHouseProduct_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AmmountShelfTXT UTextBlock
---@field AmmountTXT UTextBlock
---@field BG_Border UBorder
---@field ButtonsHorizontal UHorizontalBox
---@field DragoButton_SellThrow UDragoButton
---@field DragoButton_ThrowAll UDragoButton
---@field GamePadAllFrame UImage
---@field GamePadSingleFrame UImage
---@field HovBorder UBorder
---@field NameTXT UTextBlock
---@field TextBlock_Throw UTextBlock
---@field ThrowImage UImage
---@field ThrowImage_1 UImage
---@field TotalSupply_TXT UTextBlock
---@field Color int32
---@field Item TSoftClassPtr<AItem>
---@field Ammount int32
---@field IsProductRelated boolean
---@field ShelfItemsAmmount int32
---@field AmountToMoveBetweenInventory int32
---@field GamePadButtonIndex int32
local UWBP_WareHouseProduct_C = {}

---@param ItemToCheck TSoftClassPtr<AItem>
---@param ItemThatCantBeRemovedTillQUest TSoftClassPtr<AItem>
---@param Completed boolean
function UWBP_WareHouseProduct_C:CheckNoDlcIfCanBeDropped(ItemToCheck, ItemThatCantBeRemovedTillQUest, Completed) end
---@param IsHovered boolean
function UWBP_WareHouseProduct_C:OnHover(IsHovered) end
function UWBP_WareHouseProduct_C:OnThrowAll() end
function UWBP_WareHouseProduct_C:OnSellThrow() end
---@param Loaded UClass
function UWBP_WareHouseProduct_C:OnLoaded_F5466FD94745A9CACFAA0CA8AC8943BC(Loaded) end
function UWBP_WareHouseProduct_C:Construct() end
function UWBP_WareHouseProduct_C:BndEvt__DragoButton_SellThrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_WareHouseProduct_C:BndEvt__DragoButton_ThrowAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_WareHouseProduct_C:GamePadButtonClick() end
---@param Hover boolean
function UWBP_WareHouseProduct_C:GamePadHovered(Hover) end
---@param Increase boolean
function UWBP_WareHouseProduct_C:GamePadSwitchButtons(Increase) end
---@param EntryPoint int32
function UWBP_WareHouseProduct_C:ExecuteUbergraph_WBP_WareHouseProduct(EntryPoint) end


