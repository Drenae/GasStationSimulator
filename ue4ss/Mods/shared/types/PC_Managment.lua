---@meta

---@class UPC_Managment_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CanvasPanel_19 UCanvasPanel
---@field GSSButton_83 UGSSButton
---@field Image UImage
---@field Image_1 UImage
---@field Image_308 UImage
---@field MoreInfoWerehouseTXT_1 UTextBlock
---@field Overlay_45 UOverlay
---@field Overlay_Info UOverlay
---@field PC_OpenCloseDLC_Airstrip UPC_OpenCloseDLC_C
---@field PC_OpenCloseDLC_CarJunkyard UPC_OpenCloseDLC_C
---@field PC_OpenCloseDLC_RV UPC_OpenCloseDLC_C
---@field TextBlock_Name UTextBlock
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field Created TArray<UUserWidget>
---@field LastSize FVector2D
---@field CreatedSections TArray<UPC_OpenCloseSection_WBP_C>
---@field CreateNewWidgets boolean
---@field GamePadSectionIndex int32
---@field IndexToCreatedSection TMap<int32, UPC_OpenCloseSection_WBP_C>
---@field HiddenWidget UPC_ManagmentHiddenWidget_C
---@field ManagementCamera ADecorationCamera
---@field StartingCameraLocation FVector
---@field IsTidalWave boolean
local UPC_Managment_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Managment_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UPC_Managment_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UPC_Managment_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param ViewLocation FVector
---@param ViewRotation FRotator
---@param ViewPov float
---@param WorldLocation FVector
---@return FVector2D
function UPC_Managment_C:ProjectWorldToScreen(ViewLocation, ViewRotation, ViewPov, WorldLocation) end
---@param KeyEvent FKeyEvent
function UPC_Managment_C:TopMenuHandle(KeyEvent) end
function UPC_Managment_C:Construct() end
function UPC_Managment_C:CustomEscape() end
function UPC_Managment_C:BndEvt__PC_Managment_GSSButton_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UPC_Managment_C:RefreshCamera() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UPC_Managment_C:Tick(MyGeometry, InDeltaTime) end
function UPC_Managment_C:GamePadExit() end
function UPC_Managment_C:CustomEvent_0() end
function UPC_Managment_C:Destruct() end
function UPC_Managment_C:OnTabChangedToAnother() end
function UPC_Managment_C:PositionManagementCamera() end
---@param bNewGamepadMode boolean
function UPC_Managment_C:OnDeviceChanged(bNewGamepadMode) end
---@param isConstruct boolean
function UPC_Managment_C:BindOnDeviceChanged(isConstruct) end
---@param EntryPoint int32
function UPC_Managment_C:ExecuteUbergraph_PC_Managment(EntryPoint) end


