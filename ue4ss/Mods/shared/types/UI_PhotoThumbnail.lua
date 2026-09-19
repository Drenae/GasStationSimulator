---@meta

---@class UUI_PhotoThumbnail_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NewAnimation UWidgetAnimation
---@field NotifySelection UWidgetAnimation
---@field BottomLeft UImage
---@field BottomRight UImage
---@field Button UButton
---@field Edges UCanvasPanel
---@field Photo UImage
---@field PhotoFrame UImage
---@field TopLeft UImage
---@field TopRight UImage
---@field PhotoData FS_PhotosData
---@field CurrentColor FLinearColor
---@field Texture UTexture2D
---@field Frame UTexture2D
---@field BaseSize FVector2D
---@field SizeMultiplier float
---@field GalleryReference UUI_Gallery_C
---@field SendPhoto FUI_PhotoThumbnail_CSendPhoto
---@field Page UUI_PhotoPage_C
---@field FrameFocusedColor FLinearColor
---@field FrameUnfocusedColor FLinearColor
---@field bFocusedPreviousFrame boolean
---@field bFocused boolean
---@field TimeSinceFocus float
local UUI_PhotoThumbnail_C = {}

---@return ESlateVisibility
UUI_PhotoThumbnail_C['Edges Visibility'] = function(self, ) end
---@return FLinearColor
function UUI_PhotoThumbnail_C:FrameFocusedAndUnfocusedColor() end
---@param IsDesignTime boolean
function UUI_PhotoThumbnail_C:PreConstruct(IsDesignTime) end
---@param PhotoInfo FS_PhotosData
function UUI_PhotoThumbnail_C:SetPhotoData(PhotoInfo) end
---@param GalleryReference UUI_Gallery_C
---@param OwnPage UUI_PhotoPage_C
function UUI_PhotoThumbnail_C:Initialize(GalleryReference, OwnPage) end
function UUI_PhotoThumbnail_C:Destruct() end
function UUI_PhotoThumbnail_C:BndEvt__ButtonPhoto_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UUI_PhotoThumbnail_C:Animation() end
function UUI_PhotoThumbnail_C:ResetThumb() end
function UUI_PhotoThumbnail_C:UpdatePhoto() end
function UUI_PhotoThumbnail_C:DeleteData() end
function UUI_PhotoThumbnail_C:ResetThumbAnimation() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUI_PhotoThumbnail_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UUI_PhotoThumbnail_C:ExecuteUbergraph_UI_PhotoThumbnail(EntryPoint) end
---@param PhotoData FS_PhotosData
function UUI_PhotoThumbnail_C:SendPhoto__DelegateSignature(PhotoData) end


