---@meta

---@class UGSS_RadialInventory_WBP_C : URadialInventory
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hand_Ico UImage
---@field Image_74 UImage
---@field UMG_RadialMenu UUMG_RadialMenu_C
---@field bControllerInitialized boolean
---@field ECircularAvaliableOptions TArray<ECircularMenuChoice>
---@field ECircularSelectedItem ECircularMenuChoice
---@field ['Red Dot Tag'] FGameplayTag
local UGSS_RadialInventory_WBP_C = {}

---@param Icon UTexture2D
---@param RedDotTag FGameplayTag
---@param ItemLocked boolean
UGSS_RadialInventory_WBP_C['Add Radial Option'] = function(self, Icon, RedDotTag, ItemLocked) end
---@param ECircularAvaliableOptions TArray<ECircularMenuChoice>
UGSS_RadialInventory_WBP_C['Create Radial Options'] = function(self, ECircularAvaliableOptions) end
---@param bControllerInitialized boolean
function UGSS_RadialInventory_WBP_C:ShowMouseCursor(bControllerInitialized) end
function UGSS_RadialInventory_WBP_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UGSS_RadialInventory_WBP_C:Tick(MyGeometry, InDeltaTime) end
UGSS_RadialInventory_WBP_C['Event Exit'] = function(self, ) end
---@param NewSelection int32
---@param OldSelection int32
function UGSS_RadialInventory_WBP_C:BndEvt__UMG_RadialMenu_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(NewSelection, OldSelection) end
UGSS_RadialInventory_WBP_C['Event Exit Circular'] = function(self, ) end
---@param EntryPoint int32
function UGSS_RadialInventory_WBP_C:ExecuteUbergraph_GSS_RadialInventory_WBP(EntryPoint) end


