---@meta

---@class UUI_PhotoPage_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Page UUniformGridPanel
---@field PhotosPerColumn int32
---@field PhotosPerRow int32
---@field PhotosArray TArray<UUI_PhotoThumbnail_C>
---@field PageIndex int32
---@field GalleryReference UUI_Gallery_C
local UUI_PhotoPage_C = {}

---@param IsDesignTime boolean
function UUI_PhotoPage_C:PreConstruct(IsDesignTime) end
function UUI_PhotoPage_C:Construct() end
---@param GalleryReference UUI_Gallery_C
---@param PageIndex int32
function UUI_PhotoPage_C:Initialize(GalleryReference, PageIndex) end
function UUI_PhotoPage_C:ResetPage() end
function UUI_PhotoPage_C:UpdatePage() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUI_PhotoPage_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UUI_PhotoPage_C:ExecuteUbergraph_UI_PhotoPage(EntryPoint) end


