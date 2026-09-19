---@meta

---@class UWBP_TechTreeSlot_C : UTechNodeWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field ActionUpgradesButton UGSSButton
---@field CurrentUpgradeOverlay UImage
---@field Image UImage
---@field Image_149 UImage
---@field Image_163 UImage
---@field Image_frame UImage
---@field Image_locked UImage
---@field Image_upgrade_Green UImage
---@field Image_upgrade_owned UImage
---@field Image_upgrade_Red UImage
---@field Overlay_name UOverlay
---@field OwnedCanBeUpgradedIndicator UOverlay
---@field TextBlock_lvl UTextBlock
---@field TextBlock_Name UTextBlock
---@field UpgradeCard_IMG UImage
---@field WBP_KeyHint_BottomButton UWBP_KeyHint_C
---@field ['BP Tech Tree Manager'] UBP_TechTreeManager_C
---@field OnMoneyUpdateBinded boolean
---@field ['Upgrade Widget Ref'] UWBP_UpgradesParent_C
---@field bIsClickable boolean
---@field Timer FTimerHandle
local UWBP_TechTreeSlot_C = {}

---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TechTreeSlot_C:OnMouseButtonUp(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TechTreeSlot_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param Unlocked boolean
function UWBP_TechTreeSlot_C:CheckTechnologyByBuildingsLevel(Unlocked) end
function UWBP_TechTreeSlot_C:SetVizualAndInfo() end
---@param Unlocked boolean
function UWBP_TechTreeSlot_C:UpdateUnlocked(Unlocked) end
---@param TechNode UTTTechNode
---@param IsUnLocked boolean
function UWBP_TechTreeSlot_C:OnTechUnlocked(TechNode, IsUnLocked) end
function UWBP_TechTreeSlot_C:OnTechNodeInitialized() end
---@param UpdatedTime FTimeStruct
function UWBP_TechTreeSlot_C:OnTimeUpdateCheckCanBeUpgraded(UpdatedTime) end
---@param Toogle boolean
function UWBP_TechTreeSlot_C:ToggleHightlight(Toogle) end
function UWBP_TechTreeSlot_C:CustomOnClicked() end
---@param TechTree UTechnologyTree
function UWBP_TechTreeSlot_C:OnTechTreeSelect(TechTree) end
---@param UpgradeWidgetRef UWBP_UpgradesParent_C
function UWBP_TechTreeSlot_C:SetUpgradeWidget(UpgradeWidgetRef) end
function UWBP_TechTreeSlot_C:BlockCLick() end
function UWBP_TechTreeSlot_C:CustomEvent_0() end
function UWBP_TechTreeSlot_C:Destruct() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UWBP_TechTreeSlot_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UWBP_TechTreeSlot_C:OnMouseLeave(MouseEvent) end
---@param Hover boolean
function UWBP_TechTreeSlot_C:GamePadHover(Hover) end
---@param NewTechAsset UTechnologyAsset
function UWBP_TechTreeSlot_C:InitializeTechNode(NewTechAsset) end
---@param EntryPoint int32
function UWBP_TechTreeSlot_C:ExecuteUbergraph_WBP_TechTreeSlot(EntryPoint) end


