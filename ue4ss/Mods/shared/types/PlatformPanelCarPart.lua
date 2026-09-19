---@meta

---@class UPlatformPanelCarPart_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ClickAnim UWidgetAnimation
---@field HoverAnim UWidgetAnimation
---@field CarPart_BG_IMG UImage
---@field CarPart_BG_IMG_1 UImage
---@field Image_54 UImage
---@field Image_dirty UImage
---@field Image_wrench UImage
---@field Main_Overlay UOverlay
---@field Overlay_0 UOverlay
---@field PartButton UGSSButton
---@field PlatformCarStatsSmall_acceleration UPlatformCarStatsSmall_C
---@field PlatformCarStatsSmall_handling UPlatformCarStatsSmall_C
---@field PlatformCarStatsSmall_speed UPlatformCarStatsSmall_C
---@field PlatformCarStatsSmall_strenght UPlatformCarStatsSmall_C
---@field Stats_Overlay UOverlay
---@field TextBlock_Name UTextBlock
---@field VariantSelectButton1 UGSSButton
---@field VariantSelectButton2 UGSSButton
---@field VariantSelectButton3 UGSSButton
---@field WheelSizeOverlay UOverlay
---@field OnHover FPlatformPanelCarPart_COnHover
---@field OnPressed FPlatformPanelCarPart_COnPressed
---@field StoragePartData FStorageCarPart
---@field PartSlot EJunkyardCarPartType
---@field IsInstalled boolean
---@field bFitsCar boolean
---@field bGhost boolean
---@field bDirty boolean
---@field RIms TArray<UGSSButton>
---@field bVariantChanged boolean
local UPlatformPanelCarPart_C = {}

---@param VariantIndex int32
function UPlatformPanelCarPart_C:SetActiveRimSize(VariantIndex) end
function UPlatformPanelCarPart_C:SetNotInstalled() end
function UPlatformPanelCarPart_C:SetInstalled() end
function UPlatformPanelCarPart_C:SetPartStats() end
---@param Loaded UObject
function UPlatformPanelCarPart_C:OnLoaded_2C9CF8434380F1F6C49E32B54C6F866A(Loaded) end
---@param Loaded UObject
function UPlatformPanelCarPart_C:OnLoaded_4626ED9845B74C37023292A3F85792B7(Loaded) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UPlatformPanelCarPart_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UPlatformPanelCarPart_C:OnMouseLeave(MouseEvent) end
function UPlatformPanelCarPart_C:Construct() end
function UPlatformPanelCarPart_C:Destruct() end
function UPlatformPanelCarPart_C:BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UPlatformPanelCarPart_C:BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UPlatformPanelCarPart_C:BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param VariantIndex int32
---@param TransformPart boolean
function UPlatformPanelCarPart_C:SelectWheelSizeVariant(VariantIndex, TransformPart) end
function UPlatformPanelCarPart_C:BndEvt__PlatformPanelCarPart_VariantSelectButton1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UPlatformPanelCarPart_C:BndEvt__PlatformPanelCarPart_VariantSelectButton2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UPlatformPanelCarPart_C:BndEvt__PlatformPanelCarPart_VariantSelectButton3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() end
function UPlatformPanelCarPart_C:UpdateTextAndIcon() end
---@param Hover boolean
function UPlatformPanelCarPart_C:GamePadHover(Hover) end
function UPlatformPanelCarPart_C:GamePadClickPart() end
---@param Enter boolean
function UPlatformPanelCarPart_C:GamePadOnMouseEnterLeave(Enter) end
---@param ButtonIndex int32
---@param Hover boolean
function UPlatformPanelCarPart_C:GamePadNavigateWheelSize(ButtonIndex, Hover) end
---@param Index int32
function UPlatformPanelCarPart_C:GamePadClickWheelButton(Index) end
---@param EntryPoint int32
function UPlatformPanelCarPart_C:ExecuteUbergraph_PlatformPanelCarPart(EntryPoint) end
---@param PartToAddData FStorageCarPart
---@param TargetSlot EJunkyardCarPartType
---@param CarPartWidget UPlatformPanelCarPart_C
---@param bRemove boolean
function UPlatformPanelCarPart_C:OnPressed__DelegateSignature(PartToAddData, TargetSlot, CarPartWidget, bRemove) end
---@param bShow boolean
---@param TargetSlot EJunkyardCarPartType
---@param PartToAddData FStorageCarPart
---@param PartButton UPlatformPanelCarPart_C
function UPlatformPanelCarPart_C:OnHover__DelegateSignature(bShow, TargetSlot, PartToAddData, PartButton) end


