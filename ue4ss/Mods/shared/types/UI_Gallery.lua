---@meta

---@class UUI_Gallery_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OpeningNotification UWidgetAnimation
---@field BackgroundBlur UBackgroundBlur
---@field BlackBackground UBorder
---@field btnFullscreen UButton
---@field ['Buttons-Border_2'] UBorder
---@field ['Buttons-Bottom'] UBorder
---@field ['Buttons-Top'] UBorder
---@field ButtonsPanel UCanvasPanel
---@field Command_BackFullScreen UUI_CommandButton_C
---@field Command_Close UUI_CommandButton_C
---@field Command_Delete UUI_CommandButton_C
---@field Command_Fullscreen_Next UUI_CommandButton_C
---@field Command_Fullscreen_Previous UUI_CommandButton_C
---@field Command_Next UUI_CommandButton_C
---@field Command_PhotoMode UUI_CommandButton_C
---@field Command_PhotoMode_1 UUI_CommandButton_C
---@field Command_Previous UUI_CommandButton_C
---@field Command_Select UUI_CommandButton_C
---@field Command_ShowHideMouseFullScreen UUI_CommandButton_C
---@field Command_ShowMouse UUI_CommandButton_C
---@field CommandButton_OpenPhotoModeFullscreen UUI_CommandButton_C
---@field FadeImage UImage
---@field ['Fullscreen-Panel'] UCanvasPanel
---@field FullscreenImage UImage
---@field ['Gallery-Panel'] UCanvasPanel
---@field Image_19 UImage
---@field Image_83 UImage
---@field Image_115 UImage
---@field Image_246 UImage
---@field MainPanelSwitcher UWidgetSwitcher
---@field Next_Overlay UOverlay
---@field ['NextPage-HorizontalBox'] UHorizontalBox
---@field NextPageButton UButton
---@field ['Pages-HorizontalBox'] UHorizontalBox
---@field PagesScrollBox UScrollBox
---@field Previous_Overlay UOverlay
---@field ['PreviousPage-HorizontalBox'] UHorizontalBox
---@field PreviousPageButton UButton
---@field ScaleBox_0 UScaleBox
---@field Spacer_11 USpacer
---@field Spacer_13 USpacer
---@field Spacer_14 USpacer
---@field TextBlock_1 UTextBlock
---@field ['ShowingMouse?'] boolean
---@field ['ShowMouseCursorOption?'] boolean
---@field ['inFullscreen?'] boolean
---@field PhotoModeComponent UBPC_PhotoMode_C
---@field LastValidFocusedElement UWidget
---@field FullPhotosData TArray<FS_PhotosData>
---@field Fullscreen2DTexture UTexture2D
---@field Pages TArray<UUI_PhotoPage_C>
---@field PhotosThumbs TArray<UUI_PhotoThumbnail_C>
---@field PhotosPerPage int32
---@field CurrentPage int32
---@field PageOffsetToLoad int32
---@field TotalPhotos int32
---@field ['CanFreeMemory?'] boolean
---@field CurrentDataInFullscreen FS_PhotosData
---@field LastValidThumb UWidget
---@field GamepadInput boolean
---@field KeyboardInput boolean
---@field CanDelete boolean
---@field DeleteFunction boolean
local UUI_Gallery_C = {}

---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_Gallery_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUI_Gallery_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@return ESlateVisibility
function UUI_Gallery_C:ShowHideDeleteOption() end
function UUI_Gallery_C:DeletePhoto() end
---@return ESlateVisibility
function UUI_Gallery_C:SwapUpDownLeftRightVisibility() end
---@return ESlateVisibility
UUI_Gallery_C['Previous Page Button Visibility'] = function(self, ) end
function UUI_Gallery_C:CreatePages() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_Gallery_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_Gallery_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
function UUI_Gallery_C:UpdatePhotosData() end
function UUI_Gallery_C:CloseFullscreen() end
---@return ESlateVisibility
function UUI_Gallery_C:ShowHideMouseVisibility() end
---@param Index int32
function UUI_Gallery_C:SetIcons(Index) end
---@return FText
function UUI_Gallery_C:ShowHideMouseTxt() end
---@return ESlateVisibility
UUI_Gallery_C['Next Page Button Visibility'] = function(self, ) end
---@param TabIndex int32
---@param CommonButtonPressed UUI_TabButton_C
function UUI_Gallery_C:TabToOpen(TabIndex, CommonButtonPressed) end
---@param Key FKey
UUI_Gallery_C['Get Any Key'] = function(self, Key) end
---@param InFocusEvent FFocusEvent
function UUI_Gallery_C:OnRemovedFromFocusPath(InFocusEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUI_Gallery_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UUI_Gallery_C:OnMouseLeave(MouseEvent) end
function UUI_Gallery_C:Construct() end
---@param IsDesignTime boolean
function UUI_Gallery_C:PreConstruct(IsDesignTime) end
function UUI_Gallery_C:Destruct() end
---@param PhotoData FS_PhotosData
function UUI_Gallery_C:SendPhotoData(PhotoData) end
---@param NextFocusOnTheFirstPhoto boolean
function UUI_Gallery_C:NextPage(NextFocusOnTheFirstPhoto) end
---@param PrevFocusOnTheFirstPhoto boolean
function UUI_Gallery_C:PreviousPage(PrevFocusOnTheFirstPhoto) end
---@param NewPageIndex int32
---@param PrevFocusOnTheFirstPhoto boolean
function UUI_Gallery_C:LoadNextPrevPage(NewPageIndex, PrevFocusOnTheFirstPhoto) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUI_Gallery_C:Tick(MyGeometry, InDeltaTime) end
function UUI_Gallery_C:ResetKeyboardIcons() end
function UUI_Gallery_C:BndEvt__Command_Fullscreen_Next_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__Command_Next_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__Command_Fullscreen_Previous_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__Command_Previous_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__Command_BackFullScreen_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__Command_Close_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__Command_ShowMouse_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature() end
function UUI_Gallery_C:ShowMouse() end
function UUI_Gallery_C:ResetShowMouseCursor() end
function UUI_Gallery_C:BndEvt__Command_Select_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature() end
function UUI_Gallery_C:ResetFocus() end
function UUI_Gallery_C:BndEvt__CommandButton_OpenPhotoModeFullscreen_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__Command_PhotoMode_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature() end
function UUI_Gallery_C:BndEvt__PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UUI_Gallery_C:BndEvt__NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param EntryPoint int32
function UUI_Gallery_C:ExecuteUbergraph_UI_Gallery(EntryPoint) end


